#include <iostream>


void permutation(int N, int k, int count, bool *flag, int &num, int *temp) { // count begin with 0, num is number  of permuation
    if (count == k) {
        num ++;
        for (int i = 0; i < k; i ++) {
            std :: cout << temp[i] << " ";
        }
        std :: cout << std :: endl;
    }
    else {
        for (int i = 1; i <= N; i++) {
            if(flag[i - 1] == true)
                continue;
            flag[i - 1] = true;
            temp[count] = i;
            count ++;
            permutation(N, k, count, flag, num, temp);
            count --; flag[i - 1] = false;
        }
    }
}


void printAllPermutations(int N, bool *flag, int &num, int *temp) {
    permutation(N, N, 0, flag, num, temp);
} 
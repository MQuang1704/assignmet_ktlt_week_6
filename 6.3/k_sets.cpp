#include <iostream>

void print_all_K_sets(int N, int k, int count, int start, int &num, int *temp) { // count begin = 0; start = 1; num is number of sets
    if (count == k) {
        num ++;
        for (int i = 0; i < k; i ++) {
            std :: cout << temp[i] << " ";
        }
        std :: cout << std :: endl;
    }
    else {
        for (int i = start; i <= N; i++) {
            temp[count] = i;
            count ++;
            print_all_K_sets(N, k, count, i + 1, num, temp);
            count --;
        }
    }
}
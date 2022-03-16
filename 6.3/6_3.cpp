#include <iostream>

void permutation(int N, int k, int count, bool *flag, int &num, int *temp);
void printAllPermutations(int N, bool *flag, int &num, int *temp);
void print_all_K_sets(int N, int k, int count, int start, int &num, int *temp);

int main () {
    int k, N;
    int count = 0;
    int num = 0;
    bool *flag = new bool [N];
    int *temp = new int [k];
    for (int i = 0 ; i < N; i++) {
        flag[i] = false;
    }
    std :: cout << "N = "; std :: cin >> N;
    std :: cout << "a) all permutations from 1 to N\n";
    printAllPermutations(N, flag, num, temp);
    //std :: cout << num << std :: endl; // num is the number of permutations
    num = 0;
    std :: cout << "k = ";
    std :: cin >> k;
    std :: cout << "b) K-permutations\n";
    permutation(N, k, 0, flag, num, temp);
    //std :: cout << num << std :: endl; // num is the number of permutations
    num = 0;
    std :: cout << "c) K-sets\n";
    print_all_K_sets(N, k, 0, 1, num, temp);
    //std :: cout << num << std :: endl;// num is the number of all sets


    delete []flag;
    delete []temp;
}
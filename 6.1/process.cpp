#include<iostream>

//a
int sumFrom1toN(int N) {
    if (N == 1)
        return 1;
    else
        return sumFrom1toN(N - 1) + N;
}

//c


int XpowerOfN(int x, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return XpowerOfN(x, n - 1) *x;
    }
}

//c

double calculateC(int n) {
    if (n == 1)
        return 1;
    else {
        if (n % 2 == 0) {
            return calculateC(n - 1) - 1 / n;
        }
        else {
            return calculateC(n - 1) + 1 / n;
        }
    }
}

//d
int *printPascalTriangle(int H) {
    int *row = new int [H];
    if (H <= 2) {
        for (int i = 0; i < H; i ++) {
            std :: cout << "1 ";
            row[i] = 1;
        }
        std :: cout << std :: endl;
    }
    else {
        int *previous_row = printPascalTriangle(H - 1);
        for (int i = 0; i < H; i ++) {
            if (i == 0 || i == H - 1){
                std :: cout << "1 ";
                row[i] = 1; 
            }
            else {
                row[i] = previous_row[i] + previous_row[i - 1];
                std :: cout << row[i] << " ";
            }
        }
        std :: cout << std :: endl;
        delete [] previous_row;
    }
    return row;
}
#include <iostream>
using namespace std;


// ver 1: no array

// int pascalTriangle (int H, int start) {
//     if (H == 1 || start == 1 || start == H) 
//         return 1;
//     else {
//             int previous = pascalTriangle(H - 1, start -1);
//             int previous2 =pascalTriangle(H - 1, start);
//             return previous + previous2;
//     }
// }

// void printPascalTriangle(int H){
// for (int h = 1; h <= H; h++) {
//         for (int i = 1; i <=h; i++)
//             std :: cout << pascalTriangle(h, i) << " ";
//         std :: cout << std :: endl;
//     }
// }

int *printPascalTriangle(int H) {
    int *row = new int [H];
    if (H <= 2) {
        for (int i = 0; i < H; i ++) {
            std :: cout << "1 ";
            row[i] = 1;
        }
        std :: cout << endl;
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
        std :: cout << endl;
        delete [] previous_row;
    }
    return row;
}
int main () {
  delete [] printPascalTriangle(100);
}
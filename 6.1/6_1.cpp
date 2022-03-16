#include <iostream>
using namespace std;
int sumFrom1toN(int N);
int XpowerOfN(int x, int n);
double calculateC(int n);
int *printPascalTriangle(int);

int main () {
    int N;
    std :: cout << "enter n "; std :: cin >> N;
    std :: cout << "a) A = 1 + 2 + ... + n = " << sumFrom1toN(N) << "\n";
    int x;
    std :: cout << "b) x^n\n ";
    std :: cout << "x = "; std :: cin >> x;
    std :: cout << " n = "; std :: cin >> N;
    std :: cout << "b) x^n = " << XpowerOfN(x, N);
    std :: cout << endl << "c) print Pascal triangle\n";
    std :: cout << "height of triangle "; std :: cin >> N;
    delete [] printPascalTriangle(N);
    return 0;
}
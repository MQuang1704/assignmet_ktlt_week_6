#include "header.h"

int main() {
    int size;
    std :: cout << "size Of Array "; std :: cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        std :: cout << "arr[" << i << "] = ";
        std :: cin >> arr[i];
    }
    std :: cout << "sum of even Number " << sumEven(arr, 0, size - 1);
    std :: cout << std :: endl;
    std :: cout << "Max value in the array " << findMax(arr, 0 , size - 1) << "\n";
    std :: cout << "enter a string: ";
    char str[100];
    std :: cin.ignore();
    std :: cin.getline(str, 100);
    reverseString(str, 0 , strlen(str) - 1);
    std :: cout << "reverse string: " << str << "\n";
    std :: cout << "amonut of money ";
    int money;
    std :: cin >> money;
    printFormatMoney(money, 0);
    return 0;
}
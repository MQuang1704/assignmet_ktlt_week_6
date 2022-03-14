#include <iostream>
#include <iomanip>
using namespace std;

//a
int sumEven(int arr[], int l, int r) {
    if (l == r ) {
        if (arr[r] % 2 == 0)
            return arr[r];
        else 
            return 0;
    }
    else {
        int mid = (l + r) / 2;
        int sum1 = sumEven(arr, l, mid);
        int sum2 = sumEven(arr, mid + 1, r);
        return sum1 + sum2;
    }
}

// b
int max (int arr[], int l, int r) {
    if (l == r) {
        return arr[r];
    }
    int max1 = max (arr, l, (l+r)/2);
    int max2 = max (arr, (l + r) / 2 + 1, r);
    return (max1 > max2) ? max1 : max2;
} 


// d
void printFormatMoney(unsigned int money, int count = 0) {
    if (money >= 0 && money < 1000) {
        std :: cout << "$" << money;
        if (count !=  0)
            cout << ".";
    }
    else {
        printFormatMoney(money /1000, count + 1);
        money %= 1000;
        if (money >=100)
            std :: cout << money;
        else if ( money >= 10)
            std :: cout << "0" << money;
        else    
            std :: cout << "00" << money;
        if (count != 0)
            std :: cout << ",";
    }
}
int main() {
    int arr[6] ={1, 2, 3, 4, 5, 100};
    //std :: cout << max(arr, 0 , 5);
    printFormatMoney(1006);
}
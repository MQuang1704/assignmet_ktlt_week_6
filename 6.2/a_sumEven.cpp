#include "header.h"
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
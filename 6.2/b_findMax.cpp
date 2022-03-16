#include "header.h"

int findMax (int arr[], int l, int r) {
    if (l == r) {
        return arr[r];
    }
    int max1 = findMax (arr, l, (l+r)/2);
    int max2 = findMax (arr, (l + r) / 2 + 1, r);
    return (max1 > max2) ? max1 : max2;
} 
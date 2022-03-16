#include "header.h"

void reverseString(char *str, int l, int r) { 
    if (l >= r) {
        return;
    }
    else {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        reverseString(str, l + 1, r - 1);
    }
}
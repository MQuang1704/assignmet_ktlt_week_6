#include "header.h"

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
            std :: cout << ".";
    }
}
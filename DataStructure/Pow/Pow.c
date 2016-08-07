//
//  Pow.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "Pow.h"
int isEven(int num);
int pow_logn(int base, int power){
    if (power == 0) {
        return 1;
    } else if(power == 1){
        return base;
    }
    if (isEven(power)) {
        return pow_logn(base * base, power / 2);
    }else{
        return pow_logn(base * base, power / 2) * base;
    }
    pow()
}

int isEven(int num){
    return !(num & 0x1);
}
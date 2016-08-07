//
//  main.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "Pow.h"
int main_Pow(){
    int base = 2;
    int power = 0;
    for (power = 0 ; power < 5; power++) {
        printf("%d^%d=%d\n", base, power, pow_logn(base, power));
    }
    return 0;
}
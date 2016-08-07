//
//  main.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "Gcd.h"

int main_Gcd(){
    int M = 1989;
    int N = 1590;
    printf("%d and %d Gcd is : %d\n", M, N, EuclidGcd(M, N));
    return 0;
}
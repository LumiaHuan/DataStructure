//
//  Gcd.c
//  LumiaDataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "Gcd.h"

int EuclidGcd(int M, int N){
    if (M < N) {
        int tmp = M;
        M = N;
        N = tmp;
    }
    int rem = 0;
    while (N > 0) {
        rem = M % N;
        M = N;
        N = rem;
    }
    return M;
}
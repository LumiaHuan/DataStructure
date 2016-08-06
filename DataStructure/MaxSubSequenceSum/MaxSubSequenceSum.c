//
//  MaxSubSequenceSum.c
//  DataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include "MaxSubSequenceSum.h"
#include <stdio.h>

int maxSubsequenceSum_ON3(const int sequence[], int N){
    if (sequence == NULL || N<=0) {
        printf("error sequence == NULL || N<=0 in maxSubsequenceSum_ON3\n");
        return -1;
    }
    int currentSum, maxSum, i, j, k;
    maxSum = 0;
    for (i = 0; i < N; i++) {
        for (j = i; j<N; j++) {
            currentSum = 0;
            for (k = i; k<=j; k++) {
                currentSum += sequence[k];
            }
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    return maxSum;

}


int maxSubsequenceSum_ON2(const int sequence[], int N){
    if (sequence == NULL || N<=0) {
        printf("error sequence == NULL || N<=0 in maxSubsequenceSum_ON2\n");
        return -1;
    }
    int currentSum, maxSum, i, j;
    maxSum = 0;
    for (i = 0 ; i < N; i++) {
        currentSum = 0;
        for (j = i; j < N; j++) {
            currentSum += sequence[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
        
    }
    return maxSum;
}

int maxSubsequenceSum_ON1(const int sequence[], int N){
    if (sequence == NULL || N<=0) {
        printf("error sequence == NULL || N<=0 in maxSubsequenceSum_ON1\n");
        return -1;
    }
    int currentSum, maxSum, i;
    maxSum = 0;
    currentSum = 0;
    for (i = 0; i < N; i++) {
        currentSum += sequence[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }else if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;

}

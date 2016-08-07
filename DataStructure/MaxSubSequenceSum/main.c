//
//  main.c
//  DataStructure
//
//  Copyright © 2016 lumiahuan. All rights reserved.
//

#include <stdio.h>
#include "MaxSubSequenceSum.h"
#include "ArrayTools.h"

int main_MaxSubSequenceSum(int argc, const char * argv[]) {
    int sequence[] = {-2, 1, 1, 2, -3};
    int N = sizeof(sequence) / sizeof(int);
    printIntArray(sequence, N);
    printf("Max subsequence sub is : %d\n", maxSubsequenceSum_ON3(sequence, N));
    printf("Max subsequence sub O(N2) is : %d\n", maxSubsequenceSum_ON2(sequence, N));
    printf("Max subsequence sub O(N1) is : %d\n", maxSubsequenceSum_ON1(sequence, N));

    return 0;
}

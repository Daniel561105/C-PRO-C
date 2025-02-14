//1512

#include <stdio.h>


//C4取3 = 4x3x2/3x2x1 = 4
//thought it will be useful
int conbination(int a,int b) {
    int up = 1;
    int down = 1;
    int i,j;
    for (i = 0;i < b;i++) {
        up *= a - i;
        down *= i + 1;
    }
    return up / down;
}

int numIdenticalPairs(int* nums, int numsSize) {
    //3,1,2,3,3,2 = 14 - 6 = 8 / 2 = 4
    int i,j;
    int answer;
    for (i = 0;i < numsSize;i++) {
        for (j = 0;j < numsSize;j++) {
            if (nums[i] == nums[j]) {
                answer += 1;
            }
        }
    }
    return (answer - numsSize) / 2;
}
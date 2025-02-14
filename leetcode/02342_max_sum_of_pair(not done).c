//2342 not finish because i have to understand hashtable

#include <stdio.h>
#include <stdlib.h>

// turn 9976 into 9+9+7+6
int number_to_digit_sum(int num) {
    int i = 0;
    while (num > 0) {
        i += num % 10;
        num /= 10;
    }
    return i;
}

int maximumSum(int* nums, int numsSize) {
        
}

int main() {
    int i;
    int arr[] = {18,43,36,13,7};
    for (i = 0;i < 5;i++) {
        arr[i] = number_to_digit_sum(arr[i]);
    } // arr is turn to digit sum
    for (i = 0;i < 5;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}
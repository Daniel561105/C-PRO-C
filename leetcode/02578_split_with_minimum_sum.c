//2578

#include <stdio.h>

// split num into two numbers that has the min sum
// 10 <= num <= 1000000000, max is five digits + five digits

int cmp (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// first sort the number

int splitNum(int num) {
    int new_num[10];
    int count = 0; // 4325=4, 99999=5
    while (num > 0) {
        new_num[count++] = num % 10;
        num /= 10;
    }
    qsort(new_num,count,sizeof(int),cmp);
    // remove the zeros in front of the array
    int digit = 0;
    int arr[10];
    for (int j = 0; j < count; j++) {
        if (new_num[j] != 0) {
            arr[digit++] = new_num[j];
        }
    }
    int result = 0;
    // the smallest result will be add by small at front and big at tail 
    if (digit % 2 == 0) {
        for (int i = 0; i < digit; i+=2) {
            result = 10*result + (arr[i]+arr[i+1]);
        }
    }
    else {
        result = arr[0];
        for (int i = 1; i < digit; i+=2) {
            result = 10*result + (arr[i]+arr[i+1]);
        }
    }
    return result;
}

// ex: 
// 4325 => 2345
// 25 + 34 = 59

// 687 => 678
// 68 + 7 = 75

// 56789
// 647 
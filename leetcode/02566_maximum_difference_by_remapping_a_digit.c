//2566

#include <stdio.h>

// change the first non-nine to 9, change the first non-zero to zero
// which can make the largest and the smallest value

int minMaxDifference(int num) {
    int arr1[10];
    int count = 0;
    while (num > 0) {
        arr1[count++] = num % 10;
        num /= 10;
    }
    for (int a = 0, b = count-1; a < b; a++, b--) {
        int temp = arr1[a];
        arr1[a] = arr1[b];
        arr1[b] = temp;
    }
    int arr2[10];
    memcpy(arr2,arr1,sizeof(arr1));
    int replace1, replace2;
    for (int i = 0; i < count; i++) {
        if (arr1[i] != 9) {
            replace1 = arr1[i];
            break;
        }
    }
    for (int i = 0; i < count; i++) {
        if (arr2[i] != 0) {
            replace2 = arr2[i];
            break;
        }
    }
    for (int i = 0; i < count; i++) {
        if (arr1[i] == replace1) {
            arr1[i] = 9;
        }
    }
    for (int i = 0; i < count; i++) {
        if (arr2[i] == replace2) {
            arr2[i] = 0;
        }
    }
    int result1 = 0, result2 = 0;
    for (int i = 0; i < count; i++) {
        result1 = result1*10 + arr1[i];
    }
    for (int i = 0; i < count; i++) {
        result2 = result2*10 + arr2[i];
    }
    return result1 - result2;
}

// 11891 => 99899, 00890 
// 99899-890=99009

// 90 => 99, 00
// 99
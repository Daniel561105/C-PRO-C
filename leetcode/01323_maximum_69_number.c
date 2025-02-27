//1323

#include <stdio.h>

int maximum69Number (int num) {
    int count = 0;
    int arr[4];
    while (num != 0) {
        arr[count++] = num % 10;
        num /= 10;
    }
    for (int i = 0, j = count-1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < count; i++) {
        if (arr[i] == 6) {
            arr[i] = 9;
            break;
        }
    }
    int result = 0;
    for (int i = 0; i < count; i++) {
        result = result*10 + arr[i];
    }
    return result;
}

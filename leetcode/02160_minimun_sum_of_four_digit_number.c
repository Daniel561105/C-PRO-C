//2160

#include <stdio.h>

int cmp(const void*a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int minimumSum(int num) {
    int a,b,c,d;
    d = num % 10;
    c = (num/10) % 10;
    b = ((num/10)/10) % 10;
    a = (((num/10)/10)/10) % 10;
    int arr[] = {a,b,c,d};
    qsort(arr,4,sizeof(int),cmp);
    int ten = 10*(arr[0] + arr[1]);
    int one = arr[2] + arr[3];
    return ten + one;
}
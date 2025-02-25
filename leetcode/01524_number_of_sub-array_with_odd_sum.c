//1524

#include <stdio.h>

// seems like it will work but sub-array doesn't include non-contiguous

/*int numOfSubarrays(int* arr, int arrSize) {
    int n = arrSize;
    int count_odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            count_odd += 1;
        }
    }
    int count_even = n - count_odd;
    if (count_odd == 0) return 0;
    return pow(2,count_odd-1)*pow(2,count_even);
}
*/

// just to mention that many question uses 10^9+7 as mod 
// because it is a big prime that is easy to remember
int numOfSubarrays(int* arr, int arrSize) {
    int count_odd = 0, count_even = 1;
    int prefix_sum = 0, result = 0;
    for (int i = 0; i < arrSize; i++) {
        prefix_sum += arr[i];
        if (prefix_sum % 2 == 0) {
            result = (result + count_odd) % 1000000007;
            count_even += 1;
        }
        else {
            result = (result + count_even) % 1000000007;
            count_odd += 1;
        }
    }
    return result;
}

/*
[1,2,3,4,5,6,7]
even:(0)
prefix=1, result=1, count_odd=1, count_even=1 奇數跟前面的偶數相減還是奇數 
odd:(1), even:(0)
prefix=3, result=2, count_odd=2, count_even=1 
odd:(1),(1,2), even:(0)
prefix=6, result=4, count_odd=2, count_even=2 偶數減前面的奇數，共會有這麼多種
odd:(1),(1,2), even:(0),(1,2,3)
prefix=10, result=6, count_odd=2, count_even=3 
odd:(1),(1,2), even:(0),(1,2,3),(1,2,3,4)
prefix=15, result=9, count_odd=3, count_even=3 
odd:(1),(1,2),(1,2,3,4,5) even:(0),(1,2,3),(1,2,3,4)
prefix=21, result=12, count_odd=4, count_even=3
odd:(1),(1,2),(1,2,3,4,5),(1,2,3,4,5,6) even:(0),(1,2,3),(1,2,3,4)
prefix=28, result=16, count_odd=4, count_even=4
odd:(1),(1,2),(1,2,3,4,5),(1,2,3,4,5,6) even:(0),(1,2,3),(1,2,3,4),(1,2,3,4,5,6,7)
*/
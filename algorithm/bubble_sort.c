#include <stdio.h>
 
/*
a sorting way that has a O(n^2) time complexity
if nums[i] > nums[i+1], swap them
at the worst case will cost (n-1) + (n-2) +...+ 1
because everytime the largest value will be put to the last index
*/

void bubble (int data[], int n) {
    for (int i = n-1; i > 0; i--) {
        int swap_count = 0;
        for (int j = 0; j < i; j++) {
            if (data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                swap_count += 1;
            }
        }
        if (swap_count == 0) break; // if the case is already ordered, time will converge to O(n)
    }
}

int main() {
    int arr[] = {9,1,4,7,7,6,3,5,6};
    int count = sizeof(arr) / sizeof(int);
    bubble(arr,count);
    for (int i = 0; i < count; i++) {
        printf("%d  ",arr[i]);
    }
    return 0;
}
//481

#include <stdio.h>

int magicalString(int n) {
    // stuck in the memory problem for a while 2n will runtime error but n+2 will success
    int *a = (int *)malloc(sizeof(int)*(n+2)); 
    a[0] = 1; 
    a[1] = 2;
    a[2] = 2;
    int slow = 2, fast = 3, count = 0;
    
    while (fast < n) {
        int next_num = (a[fast-1] == 1) ? 2 : 1;
        for (int i = 0; i < a[slow] && fast < n; i++) {
            a[fast] = next_num;
            fast++;
        }
        slow++;
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            count++;
        }
    }
    free(a);
    return count;
}


/*使用指標來遍歷一個整數陣列*/
/*利用指標特性把整數陣列倒轉*/

#include <stdio.h>

int main() {
    int a[5] = {64,89,33,10,11};
    int *a_ptr = a; //ptr is now pointing at "64"
    int b[5];
    int c[5];
    int *c_ptr = c;
    int i;
/*make sure where ptr is pointing to*/
    for (i = 0;i < 5;i++) {
        printf("index[%d]:%d\n",i,a_ptr[i]);
    }
    printf("\n\n");

/*loop for reverse a to b*/
    for (i = 0;i < 5;i++) {
        b[i] = a[4-i];
    }
    printf("array b is :");
    for (i = 0;i < 5;i++) {
        printf(" %d ",b[i]);
    }
    printf("\n\n");

/*uses pointer to make the same result from a to c*/
    for (i = 0;i < 5;i++) {
        *(c_ptr + i) = *(a_ptr + 4 - i);  //give c_ptr a value of a_ptr
    }

    for (i = 0;i < 5;i++) {
        printf("%d ",c[i]);
    }
        
    return 0;

}
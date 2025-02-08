/*使用指標來遍歷一個整數陣列，並將每個元素加 1*/

#include <stdio.h>

int main() {
    int a[5] = {64,89,33,10,11};
    int *ptr = a; //ptr現在指向a的第一個"64"
    int b[5];
    int i;
    for (i = 4;i >= 0;i--) {
        printf("index[%d]:%d\n",i,ptr[i]);
    }
    
    return 0;

}
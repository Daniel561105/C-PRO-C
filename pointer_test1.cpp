/*定義一個整數變數，使用單指標指向該變數，並修改變數的值為 50*/

#include <stdio.h>

int main() {
    int a;
    int *pointer = &a;
    a = 10;
    printf("pointer is pointed to :%p\n",pointer); //記憶體位置
    printf("pointer is pointed to the value :%d\n",*pointer); //記憶體位置所儲存的值
    return 0;
}
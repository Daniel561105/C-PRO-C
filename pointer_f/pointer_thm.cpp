#include <stdio.h>
#include <stdlib.h>

// %p 指的是格式化輸出指標(記憶體的位置)
// a是擺放10的位置，ptr為一個指標變數，存放的值是a的記憶體位置

int main() {
    int a = 10;
    int *ptr = &a;  // ptr 指向 a 的記憶體位址

    printf("變數 a 的值: %d\n", a);
    printf("變數 a 的位址: %p\n", &a);
    printf("指標 ptr 的值: %p\n", ptr);
    printf("指標 ptr 指向的值: %d\n", *ptr);  // 透過指標取得 a 的值

    return 0;
}

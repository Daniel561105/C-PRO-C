#include <stdio.h>
#include <stdlib.h>  // 用於 atoi() 字串轉數字

int main(int argc, char **argv) {
    printf("參數數量: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("參數 %d: %s\n", i, argv[i]);
    }

    // 如果使用者提供了一個數字參數，轉成 int
    if (argc > 1) {
        int number = atoi(argv[1]);  // 把字串轉成 int
        printf("數字參數轉換後: %d\n", number);
    }

    return 0;
}

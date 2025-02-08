#include <stdio.h>
#include <stdlib.h>

/*break是給予迴圈一個必須停止的點，當break條件為true時跳出迴圈*/

/*continue則是遇到條件為true時，會強制開始下一次迴圈，反之遇到false則是繼續執行*/

/*goto是給訂條件若為true直接送到found:的地方*/

int main() {
    int a;
    a = 1;
    do
    {
       printf("%d ",a); 
       a++;
       if (a >= 10) break; 
    } while (1);
    printf("\n\n");

/*------------------------------------------------*/

    for (a = 1 ; a <= 10 ; a++) {
        if (a % 2 == 1) continue;
        printf("%d ",a);
    }
    printf("\n\n");
/*-------------------------------------------------*/

    for (a = 1 ; a <= 10 ; a++) {
        if (a % 2 == 1) continue;
        printf("%d ",a);
        if (a == 6) {
            goto found;
        }
    }
    found:
    return 0;
}
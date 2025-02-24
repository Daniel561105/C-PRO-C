#include <stdio.h>
#include <stdlib.h>

int main() {
/*2 for loop*/
    int i,j,k;
    for (i = 1;i<=9;i++) {
        for (j = 1;j<=9;j++) {
            k = i * j;
            printf("%d*%d=%2d ",i,j,k);
        }
        printf("\n");
    }
    printf("\n\n");

/*-------------------------------------------------------------*/

/*for + while*/
    for (i = 1;i<=9;i++) {
        j = 1;
        while (j <= 9 && j >= 1) {
            k = i*j;
            printf("%d*%d = %2d ",i,j,k);
            j++;
        }
        printf("\n");
    }    

    return 0;
}
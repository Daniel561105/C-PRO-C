/*two dimension array pointer*/

#include <stdio.h>

/*
64 53 42
89 88 87
22 32 42
07 06 05
*/

int main() {
    int a[4][3] = {{64,53,42},{89,88,87},{22,32,42},{7,6,5}};
    int *a_ptr = (int *)a;
    int b[12];
    int *b_ptr = b;
    int c[4][3];
    int *c_ptr = (int*)c;
    int i;
    int j;
    printf("a is a 4x3 array like\n");
    printf("%d",a[0][0]);
    printf(" %d",a[0][1]);
    printf(" %d\n",a[0][2]);
    printf("%d",a[1][0]);
    printf(" %d",a[1][1]);
    printf(" %d\n",a[1][2]);
    printf("%d",a[2][0]);
    printf(" %d",a[2][1]);
    printf(" %d\n",a[2][2]);
/*由上到下由左到右會自動補位，若超過則return 0*/
    printf("0%d",a[0][9]);    //printf("0%d",a[3][0])
    printf(" 0%d",a[1][7]);   //printf(" 0%d",a[3][1])
    printf(" 0%d\n",a[2][5]); //printf(" 0%d\n",a[3][2])
    printf("\n\n");

/*把b變成a的樣子，但實際上b是一維，a是二維*/
    printf("b is a 1x12 array of\n");
    for (i = 0;i < 12;i++) {
        *(b_ptr + i) = *(a_ptr + i);
        if (i % 3 == 0 && i > 2) {
            printf("\n");
        }
        printf("%d ",b[i]);
    }
    printf("\n\n");

/*put values from a to c when a,c are both two dimension*/
    printf("c is a 4x3 array of\n");
    for (i = 0;i < 12;i++) {
        *(c_ptr + i) = *(a_ptr + i);
    }
    for (i = 0;i < 4;i++) {
        for (j = 0;j < 3;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
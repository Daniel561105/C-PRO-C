#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 1, n, c, i;
    printf("it is going to generate a series of fibonacci sequence:");
    scanf("%d",&n);
    for (i = 1 ; i <= n ; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }

    return 0;
}
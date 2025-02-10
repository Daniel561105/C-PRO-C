#include <stdio.h>
#include <stdlib.h>

/*就是python裡面的 def function(參數1,參數2....) 之後可以拿來用的東西*/

void showmsg(void) {
    printf("Show the ancient recrusive example\n");
}

void seq(void) {
    int a = 0, b = 1, n = 20, c, i;
    printf("%d %d ",a,b);
    for (i = 1 ; i <= n ; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
}

int main() {
    showmsg();
    seq();
    return 0;
}
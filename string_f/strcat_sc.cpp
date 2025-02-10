/*we are going to stick s2 after s1,so use strlen to find the index that can accomplish this*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sc_strcat(char *s1,char *s2) {
    int a,b,i;
    char *s3 = (char *)malloc(a + b + 1); //malloc can give memory space instead of define it at first
    a = strlen(s1);
    b = strlen(s2);
    for (i = 0;i < a;i++) {
        s3[i] = s1[i];
    }
    for (i = a;i < a + b;i++) {
        s3[i] = s2[i-a];
    }
    return s3;
}

int main() {
    char a[100] = "我知道我明了";
    char b[] = "我要你快樂~~";
    printf("%s\n",strcat(a,b));
    printf("%s\n",sc_strcat(a,sc_strcat(a,b)));
    return 0;
}
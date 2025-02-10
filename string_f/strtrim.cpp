/*to delete spaces at head and tail*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strtrim(char *s1) {
    int start = 0;
    int end = strlen(s1) - 1;
    int i;
    
    while (s1[start] == ' ') {
        start++;
    } 
    while (s1[end] == ' ') {
        end--;
    }
    for (i = 0;i < end - start;i++) {
        s1[i] = s1[start + i];
    }
    s1[i] = '\0';

    return s1;
}

int main() {
    char a[] = "     dumb ways to die~~     ";
    printf("%d\n",strlen(a));
    printf("%s\n",strtrim(a));
    printf("%d\n",strlen(a));
    return 0;
}
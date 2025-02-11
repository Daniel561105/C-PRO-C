//771

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int how_many_jewels(char *jewels,char *stones) {
    int i;
    int j;
    int k;
    
    for (i = 0;i < strlen(stones);i++) {
        for (j = 0;j < strlen(jewels);j++) {
            if (stones[i] == jewels[j]) {
                k++;
            }
        }
    }
    return k;
}

int main() {
    int a;
    char *b = "aA";
    char *c = "aAAccdx";
    a = how_many_jewels(b,c);
    printf("%d",a);
    return 0;
}
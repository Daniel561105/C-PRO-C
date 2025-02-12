//1108

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// turn 1.1.1.1 => 1[.]1[.]1[.]1

char * defangIPaddr(char * address){
    int i;
    int j = 0;
    char *answer = (char *)malloc(3 * strlen(address) + 1); // if string there will be '\0'
    for (i = 0;i < strlen(address);i++) {
        if (address[i] == '.') {
            answer[j++] = '[';
            answer[j++] = '.';
            answer[j++] = ']';
        }
        else {
            answer[j++] = address[i];
        }
    }
    answer[j] = '\0'; 
    return answer;
}

int main() {
    char *address = "162.313.229.61";
    char *a;
    a = defangIPaddr(address);
    printf("%s",a);
    return 0;
}
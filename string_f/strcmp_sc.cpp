#include <string.h>
#include <stdio.h>

// 因為這個函數是用來比較的，並不會改變輸入的參數，所以用const把它固定，減少不必要的問題產生
// register 每個東西都從記憶體中取，但如果加上register後，他就可以從寄存器裡面取，速度快很多但是有限，可以想成是有數量限制的飛雷神
// char的減法其實是比大小(ASCII)，如果 a > b ==> 大於:1，反觀 a < b ==> 小於:-1 
int cs_strcmp(char *p1,char *p2);

int main() {
    int result = cs_strcmp("aaa","zzz");
    printf("%d",result);
    return 0;
}

int cs_strcmp(char *p1,char *p2) { 
    char *s1 = p1;
    char *s2 = p2;
    char c1,c2;

    do {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 == '\0') {
            return c1 - c2; 
        }
    }while (c1 == c2);
    return c1 - c2;
}
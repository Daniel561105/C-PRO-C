//415

#include <stdio.h>
#include <string.h>

// bad solution which it hope us to not convert string into integer
char* addStrings(char* num1, char* num2) {
    int a = 0, b = 0;
    char *result = (char *)malloc(sizeof(char) * 40);
    for (int i = 0;i < strlen(num1);i++) { // run three times if num1 = 123
        a = a * 10 + (num1[i] - '0'); 
    }
    for (int j = 0;j < strlen(num2);j++) {
        b = b * 10 + (num2[j] - '0');
    }
    a += b;
    sprintf(result,"%d",a);
    return result;
}
 
// as the topics says
char* addStrings(char* num1, char* num2) {
    int maxlen = (strlen(num1) > strlen(num2)) ? strlen(num1) : strlen(num2); 
    char *result = (char *)malloc((maxlen+2)*sizeof(char));
    int i = strlen(num1) - 1, j = strlen(num2) - 1; //得到最尾端位置
    int carry = 0, k = 0;
    while (i >= 0 || j >= 0 || carry != 0) { //carry != 0是為了避免7+3=10然後就結束的問題發生
        int sum = carry;
        if (i >= 0) {
            sum += num1[i] - '0';
        }
        if (j >= 0) {
            sum += num2[j] - '0';
        }
        carry = sum / 10;
        result[k++] = (sum % 10) + '0';
        i--,j--;
    }
    result[k] = '\0';
    //到這裡時result已經是倒轉的最後字串了
    for (int a=0,b=k-1;a<b;a++,b--) {
        char temp;
        temp = result[a];
        result[a] = result[b];
        result[b] = temp;
    }
    return result;
}
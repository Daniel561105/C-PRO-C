/*useful string function*/

#include <stdio.h>
#include <string.h>

int main() {
/*strcasecmp => compare two strings order and calculate*/
/*case means that it include ascii to */
    printf("%d,%d\n",strcmp("acb","abc"),strcasecmp("acb","abc"));     //99 - 98 = 1
    printf("%d,%d\n",strcmp("ABC","abc"),strcasecmp("ABC","abc"));     //A排在a前面
    printf("%d,%d\n",strcmp("z","azzzz"),strcasecmp("z","azzzz"));     //122 - 97 = 25
    printf("%d,%d\n",strcmp("abcd","abca"),strcasecmp("abcd","abca")); //100 - 97 = 3
    printf("%d,%d\n",strcmp("abc","abcd"),strcasecmp("abc","abcd"));   //0 - 100 = -100
    
    return 0;
}
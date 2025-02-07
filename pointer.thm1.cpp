#include <stdio.h>
#include <string.h>

int main() {
    char old_name[] = "aaa/bbb/c/ccccc/rrrrrr";
    char *program_name;
    if ((program_name = strrchr(old_name,'/')) == NULL)  
        program_name = old_name;
    else
        program_name++;
    
    printf("program name is %s",program_name);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[1000];
    gets(c);
    char* b = strrev(c);
    printf("%s", b);

    return 0;
}
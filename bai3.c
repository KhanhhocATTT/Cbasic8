#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[1000];
    gets(c);
    int cnt = 0;
    for(int i = 0; i < strlen(c); i++){
        if(isspace(c[i])) ++cnt;
    }
    printf("%d" , cnt + 1);

    return 0;
}
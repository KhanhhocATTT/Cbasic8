#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(char c[]){
    int digit = 0, num = 0, special = 0;
    for(char i = 0; i < strlen(c); i++){
        if(c[i] >= '0' && c[i] <= '9') ++num;
        else if(c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z') ++digit;
        else ++special;
    }
    printf("%d %d %d", digit, num, special);
}

int main(){
    char c[1000];
    gets(c);
    count(c);

    return 0;
}
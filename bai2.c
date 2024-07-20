#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char c[1000];
    gets(c);
    for(int i = 0; i < strlen(c); i++){
        if(islower(c[i])){
            c[i] = toupper(c[i]);
        }
        else{
            c[i] = tolower(c[i]);
        }
    }
    printf("%s", c);

    return 0;
}
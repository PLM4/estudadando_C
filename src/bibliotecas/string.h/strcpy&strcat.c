#include <stdio.h>
#include <string.h>

int main(){

    char str1[20], str2[20];

    strcpy(str1, "Segunda, "); 
    
    strcpy(str2, "Terca"); 

    strcat(str1, str2);

    printf("%s", str1);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    for (int i = len-1; i >= 0; i--) {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;

}
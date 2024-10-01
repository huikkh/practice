#include <stdio.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
    int freq[26] = {0}; 
    char str[100001];     
    fgets(str, sizeof(str), stdin);  
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            freq[tolower(str[i]) - 'a']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d", freq[i]);
        if (i < 25) {
            printf(" ");  
        }
    }
    printf("\n");
    
    return 0;
}

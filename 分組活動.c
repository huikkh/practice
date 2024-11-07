#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, T;
    char p[11]; 

    scanf("%d", &n);    
    scanf("%s", p);    
    scanf("%d", &T);   

    for (int i = 0; i < n; i++) {
        printf("%c", p[i]);
        
        if ((i + 1) % T == 0 && i != n - 1) {
            printf(" "); 
        }
    }
    printf("\n"); 

	return 0;
}
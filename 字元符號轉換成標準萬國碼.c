#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char character;
    while(scanf("%c", &character)!=EOF){
        printf("%d\n", character);
    }

	return 0;
}
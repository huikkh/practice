#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char letter;
    scanf("%c", &letter);

    if(letter == 'E'){
        printf("ByeBye\n");
    }
    else if(letter == 'M'){
        printf("Male\n");
    }
    else{
        printf("Female\n");
    }

	return 0;
}
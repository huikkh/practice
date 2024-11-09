#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    while(scanf("%d", &num)!=EOF){
        printf("%c\n", num);
    }

    return 0;
}
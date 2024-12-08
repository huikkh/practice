#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num);

    if(num <= 100 && num >= 90){
        printf("A\n");
    }
    else if(num <= 89 && num >= 80){
        printf("B\n");
    }
    else if(num <= 79 && num >= 70){
        printf("C\n");
    }
    else if(num <= 69 && num >= 60){
        printf("D\n");
    }
    else if(num <= 59 && num >= 0){
        printf("E\n");
    }
    else{
        printf("error\n");
    }

	return 0;
}
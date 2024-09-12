#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);

    if(num>=3&&num<=5){
        printf("Spring\n");
    }
    else if(num>=6&&num<=8){
        printf("Summer\n");
    }
    else if(num>=9&&num<=11){
        printf("Autumn\n");
    }
    else if(num==12||num==1||num==2){
        printf("Winter\n");
    }

	return 0;
}
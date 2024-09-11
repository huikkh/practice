#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int array[6];
    for(int i = 0;i < 6;i++){
        scanf("%d",&array[i]);
    }

    for(int i = 5;i >= 0;i--){
        if(i == 0){
            printf("%d",array[i]);
        }
        else{
            printf("%d ",array[i]);
        }
    }
    printf("\n");

	return 0;
}
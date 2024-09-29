#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num[10];
    for(int i = 0;i < 10;i++){
        scanf("%d",&num[i]);
    }

    for(int i = 9;i >= 0;i--){
        if(i == 0){
            printf("%d",num[0]);
        }
        else{
            printf("%d ",num[i]);
        }
    }
    printf("\n");
    
	return 0;
}
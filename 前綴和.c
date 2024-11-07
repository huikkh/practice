#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);
    int integer[201];
    for(int i = 0;i < num;i++){
        scanf("%d",&integer[i]);
    }
    int ans[201];
    for(int i = 0;i < num;i++){
        if(i == 0){
            ans[i] = integer[i];
        }
        else{
            ans[i] = ans[i-1] + integer[i];
        }
    }
    for(int i = 0;i < num;i++){
        if(i == num-1){
            printf("%d",ans[i]);
        }
        else{
            printf("%d ",ans[i]);
        }
    }
    printf("\n");



	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);

    int arr[201];
    for(int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }

    int ans[201];
    for(int i = 0;i < num;i++){
        if(i == 0){
            ans[i]=arr[i];
        }
        else{
            ans[i]=arr[i]-arr[i-1];
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
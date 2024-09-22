#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);
    
    int arr[num+1];
    for(int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }

    int n,temp;
    scanf("%d",&n);
    arr[num]=n;

    for(int i = 0;i < num;i++){
        for(int j = 0;j < num-i;j++){
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0;i < num+1;i++){
        if(i == num){
            printf("%d",arr[i]);
        }
        else{
            printf("%d,",arr[i]);
        }
    }
    printf("\n");
    
	return 0;
}
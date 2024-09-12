#include <stdio.h>
#include <stdlib.h>
int triple(int num){
    int temp=1;
    for(int i=0;i<3;i++){
        temp*=num;
    }
    return temp;
}
int main(int argc, char *argv[]) {
    int arr[6];
    int ans=0;
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<6;i++){
        ans+=triple(arr[i]);
    }
    printf("%d\n",ans);


	return 0;
}
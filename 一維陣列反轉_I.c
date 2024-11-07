#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int array[100];
    int i = 0 , a;

    while(scanf("%d",&a)!=EOF)  {
        array[i]=a;
        i++;
    }

    for(int j=i-1;j>=0;j--)  {
        if(j==0){
            printf("%d",array[j]);
        }
        else{
            printf("%d ",array[j]);
        }
    }
    printf("\n");

	return 0;
}
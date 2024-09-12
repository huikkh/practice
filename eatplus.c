#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);

    int arr[101];
    for(int i = 0;i < num;i++){
        scanf("%d",&arr[i]);
    }

    int first,last;
    scanf("%d %d",&first,&last);

    int ans = 0;
    for(int i = first - 1;i < last;i++){
        ans+=arr[i];
    }

    printf("%d\n",ans);

	return 0;
}
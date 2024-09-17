#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num[6];
    for(int i = 0;i < 6;i++){
        scanf("%d",&num[i]);
    }
    int ans = 0;
    for(int i = 0;i < 6;i++){
        ans+=(num[i]*num[i]);
    }
    printf("%d\n",ans);




	return 0;
}
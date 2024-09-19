#include <stdio.h>
#include <stdlib.h>

int f(int n){
    if(n == 0||n == 1){
        return n+1;
    }
    return f(n-1)+f(n/2);
}
int main(int argc, char *argv[]) {
    int num;
    scanf("%d",&num);

    printf("%d\n",f(num));

	return 0;
}
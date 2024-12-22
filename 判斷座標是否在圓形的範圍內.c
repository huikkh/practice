#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
    int x, y;
    scanf("%d %d", &x, &y);

    int a = pow(x, 2);
    int b = pow(y, 2);

    if(a + b <= 10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }


	return 0;
}
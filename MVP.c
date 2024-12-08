#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2, num3, num4, num5;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int ans = num1 + 2 * (num3 + num2 + num4 - num5);
    if(ans > 45){
        printf("A\n");
    }
    else if(ans <= 44 && ans >= 35){
        printf("B\n");
    }
    else if(ans <= 34 && ans >= 25){
        printf("C\n");
    }
    else if(ans < 25){
        printf("D\n");
    }


	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int mile1;

    scanf("%d", &mile1);

    double km1 = mile1 * 1.6;

    printf("%.1lf\n", km1);

	return 0;
}
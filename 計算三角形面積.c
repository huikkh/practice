#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int base, height;
    scanf("%d %d", &base, &height);
    
    double area = (base * height) / 2.0;
    printf("Triangle area:%.1f\n", area);
    
    return 0;
}
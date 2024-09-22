#include <stdio.h>

void encrypt(int number) {
    int digits[4];

    for (int i = 3; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int i = 0; i < 4; i++) {
        digits[i] = (digits[i] + 7) % 10;
    }

    int temp;
    temp = digits[0];
    digits[0] = digits[2];
    digits[2] = temp;

    temp = digits[1];
    digits[1] = digits[3];
    digits[3] = temp;

    for (int i = 0; i < 4; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);

    encrypt(number);

    return 0;
}
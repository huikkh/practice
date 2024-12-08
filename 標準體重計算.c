#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int gender, height;
    
    while (scanf("%d %d", &height, &gender) != EOF) {
        double weight;
        if (gender == 1) {
            // 男性標準體重公式
            weight = (height - 80) * 0.7;
        } else if (gender == 2) {
            // 女性標準體重公式
            weight = (height - 70) * 0.6;
        }

        // 輸出標準體重，取至小數點後一位
        printf("%.1lf\n", weight);
    }


	return 0;
}
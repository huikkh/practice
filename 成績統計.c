#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    float total_chinese = 0, total_english = 0, total_math = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        float chinese, english, math;
        scanf("%f %f %f", &chinese, &english, &math);
        total_chinese += chinese;
        total_english += english;
        total_math += math;
    }
    
    float average_total = (total_chinese + total_english + total_math) / (3 * n);
    float average_chinese = total_chinese / n;
    float average_english = total_english / n;
    float average_math = total_math / n;
    
    printf("%.1f %.1f %.1f %.1f\n", average_total, average_chinese, average_english, average_math);
    
    return 0;
}

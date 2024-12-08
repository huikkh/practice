#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int score[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
    }

     for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(score[i] < score[j]){
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
     }

     for(int i = 0; i < n; i++){
        printf("%d %d\n", i+1, score[i]);
     }


	return 0;
}
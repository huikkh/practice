#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    scanf("%d", &num);

    int first, second, last;
    for(int i = 0; i < num; i++){
        scanf("%d %d %d", &first, &second, &last);
        
        if(first >= 60 && second >= 60 && last >= 60){
            printf("P\n");
        }
        else if((first + second + last >= 220) && 
                ((first >= 60 && second >= 60 && last < 60) || 
                 (first >= 60 && second < 60 && last >= 60) || 
                 (first < 60 && second >= 60 && last >= 60))){
            printf("P\n");
        }
        else if((first + second + last < 220) && 
                ((first >= 60 && second >= 60 && last < 60) || 
                 (first >= 60 && second < 60 && last >= 60) || 
                 (first < 60 && second >= 60 && last >= 60))){
            printf("M\n");
        }
        else if((first >= 80 && second < 60 && last < 60) || 
                (first < 60 && second >= 80 && last < 60) || 
                (first < 60 && second < 60 && last >= 80)){
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }

    return 0;
}

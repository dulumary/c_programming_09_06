#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  
    int scores[10] = {89, 93, 91, 93, 92, 78, 90, 90, 93, 90};
    int numbers[10];
    int zeros[8] = {0, };
    int index = 3;
    
    printf("첫번째 값은 %d \n", scores[0]);
    printf("두번째 값은 %d \n", scores[1]);
    printf("세번째 값은 %d \n", scores[2]);
    printf("네번째 값은 %d \n", scores[3]);
    printf("첫번째 값은 %d \n", scores[4]);
    printf("두번째 값은 %d \n", scores[5]);
    printf("세번째 값은 %d \n", scores[6]);
    printf("네번째 값은 %d \n", scores[7]);
    printf("첫번째 값은 %d \n", scores[8]);
    printf("두번째 값은 %d \n", scores[9]);
    
    printf("점수는 %d 입니다. \n", scores[4]);
    
    scores[4] = 45;
    printf("점수는 %d 입니다. \n", scores[4]);
    
    printf("점수는 %d 입니다. \n", scores[index]);
    scores[index] = 100;
    printf("점수는 %d 입니다. \n", scores[index]);
    
    printf("점수는 %d 입니다. \n", scores[index + 1]);
    
    
    for(int i = 0; i < 10; i++) {
        printf("scores[%d] 의 점수는 %d 입니다.\n", i, scores[i]);
    }
    
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += scores[i];
    }
    
    printf("평균은 %f 입니다.", sum / 10.0);
    
}

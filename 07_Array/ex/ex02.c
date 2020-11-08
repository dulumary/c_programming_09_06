#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int main(int argc, const char * argv[]) {
    

    int scores[5][3] = {
        {89, 93, 91},
        {91, 82, 72},
        {98, 93, 94},
        {65, 63, 57},
        {45, 50, 48}
    };
    
    printf("3번쨰 학생 2번째 점수는 %d 입니다\n", scores[2][1]);
    printf("2번쨰 학생 1번째 점수는 %d 입니다\n", scores[1][0]);
    printf("5번쨰 학생 3번째 점수는 %d 입니다\n", scores[4][2]);
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d번째 학생 %d번쨰 점수는 %d 입니다\n", i + 1, j + 1, scores[i][j]);
        }
    }
    
    int sum = 0;
    for(int j = 0; j < 3; j++) {
        sum += scores[0][j];
    }
    
    printf("%d번 학생의 평균은 %f 입니다.\n", 1, sum / 3.0);
    
    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += scores[i][j];
        }
        
        printf("%d번 학생의 평균은 %f 입니다.\n", i + 1, sum / 3.0);
    }
    
    int numbers[5][5] = {
        {0, },
        {0, },
        {0, },
        {0, },
        {0, }
    };
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            numbers[i][j] = 1;
//            numbers[i][j] = i;
//            numbers[i][j] = j;
            
//            if(i == 1) {
//                numbers[i][j] = 1;
//            }
//
//            if(j == 1) {
//                numbers[i][j] = 1;
//            }
//            if(i == j) {
//                numbers[i][j] = 1;
//            }
        }
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
}


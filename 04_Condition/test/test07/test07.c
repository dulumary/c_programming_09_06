#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
        연도와 달이 주어 졌을때, 해당 달이 몇일 까지 있는지 출력 하세요.
        윤년 조건도 포함하여  출력하세요.
     */

    int year = 0;
    int month = 0;

    printf("연월 : ");
    scanf("%d %d", &year, &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        case 2: {
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                printf("29\n");
            } else {
                printf("28\n");
            }
        }
            break;
    }

    /*
     
        삼각형의 세변의 길이를 입력 받고, 삼격형이 성립 가능한지 출력 하세요.

        > 삼각형 성립 조건
        > 삼각형의 가장 긴변의 길이가 다른 두변의 길이의 합보다 작아야 한다.
      
        삼각형이 성립하면 true 아니면 false

     */

    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    printf("세변의 길이를 입력 하세요 :");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 < (side2 + side3) && side2 < (side1 + side3) && side3 < (side1 + side2))  {
        printf("true\n");
    } else {
        printf("false\n");
    }

    /*
        시간(hour)과 분(min)이 주어질때, 해당 시간보다 45분전의 시간을 계산하여 출력하세요
        ( 시간은 24시간 표현방법을 사용한다 )
     */
       
    int hour = 0;
    int minute = 0;

    printf("시간 분 입력 :");
    scanf("%d %d", &hour, &minute);

    minute -= 45;
    if(minute < 0) {
       minute += 60;
       hour--;
    }

    if(hour < 0) {
       hour += 24;
    }

    printf("%d시 %d분\n", hour, minute);
    
    /*
        점수 두개를 입력 받고 합격 여부를 출력 하라
        (평균이 60점 이상이면 합격, 단 한과목이라도 50점 이하면 과락이다)
     */
    
    int score1 = 0;
    int score2 = 0;

    printf("점수1 : ");
    scanf("%d", &score1);
    printf("점수2 : ");
    scanf("%d", &score2);

    float average = (score1 + score2) / 2.0;

    if(score1 <= 50 || score2 <= 50) {
        printf("과락\n");
    } else if(average > 60) {
        printf("합격\n");
    } else {
        printf("탈락\n");
    }
    
    return 0;
}



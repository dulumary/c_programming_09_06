#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        세개의 수를 입력 받아서 짝수일 때만 출력 하세요.
     */
    
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    
    printf("세개의 수를 입력 하세요 : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    
    if(number1 % 2 == 0) {
        printf("%d는 짝수 입니다.\n", number1);
    }
    
    if(number2 % 2 == 0) {
        printf("%d는 짝수 입니다.\n", number2);
    }
    
    if(number3 % 2 == 0) {
        printf("%d는 짝수 입니다.\n", number3);
    }
    
    /*
        비만을 판단하기 위해서 BMI 수치가 필요하다.

        ㅠㅡ

        * BMI에 따른 비만 판정
        BMI 수치    비만 판정
        ~10 이하    정상
        ~20 이하    과체중
        20~ 초과    비만
     */
    
    int bmi = 0;
    printf("bmi 수치를 입력 하세요 : ");
    scanf("%d", &bmi);
    
    if(bmi <= 10) {
        printf("정상 \n");
    } else if(bmi <= 20) {
        printf("과체중 \n");
    } else {
        printf("비만 \n");
    }
    
    /*
        두 점수를 입력 받고, 평균이 70점 이상이면, 합격, 그렇지 않으면 불합격을 출력하세요.
     */
    
    printf("두 점수를 입력 하세요 : ");
    scanf("%d %d", &number1, &number2);
    
    float average = (number1 + number2) / 2.0;
    
    if(average >= 70) {
        printf("합격 입니다.\n");
    } else {
        printf("불 합격 입니다.\n");
    }
    
    /*
        3개의 정수를 입력받아, 가장 큰 값을 출력하세요
     */
    
    printf("세 수를 입력 하세요 : ");
    scanf("%d %d %d", &number1, &number2, &number3);
    
    int max = number1;
    
    if(max < number2) {
        max = number2;
    }
    
    if(max < number3) {
        max = number3;
    }
    
    printf("가장 큰수는 %d 이다\n", max);
    
    /*
        월(month)를 입력 받아서 어떤 계절인지 출력하세요
        3, 4, 5 : 봄
        6 , 7, 8 : 여름
        9, 10, 11 : 가을
        12, 1, 2 : 겨울
     */
    
    int month = 0;
    printf("월을 입력 하세요 : ");
    scanf("%d", &month);
    
    switch (month) {
        case 3:
        case 4:
        case 5:
            printf("봄\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("여름\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("가을\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("겨울\n");
            break;
            
        default:
            printf("잘못 입력 하셨습니다");
            break;
    }
    
    
   
    return 0;
}



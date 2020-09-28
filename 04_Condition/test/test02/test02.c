#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        두 개의 점수를 입력 받아서 두 점수 모두가 70점이 넘으면 합격입니다 를 출력하세요
    */
    
    int score1 = 0;
    int score2 = 0;
    
    printf("두 점수를 입력하세요 : ");
    scanf("%d %d", &score1, &score2);
    
    if(score1 >= 70 && score2 >= 70) {
        printf("합격입니다.\n");
    }
    
    /*
        수를 입력 받아서 2와 3의 공배수인지 판별하세요.
     */
    
    int number = 0;
    printf("수를 입력하세요 : ");
    scanf("%d", &number);
    
    if(number % 2 == 0 && number % 3 == 0) {
        printf("%d 는 2와 3의 공배수 입니다.\n", number);
    }
    
    /*
        1  ~ 10의 수를 입력 받아야 한다.
        범위를 넘어 갈 경우 잘못 입력 하셨습니다를 출력하세요.
     */
    
    printf("1~10 사이의 수를 입력 하세요 : ");
    scanf("%d", &number);
    
    if(number < 0 || number > 10) {
        printf("잘못 입력 하셨습니다.\n");
    }
    
    return 0;
}



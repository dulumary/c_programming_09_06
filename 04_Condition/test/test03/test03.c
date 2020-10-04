#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
       정수를 입력 받고 음수인지 양수인지 출력하세요.
    */
    
    int number = 0;
    
    printf("정수를 입력 하세요 : ");
    scanf("%d", &number);
    
    if(number < 0) {
        printf("음수 입니다.");
    } else {
        printf("양수 입니다.");
    }
    
    /*
        점수를 입력 받고 90 점이상이면 A , 80점 이상 B, 70점 이상 C, 60점 이상 D, 그외 F 를 출력하세요
     */
    
    int score = 0;
    
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    
    if(score >= 90) {
        printf("A\n");
    } else if(score >= 80) {
        printf("B\n");
    } else if(score >= 70) {
        printf("C\n");
    } else if(score >= 60) {
        printf("D\n");
    }  else {
        printf("F\n");
    }
    
    return 0;
}



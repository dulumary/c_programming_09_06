#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int noodleCup = 850;
    float pi = 3.14;
    char quiz = 'O';
    
    printf("육개장 가격은 %d 입니다.", noodleCup);
    printf("원주율 pi는 %f 입니다.", pi);
    printf("퀴즈의 정답은 %c 입니다.\n\n", quiz);
    
    // 타입에 맞지 않는 값을 넣음
    noodleCup = pi;
    quiz = 10.5;
    pi = 'X';
    
    printf("육개장 가격은 %d 입니다.", noodleCup);
    printf("원주율 pi는 %f 입니다.", pi);
    printf("퀴즈의 정답은 %c 입니다.\n", quiz);
    
    pi = 3.14;
    int intPi = (int)pi;
    printf("int pi 는 %d\n", intPi);
    
    pi = (float)intPi;
    printf("float pi 는 %f\n", pi);
    
    float divide = intPi / 2;
    printf("나눈 값은 %f\n", divide);
    
    divide = intPi / (float)2;
    printf("나눈 값은 %f\n", divide);
    
    divide = intPi / 2.0;
    printf("나눈 값은 %f\n", divide);
    
    char numberChar = '5';
    printf("문자 : %c\n", numberChar);
    printf("정수 : %d\n", numberChar);
    
    printf("정수 : %d\n", numberChar - '0');
    
    char alphabet = 't';
    printf("문자 : %c\n", alphabet);
    printf("문자 : %d\n", alphabet - 'a');
    printf("문자 : %c\n", alphabet - 'a' + 'A');
    
    int number = 24;
    
    printf("%02d\n", number);
    printf("%03d\n", number);
    printf("%04d\n", number);
    printf("%05d\n", number);
    
    int month = 7;
    int day = 9;
    printf("%02d%02d\n", month, day);
    
    double realPi = 3.1415926535897;
    printf("파이 : %f\n", realPi);
    printf("파이 : %.2f\n", realPi);
    printf("파이 : %.8f\n", realPi);
    
    return 0;
    
}

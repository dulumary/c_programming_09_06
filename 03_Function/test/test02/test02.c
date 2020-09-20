
#include <stdio.h>

/*
    정수를 받아서 2제곱의 결과를 돌려 주는 함수를 만드세요.
 */

int getSquared(int x) {
    return x * x;
}

/*
    4개의 값을 받아서 평균을 돌려 주는 함수를 만드세요.
 */

float getAverage(int score1, int score2, int score3, int score4) {
    float average = (score1 + score2 + score3 + score4) / 4.0;
    return average;
}

/*
    두 수를 받아서 몫과 나머지를 출력 하는 함수를 만드세요.
 */

void printQuotientRemainder (int number1, int number2) {
    float quotient = number1 / (float)number2;
    int remainder = number1 % number2;
    
    printf("몫 : %f 나머지 : %d\n", quotient, remainder);
}

/*
    정수를 입력 받아서 짝수면 0 홀수면 1을 돌려 주는 함수를 만드세요.
 */

int getEvenOdd(int number) {
    int result = number % 2;
    return result;
}


int main(int argc, const char * argv[]) {
    
    printf("5의 제곱은 %d 이다\n", getSquared(5));
    printf("평균은 %f 이다\n", getAverage(59, 38, 98, 78));
    printQuotientRemainder(10, 4);
    printf("%d\n", getEvenOdd(7));
   
    return 0;
}

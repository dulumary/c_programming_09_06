
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    /*
      소수를 입력 받아서 내림으로 정수를 출력하세요.
     */
    
    double floatNumber = 0;
    printf("소수를 입력 하세요 : ");
    scanf("%lf", &floatNumber);
    
    int number = (int)floor(floatNumber);
    printf("%lf의 내린 결과는 %d 이다.\n", floatNumber, number);
    
    /*
      음수를 입력 받아서 절대 값을 출력 하세요.
     */
    printf("정수를 입력 하세요 : ");
    scanf("%lf", &floatNumber);
    
    number = (int)fabs(floatNumber);
    printf("%lf의 절대값은 %d 이다.\n", floatNumber, number);
    
    
    /*
      밑 과 지수를 입력 받아서 그 결과를 출력 하세요
     */
    
    double floatNumber2 = 0;
    printf("밑과 지수를 입력 하세요 : ");
    scanf("%lf %lf", &floatNumber, &floatNumber2);
    
    number = (int)pow(floatNumber, floatNumber2);
    printf("%lf의 %lf 제곱은 %d 이다.\n", floatNumber, floatNumber2, number);
    
    return 0;
    
}

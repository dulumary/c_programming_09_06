#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    /*
        수를 입력 받아서 1부터 입력 받은 수까지의 합을 출력하세요.
     */
    
    int number = 0;
    printf("수를 입력 하세요 : ");
    scanf("%d", &number);
    int sum = 0;
    for(int i = 1; i <= number; i++) {
        sum += i;
    }
    
    printf("합은 %d입니다\n", sum);
    
    
    /*
        반복문으로 5개의 수를 입력 받아서 총합과 평균을 출력하세요.
        평균은 소수점 첫째 자리 까지 출력하세요.
     */
    
    for(int i = 1; i <= 5; i++) {
        printf("%d 번째 수를 입력 하세요 : ", i);
        scanf("%d", &number);
        sum += number;
    }
    
    printf("총합은 %d 평균은 %.1f 입니다.\n", sum, sum / 5.0);
    
    
    /*
       수를 입력 받고 그 수의 팩토리얼을 출력하세요.
        팩토리얼은 1부터 그 수까지의 모든 수의 곱이고 아래와 같이 표현된다.
        5! = 1 * 2 * 3 * 4 * 5
        7! = 1 * 2 * 3 * 4 * 5 * 6 * 7
        입력 받는 수의 최대값음 10이다.
     */

    printf("수를 입력 하세요 : ");
    scanf("%d", &number);

    int factorial = 1;
    for(int i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("%d!은 %d 입니다\n", number, factorial);

    
    /*
        반복문으로 5개의 수를 입력 받아서 최소 값을 출력하세요.
        입력값의 최대 값은 1000 입니다.
     */
    
    int min = 1000;
    for(int i = 1; i <= 5; i++) {
        printf("%d 번째 수를 입력 하세요 : ", i);
        scanf("%d", &number);
        
        if(min > number) {
            min = number;
        }
    }
    
    printf("최소값은 %d입니다.\n", min);
    
    /*
        수를 입력 받아서 그 수의 약수를 모두 출력하세요.
     */
    
    printf("수를 입력 하세요 : ");
    scanf("%d", &number);
    
    for(int i = 1; i <= number; i++) {
        if(number % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    
        
    return 0;
}

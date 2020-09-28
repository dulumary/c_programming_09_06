#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  
    /*
        나이를 입력 받아서 아래와 같이 출력하세요.
        이름 : 김인규 나이 : 24
     */
    
    int age = 0;
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    printf("이름 : 김인규 나이 : %d\n", age);
    
    
    /*
        두 수를 입력 받아서 더하고 아래와 같이 출력하세요.
        3 + 5 = 8
     */
    
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &number1, &number2);
    
    sum = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, sum);
    
    /*
        두수를 입력 받아서 뻬고 아래와 같이 출력하세요.
        3 - 5 = -2;
     */
    
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &number1, &number2);
    
    printf("%d - %d = %d\n", number1, number2, number1 - number2);
    
    
    /*
        단수를 입력 받고 아래와 같이 출력하세요.
        5 X 1 = 5
        5 X 2 = 10
        5 X 3 = 15
        5 X 4 = 20
        5 X 5 = 25
     */
    
    printf("단수를 입력하세요 : ");
    scanf("%d", &number1);
    
    printf("%d X 1 = %d\n", number1, number1 * 1);
    printf("%d X 2 = %d\n", number1, number1 * 2);
    printf("%d X 3 = %d\n", number1, number1 * 3);
    printf("%d X 4 = %d\n", number1, number1 * 4);
    printf("%d X 5 = %d\n", number1, number1 * 5);
    
    /*
        지름을 입력 받아서 원의 넓이를 구하여 출력하세요.
        math.h 의 M_PI를 이용하세요
     */
    
    printf("지름을 입력하세요 : ");
    scanf("%d", &number1);
    float area = (number1 / 2) * (number1 / 2) * M_PI;
    
    printf("원의 넓이는 %f 입니다.\n", area);
    
    return 0;
}


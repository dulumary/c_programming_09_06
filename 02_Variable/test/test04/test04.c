#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
        두 수를 입력 받아서 덧셈 뺄셈 곱하기 나누기한 결과를 출력하세요
     */
    
    int number1 = 0;
    int number2 = 0;

    printf("입력1 : ");
    scanf("%d", &number1);
    printf("입력2 : ");
    scanf("%d", &number2);

    printf("덧셈 : %d\n", number1 + number2);
    printf("뺄셈 : %d\n", number1 - number2);
    printf("곱셈 : %d\n", number1 * number2);
    printf("나눗셈 : %d\n", number1 / number2);


    /*
        두 수를 입력 받아서 몫과 나머지를 출력하세요.
    */

    number1 = 0;
    number2 = 0;

    printf("입력1 : ");
    scanf("%d", &number1);
    printf("입력2 : ");
    scanf("%d", &number2);

    printf("몫 : %d ", number1 / number2);
    printf("나머지 : %d\n", number1 % number2);


    /*
        입력 받은 숫자의 값을 한 변의 길이로 하는 가진 정사각형의 넓이를 구하여 출력하세요
     */
    
    int length = 0;
    printf("길이 : ");
    scanf("%d", &length);
    
    int result = length * length;
    
    printf("정사각형의 넓이는 %d 입니다\n", result);
    
    /*
        밑변 과 높이를 입력 받아서 삼각형의 넓이를 구하여 출력하세요.
    */
    
    int width = 0;
    int height = 0;
    
    printf("밑변 : ");
    scanf("%d", &width);
    printf("높이 : ");
    scanf("%d", &height);
    
    float area = width * height / 2.0;
    
    printf("삼각형의 넓이는 %.1f 입니다.\n", area);
    
    /*
     
      수 두개를 x, y 에 입력 받아서 바꿔서 출력하세요.
     
     */
    
    int x = 0;
    int y = 0;
    
    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);
    
    int tmp = x;
    x = y;
    y = tmp;
    
    printf("x는 %d이고, y는 %d 입니다.\n", x, y);
    
    /*
        초를 입력 받아서 ?분?초 형태로 출력 하시오.
     */
    
    int seconds = 0;
    printf("초 : ");
    scanf("%d", &seconds);
    
    int minute = seconds / 60;
    seconds = seconds % 60;
    
    printf("%d분 %d초\n", minute, seconds);

    return 0;
    
}

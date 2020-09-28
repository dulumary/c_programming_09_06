#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
        숫자가 들어 있는 char 변수 두개를 숫자로 변환하고 더한 결과를 출력하세요.
        char numberChar1 = '8';
        char numberChar2 = '4';
     */
    
    char numberChar1 = '8';
    char numberChar2 = '4';
    
    int number1 = numberChar1 - '0';
    int number2 = numberChar2 - '0';
    
    printf("두 char의 수 합은 %d 입니다.\n", number1 + number2);
    
    /*
         소문자 알파벳을 입력 받고 대문자로 변환 하여 출력하세요.
    */
    
    char alphabet = 0;
    printf("소문자 알파벳을 입력 하세요 : ");
    scanf("%c", &alphabet);
    
    printf("%c를 대문자로 변환한 결과는 %c 입니다.\n", alphabet, alphabet - 'a' + 'A');
    
    /*
        네 자리수 숫자를 입력 받아서 천의 자리부터 한줄씩 출력 하세요.
     */
    
    int number = 0;
    printf("네자리 수를 입력하세요 : ");
    scanf("%d", &number);
    
    printf("%d\n", number / 1000);
    number %= 1000;
    printf("%d\n", number / 100);
    number %= 100;
    printf("%d\n", number / 10);
    number %= 10;
    printf("%d\n", number);
    
    
    /*
        네자리수를 입력 받아서 일의 자리부터 한 줄씩 출력하세요.
     */
    
    printf("네자리 수를 입력하세요 : ");
    scanf("%d", &number);
    
    printf("%d\n", number % 10);
    number /= 10;
    printf("%d\n", number % 10);
    number /= 10;
    printf("%d\n", number % 10);
    number /= 10;
    printf("%d\n", number);
    
    /*
        네 자리수를 입력 받아서 각 자리수의 합을 출력하세요.
     */
    
    int sum = 0;
    printf("네자리 수를 입력하세요 : ");
    scanf("%d", &number);
    
    sum += number / 1000;
    number %= 1000;
    sum += number / 100;
    number %= 100;
    sum += number / 10;
    number %= 10;
    sum += number;
    
    printf("합계는 %d 입니다\n", sum);
    
    /*
        세자리 수를 입력 받아서 역순으로 출력하세요.
    */
    
    printf("세자리 수를 입력하세요 : ");
    scanf("%d", &number);
    printf("%d", number % 10);
    number /= 10;
    printf("%d", number % 10);
    number /= 10;
    printf("%d\n", number % 10);
    

    return 0;
    
}

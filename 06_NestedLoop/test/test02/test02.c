#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  
    
    /*
        두 수를 입력 받아서  두수의 범위 만큼의 구구단을 출력하세요. 
     */
    
    int number1 = 0;
    int number2 = 0;
    
    printf("단수 범위를 입력하세요 : ");
    scanf("%d %d", &number1, &number2);
    
    for(int i = number1; i <= number2; i++) {
        for(int j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n", i, j, i * j);
        }
    }
    
    /*
        아래와 같이 출력 하세요.
     
        *
        **
        ***
        ****
        *****
     */
    
    printf("출력할 줄 수를 입력하세요 : ");
    scanf("%d", &number1);
    
    for(int i = 0; i < number1; i++) {
        for(int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
  
    
    /*
        아래와 같이 출력 하세요.
     
            *
           ***
          *****
         *******
        *********
     */
    
    printf("출력할 줄 수를 입력하세요 : ");
    scanf("%d", &number1);
    
    for(int i = 0; i < number1; i++) {
        for(int j = 0; j < number1 - 1 - i; j++) {
            printf(" ");
        }
        for(int j = 0; j < (i * 2) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
    
}

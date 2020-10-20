#include <stdio.h>

int main(int argc, const char * argv[]) {
    
   /*
        35 ~ 40 까지 출력 하세요
    */
    for(int i = 35; i <= 40; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    /*
        5 ~ -5 까지 출력하세요
     */
    
    for(int i = 5; i >= -5; i--) {
        printf("%d ", i);
    }
    printf("\n");
    
    /*
        1 ~ 50 사이에 3의 배수만 출력하세요.
     */
    
    for(int i = 1; i <= 50; i++) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    /*
        1 ~ 100 사이에 7의 배수 갯수를 구하세요.
     */
    
    int count = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 7 == 0) {
            count++;
        }
    }
    
    printf("7의 배수의 갯수는 : %d\n", count);
    
    /*
        수를 입력 받아서 해당하는 단수의 구구단을 출력 하세요.
     */
    
    int number = 0;
    printf("단수를 입력하세요 : ");
    scanf("%d", &number);
    
    for(int i = 1; i <= 9; i++) {
        printf("%d X %d = %d\n", number, i, number * i);
    }
    
    /*
        for를 이용해서 5개의 수를 입력 받고 제일 큰수를 출력하세요 .
     */
    
    int max = 0;
    for(int i = 0; i < 5; i++) {
        number = 0;
        printf("수를 입력하세요 : ");
        scanf("%d", &number);
        
        if(number > max) {
            max = number;
        }
    }
    
    printf("가장 큰수는 %d 입니다.\n", max);
    
    return 0;
    
}

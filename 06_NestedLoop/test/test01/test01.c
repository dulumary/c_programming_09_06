#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  
    /*
        두개의 주사위를 굴렸을때, 나올 수 있는 모든 경우의 수를 출력 하세요.
     */
    
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    
    /*
        모든 단의 구구단을 출력하세요.
     */
    for(int i = 2; i <= 9; i++) {
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
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < i + 1; j++) { 
            printf("*");
        }
        printf("\n");
    }
    
    /*
     
        아래와 같이 출력 하세요.
     
        *****
        ****
        ***
        **
        *
     
     */
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    /*
     
        아래와 같이 출력 하세요.
     
            *
           **
          ***
         ****
        *****
     
     */
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - 1 - i; j++) {
            printf(" ");
        }
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
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - 1 - i; j++) {
            printf(" ");
        }
        for(int j = 0; j < (i * 2) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
    
}

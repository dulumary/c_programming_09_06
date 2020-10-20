#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    /*
        무한 루프와 break를 이용해서 Hello World를 8번 출력 하세요.
     */
    
    int i = 0;
    while(1) {
        if(i == 8) {
            break;
        }
        printf("Hello World!!\n");
        i++;
    }
    
    
    /*
        continue 를 이용해서 1~10 사이 수 중에 짝수만 출력 하세요.
     */
    
    for(i = 1; i <= 10; i++) {
        
        if(i % 2 == 1) {
            continue;
        }
        
        printf("%d ", i);
    }
    printf("\n");
    
    /*
       수를 입력 받고 continue 를 이용해서 1~ 100까지 사이의 수중에 입력 받은 수의 배수만 출력 하세요
    */
    
    int number = 0;
    printf("수를 입력하세요 : ");
    scanf("%d", &number);
    
    for(i = 1; i < 100; i++) {
        
        if(i % number != 0) {
            continue;
        }
        
        printf("%d ", i);
    }
    printf("\n");
    
    /*
        무한 루프를 통해서 반복적으로 수를 입력을 받고 0이 입력 되었을때 반복문을 빠져 나오게 하세요.
     */
    
    for(int i = 0; i < 10; i++) {
        printf("수를 입력하세요 : ");
        scanf("%d", &number);
        
        if(number == 0) {
            break;
        }
    }
    
    printf("끝");
    
        
    return 0;
}

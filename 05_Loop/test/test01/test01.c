#include <stdio.h>

int main(int argc, const char * argv[]) {
    
  /*
    수를 입력 받아서 그 수만큼 "응 아니야" 를 출력하세요
   */
    int count = 0;
    printf("횟수를 입력하세요 : ");
    scanf("%d", &count);
    
    int i = 0;
    while(i < count) {
        printf("응 아니야\n");
        i++;
    }
    
    /*
        수를 입력 받고 그 수에서 부터 0 까지 한줄씩 카운트 다운을 출력 하고 마지막에 발사를 출력하세요.
     */
    
    printf("카운드 다운 입력하세요 : ");
    scanf("%d", &count);
    
    while(count >= 0) {
        printf("%d\n", count);
        count--;
    }
    
    printf("발사 \n");
    
    /*
        수를 입력 받고 1에서 부터 입력한 수까지의 짝수의 합을 구하여 출력하세요.
     */
    
    printf("수를 입력하세요 : ");
    scanf("%d", &count);
    
    i = 1;
    int sum = 0;
    while(i <= count) {
        if(i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    
    printf("더한 결과는 %d입니다.\n", sum);
    
    /*
        while을 이용하여 5번 동안 수를 입력 받고 출력하세요.
     */
    
    i = 0;
    while(i < 5) {
        printf("입력 : ");
        scanf("%d", &count);
        printf("출력 : %d\n", count);
        i++;
    }
    
    /*
        구구단 2단을 출력하세요
     */
    i = 1;
    while(i <= 9) {
        printf("2 X %d = %d\n", i, 2 * i);
        i++;
    }
    
}

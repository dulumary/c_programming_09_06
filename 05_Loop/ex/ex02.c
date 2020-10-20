#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for(int i = 0; i < 5; i++) {
        printf("Hello, World!!%d\n", i);
    }
    
    for(int i = 1; i <= 5; i++) {
        printf("Hello, World!!%d\n", i);
    }
    
    for(int i = 5; i > 0; i--) {
        printf("Hello, World!!%d\n", i);
    }
    
    int count = 0;
    printf("반복할 횟수를 입력하세요 : ");
    scanf("%d", &count);
    
    for(int i = 0; i < count; i++) {
        printf("Hello, World!!%d\n", i);
    }
    
    int weight = 0;
    printf("몸무게를 입력하세요 : ");
    scanf("%d", &weight);
    
    while(weight > 70) {
        printf("운동 열심히!! 으쌰으쌰 %d\n", weight);
        weight -= 2
    }
    
    for( ; weight > 70; weight -= 2) {
        printf("운동 열심히!! 으쌰으쌰 %d\n", weight);
    }
    
    int sum = 0;
    for(int i = 0; i <= 10; i++) {
        sum += i;
    }
    
    printf("합은 %d입니다.", sum);
    
    for(;;) {
        printf("와와~!!!\n");
    }
    
    // for 문이 문법상 무한루프에 빠지기 쉽지 않다.
    for(int i = 0; i < 5; ) {
        printf("Hello, World!!%d\n", i);
    }
    
    return 0;
    
}

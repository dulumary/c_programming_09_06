#include <stdio.h>

int main(int argc, const char * argv[]) {

    int walking = 0;
    int weight = 0;
    
    printf("몸무게와 걸은수를 입력하세요 : ");
    scanf("%d %d", &weight, &walking);
    
    if(walking > 10000 && weight <= 70) {
        printf("그리고 치킨이다!\n");
    }
    
    if(walking > 10000 || weight <= 70) {
        printf("또는 치킨이다!\n");
    }
    
    int number = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &number);
    
    // 10 <= number <= 40
    if(number >= 10 && number <= 40) {
        printf("%d 는 10보다 크고 40보다 작다\n", number);
    }
    
    // 10 > number , number > 40
    if(number < 10 || number > 40)  {
        printf("%d 는 10보다 작거나 40보다 크다\n", number);
    }
    
    
    return 0;
}



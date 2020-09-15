#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int noodleCup = 0;
    
    noodleCup = 850;
    
    printf("육개장 가격은 %d 입니다.\n", noodleCup);
    
    //  세개 가격 계산
    int sum = 0;
    sum = noodleCup * 3;
    printf("육개장 3개의 가격은 %d 입니다.\n", sum);
    
    // 가격 상승
    noodleCup = 950;
    
    sum = noodleCup * 3;
    printf("육개장 가격은 %d 이고, 3개의 가격은 %d 입니다.\n", nudleCup, sum);
    
    return 0;
    
}

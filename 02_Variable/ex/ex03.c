#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int noodleCup = 0;
   
    printf("육개장 가격 : ");
    scanf("%d", &noodleCup);
   
    printf("육개장 가격은 %d 입니다.\n", noodleCup);
    
    //  세개 가격 계산
    int sum = 0;
    sum = noodleCup * 3;
    
    printf("육개장 3개의 가격은 %d 입니다.\n", sum);
    
    int count = 0;
    printf("육개장 가격 :");
    scanf("%d", &noodleCup);
    printf("육개장 갯수 :");
    scanf("%d", &count);
    
    int count = 0;
    printf("육개장 가격 과 갯수 :");
    scanf("%d %d", &noodleCup, &count);
    
    sum = noodleCup * count;
    
    printf("육개장 %d개의 가격은 %d 입니다.\n", count, sum);
    
    return 0;
}


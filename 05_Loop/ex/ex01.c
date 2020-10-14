#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = 0;
    
    while(i < 5) {
        printf("Hello World %d\n", i);
        i++; // i = i + 1;
    }
    
    i = 1;
    while(i <= 5) {
        printf("Hello World %d\n", i);
        i++; // i = i + 1;
    }
    
    i = 5;
    while(i >= 0) {
        printf("Hello World %d\n", i);
        i--;
    }
    
    int count = 0;
    printf("반복할 횟수를 입력하세요 : ");
    scanf("%d", &count);
    
    int i = 0;
    while(i < count) {
        printf("count %d\n", i);
        i++;
    }

    int weight = 0;
    printf("몸무게를 입력하세요 : ");
    scanf("%d", &weight);
    while(weight > 70) {
        printf("운동 열심히!! 으쌰으쌰 %d\n", weight);
        weight -= 2; // weight = weight - 2;
        printf("와와 운동했더니 몸무게가  %d가 되었따. \n", weight);
    }
    
    int sum = 0;
    i = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    
    printf("합은 %d입니다.\n", sum);
    
    // 0 == false
    // 0이 아닌수 == true (대표적으로 1)
    
    while(1) {
        printf("와와~!!!\n");
    }

    while(i < 5) {
        printf("Hello World %d\n", i);
    }
}

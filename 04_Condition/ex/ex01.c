#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int weight = 0;
    
    printf("체중을 입력하세요 : ");
    scanf("%d", &weight);
    
    if(weight <= 70) {
        printf("치킨먹자\n");
    }
    
    if(weight > 90) {
        printf("다이어트 시작!\n");
    }
    
    if(weight == 68) {
        printf("당신의 몸무게는 68이군요\n");
    }
    
    if(weight != 75) {
        printf("당신의 몸무게는 75가 아니군요\n");
    }
    
    int number1 = 0;
    int number2 = 0;
    printf("두개의 수을 입력하세요 : ");
    scanf("%d %d", &number1, &number2);
    
    if(number1 > number2) {
        printf("%d 가 %d 보다 크네요\n", number1, number2);
    }
    
    if(number1 < number2) {
        printf("%d 가 %d 보다 작네요\n", number1, number2);
    }
    
    if(number1 == number2) {
        printf("%d 가 %d 이 같네요\n", number1, number2);
    }
   
    char grade = 'C';
    
    if(grade < 'B') {
        printf("<");
    }
    
    if(grade > 'B') {
        printf(">");
    }
    return 0;
}



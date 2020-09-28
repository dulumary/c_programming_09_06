#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
           소문자 알파벳을 입력 받아서 'k' 보다 앞에 있는 알파벳인지 뒤에 있는 알파벳인지 출력하세요.
        */
       
       char alphabet = 0;
       printf("소문자 알파벳을 입력하세요 : ");
       scanf("%c", &alphabet);
       
       if(alphabet < 'k') {
           printf("%c 는 k보다 앞에 있습니다\n", alphabet);
       }
       
       if(alphabet > 'k') {
           printf("%c 는 k보다 뒤에 있습니다\n", alphabet);
       }
    
    /*
        두 수 a, b 를 입력 받아서 a가 클경우 ">" 를 b가 클경우 "<"를 같을경우 "=="를 출력하세요
     */
    
    int number1 = 0;
    int number2 = 0;
    
    printf("두개의 수를 입력하세요 : ");
    scanf("%d %d", &number1, &number2);
    
    if(number1 > number2) {
        printf(">\n");
    }
    
    if(number1 < number2) {
        printf("<\n");
    }
    
    if(number1 == number2) {
        printf("==\n");
    }
    
    /*
        70점 이상이면 합격하는 시험에서 점수를 입력 받아서 합격 여부를 출력하세요.
     */
    
    int score = 0;
    printf("성적을 입력하세요 : ");
    scanf("%d", &score);
    
    if(score >= 70) {
        printf("합격입니다.\n");
    }
    
   
    
    /*
        수를 입력 받아서 짝수인지 홀수 인지 출력하세요.
     */
    
    printf("수를 입력하세요 : ");
    scanf("%d", &number1);
    
    if(number1 % 2 == 0) {
        printf("짝수");
    }
    
    if(number1 % 2 == 1) {
        printf("홀수");
    }
    
   
    return 0;
}



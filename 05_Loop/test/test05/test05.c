#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
 
   /*
        반복문을 이용해서 A~Z 까지 출력하세요
    */
    
    for(char i = 'A'; i <= 'Z'; i++) {
        printf("%c ", i);
    }

    printf("\n");

    /*
        수를 입력 받아서 1에서 부터 그 수 까지의 합을 출력하세요.
        단, 합이 100이 넘으면 합을 중단하고 그때 까지의 합을 출력하세요.
     */

    int number = 0;
    printf("수를 입력 하세요 : ");
    scanf("%d", &number);

    int sum = 0;
    for(int i = 0; i < number; i++) {
        sum += i;

        if(sum > 100) {
            break;
        }
    }

    printf("%d\n", sum);
    
    /*
        1 4 7 10 13 16 19 22 25 ... 은
        1부터 시작해 이전에 만든 수에 3을 더해 다음 수를 만든 수열이다.
        이러한 것을 수학에서는 앞뒤 수들의 차이가 같다고 하여

        등차(차이가 같다의 한문 말) 수열이라고 한다.

        시작 값(a), 등차(d), 몇 번째인지를 나타내는 정수(n)가 입력될 때
        n번째 수를 출력하세요.
     
     */
    
    int a = 0;
    int d = 0;
    int n = 0;
    printf("세개의 수를 입력 하세요 : ");
    scanf("%d %d %d", &a, &d, &n);
    
    for(int i = 0; i < n - 1; i++) {
        a += d;
    }
    
    printf("%d\n", a);

    /*
        수를 입력 받고 그 수가 소수(prime)인지 아닌지 출력하세요.
        소수는 1과 자기자신 이외에 나누어 떨어지지 않는 수이다.
     */

    printf("수를 입력 하세요 : ");
    scanf("%d", &number);

    if(number == 2) {
        printf("소수 입니다.\n");
    } else {
        int i = 0;
        for(i = 2; i < number; i++) {
            if(number % i == 0) {
                break;
            }
        }

        if(number == i) {
            printf("소수 입니다.\n");
        } else {
            printf("소수가 아닙니다.\n");
        }
    }


    
    /*
        컴퓨터와 가위 바위 보 게임을 하고 승리 결과를 출력하세요.
        총 5판 3선승제 로 둘 중하나가 이기면 경기를 끝내고 승리 결과를 출력한다.
     
        가위 : 1 바위 : 2 보 : 3
        컴퓨터는 랜덤 함수를 통해서 게임을 진행한다.
    
     */
    
    srand((unsigned int) time(NULL));
    
    int youWin = 0;
    int computerWin = 0;
    for(int i = 0; i < 5; i++) {
        int computerPlay = rand() % 3 + 1;
        printf("가위(1) 바위(2) 보(3)!! : ");
        scanf("%d", &number);
        
        printf("computer : %d -", computerPlay);
        if(number == computerPlay) {
            printf("비겼습니다.\n");
        } else if((number == 1 && computerPlay == 3) ||
           (number == 2 && computerPlay == 1) ||
           (number == 3 && computerPlay == 2)) {
            youWin++;
            printf("이겼습니다.\n");
        } else {
            computerWin++;
            printf("졌습니다.\n");
        }
        
        if(youWin == 3 || computerWin == 3) {
            break;
        }
    }
    
    printf("최종 결과 %d:%d 로 ", youWin, computerWin);
    if(youWin == computerWin) {
        printf("비겼습니다.\n");
    } else if(youWin > computerWin) {
        printf("당신의 승리 입니다.\n");
    } else {
        printf("당신의 패배 입니다.\n");
    }
        
    return 0;
}

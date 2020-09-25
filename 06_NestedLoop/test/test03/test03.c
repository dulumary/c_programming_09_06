#include <stdio.h>


int main(int argc, const char * argv[]) {
 
    /*
        수를 입력 받고 해당 수가 몇 자리 수인지 출력 하세요.
     */

    int number = 0;

    printf("수를 입력 하세요 : ");
    scanf("%d", &number);

    int count = 0;
    while(number != 0) {
        number /= 10;
        count++;
    }

    printf("%d\n", count);

    /*
        두 개의 년을 입력 받고 그 사이의 윤년의 횟수를 출력 하세요.
     */


    int year1 = 0;
    int year2 = 0;

    printf("두개의 년을 입력 하세요 : ");
    scanf("%d %d", &year1, &year2);

    count = 0;
    for(int i = year1; i <= year2; i++) {
        if(i % 400 == 0 || (i % 4 == 0 && i % 1 != 100)) {
            count++;
        }
    }

    printf("%d\n", count);

    /*
        1~ 100 사이의 수를 입력 받고, 입력 받은 수까지 박수를 몇번 쳐야 하는지 출력 하세요.
     */

    printf("수를 입력 하세요 : ");
    scanf("%d", &number);

    count = 0;
    for(int i = 1; i <= number; i++) {
        if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
            count++;
        }

        if(i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
            count++;
        }
    }

    printf("%d\n", count);

    /*
        두개의 주사위를 던져서 나올 수 있는 경우의 수를 모두 출력 하세요.
        단 , 중복은 제거해서 출력하세요.
     */

    for(int i = 1; i <= 6; i++) {
        for(int j = i; j <= 6; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
  
    /*
        2020년 7월 1일은 수요일이다.
        아래와 같이 2020년 7월 달력을 출력 하세요.
     */
    
    int day = -2;
    printf(" 2020 / 7 \n\n");
    printf("  S   M   T   W   T   F   S \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            if(day > 0) {
                if(day < 10) {
                    printf("  %d ", day);
                } else {
                    printf(" %d ", day);
                }
                
            } else {
                printf("    ");
            }
            
            day++;
            
            if(day > 31) {
                break;
            }
        }
        printf("\n");
    }
    
    /*
        재석과 광희는 계단 오르기 시합을 하였다.
        재석과 광희는 아래와 같은 속도로 올라 간다.

        > 재석
          한층을 올라 가는데 8초가 소요 된다.
          5층 마다 한층 올라 가는데 걸리는 시간이 1초씩 증가 한다.

        > 광희
          한층을 올라 가는데 5초가 소요 된다.
          7층 마다 한층 올라 가는데 걸리는 시간이 2초씩 증가 한다.

        층수를 입력 받고, 해당 층수 까지 올라 가는데 소요 되는 시간을 각각 구하세요.
     
     */
    
    int floor = 0;
    printf("층을 입력 하세요 : ");
    scanf("%d", &floor);
    
    int jTotal = 0;
    int gTotal = 0;
    
    int jTime = 7;
    int gTime = 5;
    
    for(int i = 1; i < floor; i++) {
        jTotal += jTime;
        gTotal += gTime;
        
        if(i % 5 == 0) {
            jTime++;
        }
        
        if(i % 4 == 0) {
            gTime += 3;
        }
    }
    
    printf("재석 : %d초\n", jTotal);
    printf("광희 : %d초\n", gTotal);
}

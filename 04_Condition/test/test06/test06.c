#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        영어로 서수를 표현 하면 아래와 같이 나타난다.
      
        1st 2nd 3rd 4th 5th 6th ... 10th

        1~10 까지의 수 중 하나가 입력 되었을때, 해당 숫자를 서수로 출력하세요.
     */
    
    int number = 0;
    
    printf("수를 입력 하세요 :");
    scanf("%d", &number);
    
    switch(number) {
        case 1 :
            printf("1st\n");
            break;
            
        case 2 :
            printf("2nd\n");
            break;
            
        case 3 :
            printf("3rd\n");
            break;
            
        default:
            printf("%dth\n", number);
            break;
            
    }
    
    /*
        철수와 영희가 가위(1), 바위(2), 보(3) 게임을 진행할때, 게임에서 이긴 사람을 출력하세요
        ( 이때, 철수는 p1, 영희는 p2로 가정한다 )

        철수가 가위,바위,보를 입력하고, 영희가 가위,바위,보를 입력하였을때 게임 결과를 출력하세요
     */
    
    int p1 = 0;
    int p2 = 0;
    
    printf("영희 공격 : ");
    scanf("%d", &p1);
    printf("철수 공격 : ");
    scanf("%d", &p2);
    
    if(p1 == p2) {
        printf("비겼다\n");
    } else if((p1 == 1 && p2 == 3) || (p1 == 2 && p2 == 1) || (p1 == 3 && p2 == 2)) {
        printf("철수가 이겼다\n");
    } else {
        printf("영희가 이겼다\n");
    }
    
    /*
        윷놀이는 4개의 윷을 이용하는 게임이다.

        도 : 1개가 뒤집어진 상태
        개 : 2개가 뒤집어진 상태
        걸 : 3개가 뒤집어진 상태
        윷 : 4개가 뒤집어진 상태
        모 : 하나도 뒤집어지지 않은 상태

        4개의 윷 상태가 입력되면 도, 개, 걸, 윷, 모를 출력하는 프로그램을 작성하시오.
     
        윷의 상태가 0이면 뒤집어 지지 않은 상태, 1이면 뒤집어진 상태를 의미한다.
     
     */
    
    int stick1 = 0;
    int stick2 = 0;
    int stick3 = 0;
    int stick4 = 0;
    
    printf("윷 상태를 입력하세요 : ");
    scanf("%d %d %d %d", &stick1, &stick2, &stick3, &stick4);
    
    int count = 0;
    if(stick1 == 1) {
        count++;
    }
    
    if(stick2 == 1) {
        count++;
    }
    
    if(stick3 == 1) {
        count++;
    }
    
    if(stick4 == 1) {
        count++;
    }
    
    switch (count) {
        case 0:
            printf("모\n");
            break;
        case 1:
            printf("도\n");
            break;
        case 2:
            printf("개\n");
            break;
        case 3:
            printf("걸\n");
            break;
        case 4:
            printf("윷\n");
            break;
        default:
            break;
    }
    
    /*
        연도를 입력 받아서 윤년인지 출력하시오
        윤년 조건: 4로 나누어 떨어지는 연도, 100으로 나누어 떨어지는 연도는 윤년이 아니다. 400으로 나누어 떨어지는 연도는 윤년이다.
     */
    
    int year = 0;
    printf("연도 : ");
    scanf("%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("윤년\n");
    } else {
        printf("평년\n");
    }
    
    return 0;
}



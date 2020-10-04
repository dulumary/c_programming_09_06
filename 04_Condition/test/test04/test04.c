#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
     1 일이 수요일 일때, 1 ~ 7일 사이의 날짜를 입력 받고 해당 요일을 출력하세요.
     */
    
    int day = 0;
    printf("1~7 사이의 날짜를 입력하세요 : ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
            printf("수요일\n");
            break;
        case 2:
            printf("목요일\n");
            break;
        case 3:
            printf("금요일\n");
            break;
        case 4:
            printf("토요일\n");
            break;
        case 5:
            printf("일요일\n");
            break;
        case 6:
            printf("월요일\n");
            break;
        case 7:
            printf("화요일\n");
            break;
        default:
            printf("잘못 입력 하셨습니다.\n");
    }
    return 0;
}



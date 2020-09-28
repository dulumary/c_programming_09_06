#include <stdio.h>

int main(int argc, const char * argv[]) {

    int weight = 0;
    
    printf("몸무게를 입력하세요 : ");
    scanf("%d", &weight);
    
    if(weight <= 70) {
        printf("치킨 먹자\n");
    } else {
        printf("샐러드 먹자\n");
    }
    
    if(weight <= 70) {
        printf("치킨 먹자\n");
    } else if(weight <= 75) {
        printf("닭가슴살 먹자\n");
    } else if(weight <= 80) {
        printf("샐러드나 먹자\n");
    } else {
        printf("굶어\n");
    }
    
    return 0;
}



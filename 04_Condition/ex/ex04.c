#include <stdio.h>

int main(int argc, const char * argv[]) {

    char grade = 0;
    printf("학점을 입력하세요 : ");
    scanf("%c", &grade);
    
    switch(grade) {
    case 'A':
            printf("소고기\n");
            break;
    case 'B':
            printf("삼겹살\n");
            break;
    default:
            printf("라면\n");
    }

    
    return 0;
}



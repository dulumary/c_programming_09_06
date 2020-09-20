
#include <stdio.h>

int getNoodlesPrice(int count) {
    
    int noodleCup = 850;
    int result = noodleCup * count;
    return result;

}

int sum(int x, int y) {
    int result = x + y;
    return result;
}

void printHelloWorld() {
    printf("Hello World!!\n");
    
    printf("Hello World 2 !!\n");
    return;
    printf("Hello World 3 !!\n");
}


int main(int argc, const char * argv[]) {
    
    int total = getNoodlesPrice(5);
    // total = 850 * 5;
    
    printf("총 합은 %d 입니다\n", total);
    
    total = getNoodlesPrice(5) + getNoodlesPrice(2);
    // total = (850 * 5) + (850 * 2);
    // 함수를 사용하지 않으면 육개장 가격이 올랐을때 모두 바꿔주어야 한다.
    
    printf("총 합은 %d 입니다\n", total);
    
    printf("합은 %d 입니다\n", sum(214,245));
    
    printHelloWorld();
    
    return 0;
}

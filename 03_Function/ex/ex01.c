#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    // double ceil ( double x );
    // 올림
    
    // 값 직접 입력
    double result = 0.0;
    result = ceil(1.5);
    printf("1.5의 올림 값은 %lf이다\n", result);
    
    // 변수로 입력
    double parameter = 53.2;
    result = ceil(parameter);
    printf("%lf의 올림 값은 %lf이다\n", parameter, result);
    
    // 변수 없이 바로 사용
    printf("1.5의 올림 값은 %lf이다.\n", ceil(1.5));
    
    // 형 변환
    int intResult = (int)result;
    printf("%lf의 올림 값은 %d이다.\n", parameter, intResult);
    
    return 0;
    
}

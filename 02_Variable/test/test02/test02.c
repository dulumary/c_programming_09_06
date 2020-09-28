#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
        시험 성적이 90점 이상이면 'A'학점이고 평점은 4.0 입니다.
        시험 성적이 80점 이상이면 'B'학점이고 평점은 3.0 입니다.
    */
    
    int score = 0;
    char gradeChar = 0;
    float gradeFloat = 0.0;
    
    score = 90;
    gradeChar = 'A';
    gradeFloat = 4.0;
    
    printf("시험 성적이 %d점 이상이면 \'%c\'학점이고, 평점은 %.1f 입니다.\n", score, gradeChar, gradeFloat);
    
    score = 80;
    gradeChar = 'B';
    gradeFloat = 3.0;
    
    printf("시험 성적이 %d점 이상이면 \'%c\'학점이고, 평점은 %1.f 입니다.\n", score, gradeChar, gradeFloat);
    
    /*
        아래 정수와 실수를 곱해서 출력하세요
     */
    
    int number1 = 33;
    float number2 = 35.325;
    
    printf("두 수의 곱은 %f 입니다.\n", number1 * number2);
    
    /*
        943 시간은 몇일 인지 구하여 출력하세요.
     */
    
    int hour = 943;
    printf("%d시간은 %d일 입니다.\n", hour, hour / 24);
     
    /*
        가로 길이 8 세로 길이 9인 사각형과 삼각형의 넓이를 각각 구하세요.
        넓이는 직접 계산하지 말고, 컴퓨터에게 양보하세요.
        출력 : 사각형의 넓이 : ??
              삼각형의 넓이 : ??
     */
    
    int width = 8;
    int height = 9;
    
    int rectangleArea = width * height;
    printf("사각형 넓이 : %d\n", rectangleArea);
    
    width = 8;
    height = 9;
    
    float triangleArea = width * height / 2.0;
    printf("삼각형의 넓이 : %f\n", triangleArea);
    
    
    /*
        국어 93점, 수학 88, 영어 94점
        평균 ??점 입니다.
     */
    
    int koreanScore = 93;
    int mathScore = 88;
    int englishScore = 94;
    
    float average = (koreanScore + mathScore + englishScore) / 3.0;
    
    printf("국어 %d점, 수학 %d점, 영어 %d점\n", koreanScore, mathScore, englishScore);
    printf("평균 %.2f 점 입니다.\n", average);
    
    /*
        아래 공식을 이용해서 섭시 30도의 화씨 온도를 출력하세요.

        화씨 온도 = 9 / 5 * 섭씨온도 + 32
     */
    
    printf("섭씨 30도는 화씨 %d도 입니다.\n", 9 / 5 * 30 + 32);
    
    return 0;
}


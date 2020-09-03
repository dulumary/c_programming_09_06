# 8. 문자열

## 문장 데이터
* 출력을 사용할때 이미 사용 하고 있었다. 
* "Hello World!!" 와 같이 쌍 따옴표 안에 문장을 넣는 것이 문장을 데이터화 한것이다.
* 다만, 문자를 저장 하는 변수 type은 있지만, 문장을 저장하는 type은 존재하지 않는다. 
* 문장은 다른 data type 처럼 사용성이 많다. 
* 이를 처리 하기 위해서 char type의 배열을 이용하여, 아래와 같이 저장 할수 있다. 

```
char chars[6] = "Hello";
``` 
## 문자열

* char 배열 안에 문자를 하나 하나 저장해서 표현 한다고 해서 **"문자열"** 또는 **"String"** 이라고 말한다.
* 일반 char 배열과 문자열은 차이가 있다. 
* 일반 배열에 문자를 하나 하나 넣으면 아래와 같이 표현 된다.

	| [0] | [1] | [2] | [3] | [4] |
	|-----|-----|-----|-----|-----|
	| 'H' | 'e' | 'l' | 'l' | 'o' |
	
* 하지만, 문자열은 아래와 같이 마지막에 **'\0'** 을 추가로 삽입해서, 문자열 임을 구분해준다. 

	| [0] | [1] | [2] | [3] | [4] | [5] |
	|-----|-----|-----|-----|-----|-----|
	| 'H' | 'e' | 'l' | 'l' | 'o' | \0  |

* 의도했든 의도하지 않았든 문자열에 마지막에 **'\0'** 가 포함되면 해당 char 배열은 문자열로 인식된다.
*  따라서 문자열을 위한 char 배열은 알파벳 숫자 보다 하나더 크게 해야 한다. 
*  문자열은 아래와 같이 여러 방법으로 초기화 할수 있다.

```
char string[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
char string[6] = "Hello";
char string[] = "Hello";
```

* 배열 이기 때문에 index를 통한 char 하나 하나에 대한 접근이 가능하다. 

```
char tmp =  string[0];     // 'H'
tmp =  string[1];     // 'e'
tmp =  string[2];     // 'l'
```

## 문자열 입/출력 

#### 문자열 서식 지정자 %s
* 다른 데이터 type 처럼 문자열을 처리 할수 있는 서식 지정자가 존재 한다. 
* 문자열은 문자열을 위한 서식 지정자를 이용해서 출력 하고, 입력 받을 수 있다. 

```
char string[] = "Hello";
printf("%s World", string);
```
> 출력 결과 

```
Hello World
```

> 입력 예제

```
char string[1024];
printf("단어 입력 : ");
scanf("%s", string);
    
printf("입력한 단어는 %s 입니다.", string);
```

> 입 / 출력 결과 

```
단어 입력 : hello
입력한 단어는 hello 입니다.
```

* 한번에 하나의 단어만 입력 가능하고, 공백이 포함된 입력이면 공백 전까지만 입력 된다. 

```
단어 입력 : hello World
입력한 단어는 hello 입니다.
```
[예제보기](ex/ex01.c)

## sprintf
* 문자열을 자유자제로 저장할 수 있게 하는 함수 
* int sprintf(char * const _Buffer, char const * const _Format, ...);
* 이름에서 느낌이 오겠지만, printf 와 유사한 형태로 사용 할수 있다. 
* printf와 사용 방식이 같고, 그 결과가 화면에 보여지는 것이 아니라 string 에 저장 되는 방식

```
int score = 90;
sprintf(string3, "당신의 점수는 %d 입니다.", score);
printf("%s\n", string3);
```
> 출력 결과 

```
당신의 점수는 90 입니다.
```

* 첫 번째 파라미터는 저장할 char 배열이다. 
* 두 번째 파라미터부터는 printf와 동일하다.


## 문자열 함수

* 문자열을 쉽게 다룰 수 있게 해주는 함수
* string.h 에 포함되어 있어서 사용하기 위해서는 `#include<string.h>` 를 포함해 주어야 한다.

| 함수 원형                          | 기능 |
|---------------------------------------------------------|--------------|
| size_t **strlen** (const char * str);                       | 문자열의 길이를 return 해준다.   |
| int **strcmp** (const char * str1, const char * str2);      | 두 문자열을 비교해 준다.   |

> string.h 의 다른 함수까지 확인 하려면 [링크](http://www.cplusplus.com/reference/cstring/)  참조
> 추후에 **pointer** 라는 개념을 익히면 더 많은 함수를 사용 할수 있게 된다.

* stlib.h 에 포함되어 있어서 사용하기 위해서는 `#include<string.h>` 를 포함해 주어야 한다.

| 함수 원형                          | 기능 |
|---------------------------------------------------------|--------------|
| int **atoi** (const char * str);                      | 문자열을 int로 변환한다   |
| double **atof** (const char* str);      | 문자열을 double로 변환한다   |

### strlen

```
char string1[] = "Hello";
int length = strlen(string1);
printf("%s 의 길이는 %d 이다.\n", string1, length);
```

> 출력 결과 

```
Hello 의 길이는 5 이다.
```

### strcmp
* 두 문자열을 ascii 기준으로 비교 한다. 
* 숫자 알파벳 순서대로 비교가 되고 뒤에 있을 수록 크다라고 판단한다. 
* return 되는 type은 int 이다
	*  같으면 0
	*  첫번쨰 파라미터가 더 크면 음수
	*  두번쨰 파라미터가 더 크면 양수
	*  첫번쨰 파라미터에서 두번쨰 파라미터를 뺀 결과를 return 한것이다.

```
char string1[1024] = "Hello";
char string2[1024] = "World";

int compare = strcmp(string1, string2);
if(compare == 0) {
    printf("%s와 %s는 같은 문자열 입니다.\n", string1, string2);
} else if(compare < 0) {
    printf("%s보다 %s문자열이 더 큽니다.\n", string1, string2);
} else if(compare > 0) {
    printf("%s보다 %s문자열이 더 작습니다.\n", string1, string2);
}
```

> 출력 결과

```
Hello보다 World문자열이 더 큽니다.
```

### atoi

* 문자열에 정수가 들어 있을 경우 int type으로 return
* 문자열이 정수로 시작해야만 변환 된다. 
* 정수를 찾지 못한경우 0이 return 된다.
* 정수가 포함되어 있지만, 다른 문자로 시작하면 0이 return 된다.

```
char intString1[] = "93점";
char intString2[] = "점수";
char intString3[] = "내 점수는 93점";
    
printf("문자열 \"%s\" 에서 %d를 추출하였다.\n", intString1, atoi(intString1));
printf("문자열 \"%s\" 에서 %d를 추출하였다.\n", intString2, atoi(intString2));
printf("문자열 \"%s\" 에서 %d를 추출하였다.\n", intString3, atoi(intString3));
```

> 출력 결과

```
문자열 "93점" 에서 93를 추출하였다.
문자열 "점수" 에서 0를 추출하였다.
문자열 "내 점수는 93점" 에서 0를 추출하였다.
```

### atof

* 문자열에 실수가 들어 있을 경우 double type으로 return
* 문자열이 실수로 시작해야만 변환 된다. 
* 정수를 찾지 못한경우 0이 return 된다.
* 실수가 포함되어 있지만, 다른 문자로 시작하면 0이 return 된다.
    
    
```
char floatString1[] = "3.75점";
char floatString2[] = "평점";
char floatString3[] = "내 평점은 3.75점";
    
printf("문자열 \"%s\" 에서 %lf를 추출하였다.\n", floatString1, atof(floatString1));
printf("문자열 \"%s\" 에서 %lf를 추출하였다.\n", floatString2, atof(floatString2));
printf("문자열 \"%s\" 에서 %lf를 추출하였다.\n", floatString3, atof(floatString3));
```
 
> 출력 결과

```
문자열 "3.75점" 에서 3.750000를 추출하였다.
문자열 "평점" 에서 0.000000를 추출하였다.
문자열 "내 평점은 3.75점" 에서 0.000000를 추출하였다.
```

[예제 보기](ex/ex02.c)

[연습문제](test/test01/README.md)

[고급문제](test/test02/README.md)
# 3. 함수    

## 특정한 기능을 수행
* 자판기 사용법  

```
동전 투입 후 음료 선택   
    \   /
 ---     -----------
|       자판기       |
 ------------   ----
             /  \
           음료 꺼내기
```

* 자판기를 사용할 때는 자판기에 동전을 투입하고 음료를 선택하고, 음료가 나오면 음료를 꺼내는 것만 숙지하면된다.
* 자판기 내부에서 어떤일이 일어나는지는 알 필요가 없다.   

### 자판기처럼 입력값을 받고 그에 따른 결과를 출력하는 특정한 기능을 하는 것을 "함수"라고 한다. 

### 자판기의 과정을 C 언어로 번역하면 아래와 같다

```
자판기에 동전 투입 후 음료 선택 하고 음료를 꺼낸다
	          ▼
     음료 = 자판기(1000원, 콜라 버튼);
		  ▼
drink = vendingMachine(1000, colaButton);

```

* 아래와 같이 main 안에서 사용하면 된다. 

```
int main() {
	drink = vendingMachine(1000, colaButton);
}
```

* 위와 같이 함수를 이용하는 것을 **"함수를 call한다"**, **"함수를 부른다"**, **"함수를 호출 한다"** 라고 표현한다.


## 함수 사용 - 실제 예시
* 이미 함수를 적극적으로 사용 하고 있었다. 
* 예는 아래와 같다. 
 
```
printf(“Hello World!!”);

```
* 위 함수는 출력할 문자열을 입력 받아서 출력한다.
* "printf" 는 **"함수이름"** 이다. 
* 입력값은 위와 같이 함수 이름 뒤에 괄호 안에 넣어 주면 된다 
* 함수에서 입력하는 값을 **"argument"** 또는 **"인자"** 라고 한다 
* 위의 예에서 인자는 "Hello World!!" 이다

```
printf(“당신의 점수는 %d 입니다.”, score);

```
* 여러개의 인자를 넘길때는 **,(쉼표)** 로 구분하여 넘긴다. 

## 함수는 어디에서 왔는가?

* printf와 같은 함수는 어디에서 왔고, 사용법을 어떻게 알고 사용하는 것일까?

```
#include <stdio.h>

int main(int argc, const char * argv[]) {
       
    return 0;
}
```
* #include \<stdio.h\> 여기에서 함수 목록을 가지고 있다. 
* include는 포함하다의 의미로 stdio.h 라는 파일을 포함한다는 뜻이다. 
* stdio.h 는 standard(std), input/output(io) 의 약자로 표준 입출력   
  즉, 화면에 글씨를 출력하고(출력), 화면에서 값을 입력받는(입력) 기능을 수행하는 함수들의 목록을 가지고 있다. \
* printf, scanf 등 함수를 사용하기 위해서 위와 같이 include를 작성해 준다.   

>   [stdio 함수 목록 링크](https://ko.wikipedia.org/wiki/Stdio.h#%EB%A9%A4%EB%B2%84_%ED%95%A8%EC%88%98)

* .h 확장자인 파일을 **"헤더 파일"** 이라고 하며, 사용가능한 함수(엄밀히 이야기하면 상수등 다른 내용들도 포함)의 목록을 열거하고 사용할 수 있도록 한다. 
* C언어에서는 stdio 이외에도 많은 유용한 헤더파일을 제공한다. 

## math.h

* math.h 헤더 파일은 간단한 수학 수식 부터 직접 계산하기 힘든 수학 값을 구하는 함수까지 다양하게 포함되어 있다.

```
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
       
    return 0;
}
```
* 위와 같이 추가로 포함하면 함수를 사용 할수 있다. 

> [math 함수 목록 링크](https://ko.wikipedia.org/wiki/C_%EC%88%98%EC%8B%9D_%ED%95%A8%EC%88%98)


### double fabs (double x); 분석 하기

* 위 함수는 수를 입력 받고 절대 값을 주는 함수이다. 
* 이와 같은 형태를 **함수 원형**이라고 한다. 
* 함수 원형으로 함수의 사용법을 확인 할 수있다.
* 함수의 이름은 fabs 이다. 
* 함수의 입력 값은 괄호안에 명시되고 double 데이터 형으로 받는다. 이를 **"parameter"** 또는 **"매개 변수"** 라고 한다. 
* 함수의 결과는 제일 앞에 표시된 데이터 형인 double로 전달 된다.
* 결과 값을 주는 행위를 되돌려 준다고 표현하여 **"return"** 이라고 하고 이 데이터 형을 "return type" 라고 한다.   
* parameter의 type 과 return 은 기본 데이터 형을 사용한다. 
* return이 없는 경우 void라는 데이터 형을 사용한다.   `void func(int x);`
* prameter가 없는 경우 비워 둔다. `int func();`


> fabs 함수는 double데이터 하나를 parameter로 받으며, 절대 값으로 변환된 값을 double로 return 해주는 함수이다. 

### double fabs (double x); 사용하기 

```
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  
     // 값 직접 입력
    double result = 0.0;
    result = fabs(-1.5);
    printf("-1.5의 절대값은 %f이다.\n", result);
    // 출력 결과 : -1.5의 절대값은 1.500000이다.
    
    // 변수로 입력
    double parameter = -53.2;
    result = fabs(parameter);
    printf("%f의 절대값은 %f이다.\n", parameter, result);
    // 출력 결과 : -53.200000의 절대값은 53.200000이다.
    
    // 결과를 변수에 저장 하지 않고 그대로 출력
    printf("%f의 절대값은 %f이다.\n", -10.0, fabs(-10.0));
    // 출력 결과 : -10.000000의 절대값은 10.000000이다.
    
    return 0;
}
```


#### 함수 사용은 사용법을 명확히 해서, parameter와 return 에 집중
#### 함수의 return 된 결과는 함수 자체로 치환 된다고 생각 하는 것이 편리 

[연습문제](test/test01/README.md)

## 함수 만들기
* C언어에서 기본 제공하는 함수 뿐만 아니라 직접 함수를 만들어서 사용 가능하다

## 함수 설계
* 함수를 만들때는 명확한 목적성을 가지고 입력 받는 값, return는 값을 정하여 설계해야 한다. 
	* 함수 목적 정하기 
		* 어떤 값을 입력 받아서 어떤 기능을 수행하고, 어떤 값을 return 할지 정한다.
	* 함수 이름 정하기
		* 함수의 기능을 명확히 알수 있는 이름이 좋다. 
		* 여러 단어를 조합하고 길어 지더라도 명확한 것이 중요하다. 
		* 함수는 어떤 기능을 수행하기 때문에 이름 시작단어는 **동사**가 좋다
	* parameter 정하기
		* 몇개의 parameter를 받아서 처리할지 결정
		* parameter type을 결정
		* parameter 이름을 결정
			* 변수 이름과 동일한 규칙
	* return type 정하기 
		* 목적에 부합하는 return type을 결정
	 	 
* 설계한 결과로 함수 원형을 만들어 낸다.

## 육개장 가격 계산 함수 설계
* 설계 
	* 목적 : 육개장 갯수에 따른 가격을 구하는 함수를 만든다
	* 이름 :  육개장의 가격을 얻는 것이므로 이름을  "getNoodlesPrice" 로 한다
	* parameter
		* 육개장의 갯수를 받으면 되므로 하나를 받는다
		* 갯수이므로 type은 int로 한다
		* 갯수를 나타내는 count를 이름으로 한다. 
	* return : 가격을 돌려 받기 때문에 int로 type을 정한다
* 설계를 기반으로 아래와 같은 함수 원형을 작성한다. 

```
int getNoodlesPrice(int count);
```

## 함수 구현

```
int getNoodlesPrice(int count) {
	// 구현 내용 작성
}
```

* 함수 원형 뒤에 중괄호로 묶어서  그 안에 구현 내용을 넣는다. 

```
int main() {

}
```
* 의무적으로 작성했던 main도 함수를 구현한 것이다. 
* main에 구현하는 것과 동일하게 구현하면 된다. 

```
int getNoodlesPrice(int count) {
	int noodleCup = 850;
	int result = noodleCup * count;
	return result;
}
```
* count 는 함수를 사용하는 쪽에서 넣어주는 값이 들어 있는 변수이다. 
* count에 값이 들어 있음을 가정하고 계산을 진행한다. 
* 계산된 결과는 return 이라는 키워드 뒤에 값을 넣어 준다. 
* return 된 결과는 함수를 사용한 측에서 받을 수 있다. 
* 해당 함수를 사용하는 방법은 아래와 같다. 


```
#include <stdio.h>

int getNoodlesPrice(int count) {
    int noodleCup = 850;
    int result = noodleCup * count;
    return result;
}

int main() {
    
    int price = getNoodlesPrice(5);
    printf("육개장 5개의 값은 %d원 이다.\n", price);
    // 출력 결과 : 육개장 5개의 값은 4250원 이다.
    
    return 0;
}
```
* 함수 구현부는 사용할 함수 보다 위에 같은 레벨에 작성한다. 
* main 함수에서 사용할 것이기 때문에 main함수 위에 작성하였다.
* main 함수 내에서 함수를 호출하고 결과를 price 변수에 넣었다. 
* 출력 결과로 해당 값이 제대로 저장 된것을 확인 하였다. 
* 함수를 사용하기 위해서는 꼭 함수를 호출 해야 한다. 구현한 상태는 아무 의미가 없다. 
* main 함수가 호출 없이 실행되는 이유는 프로그램이 실행될때 자동으로 호출되는 함수이기 때문이다.

[연습문제](test/test02/README.md)

## 변수 생명주기 
```
#include <stdio.h>

int getNoodlesPrice(int count) {
    int noodleCup = 850;
    int result = noodleCup * count;
    return result;
}

int main() {
    
    int price = getNoodlesPrice(5);
    printf("육개장 5개의 값은 %d원 이다.\n", price);
    // 출력 결과 : 육개장 5개의 값은 4250원 이다.
    
    return 0;
}
```

#### main함수에서 noodleCup변수를 사용 할 수 있을까? 
* 중괄호로 구분되는 **block({ })** 단위로 변수가 존재한다. 
* getNoodlesPrice 와 main 함수는 다른 block 이기 때문에, **변수를 공유 할 수 없다.**
* 이렇게 block 안에 존재하는 변수를 **"지역변수"** 또는 **"local Variable"** 라고 한다.

```
#include <stdio.h>

int main() {
    int out = 10;
    
    {
        int in = 1;
        printf(“in : %d”, in);	// 출력 내용 : in : 1
        printf(“out : %d”, out); // 출력 내용 : out : 10
    }
    
    printf(“in : %d”, in);		// compile error
    printf(“out : %d”, out); // 출력 내용 : out : 10
}
```

* 하나의 함수 내에서도 block 단위로 변수는 생명 주기를 갖는다. 
* out 변수는 상위 block 에서 선언 되었기 때문에, 하위 block 안에서 사용이 가능하다. 
* 하위 block에 있는 변수는 block 끝나는 이후에는 생명 주기가 끝나므로 사용이 불가능하고 error가 발생한다. 
* 생명 주기가 있는 이유는 다음과 같다. 
	* 하나의 block 안에서 사용 하고 더 이상 사용되지 않는 경우, 메모리를 빠르게 해제하여 메모리 효율을 올린다. 
	* block 내에서 처리 되는 변수가 외부 block에서 간섭 받지 않게 해서 변수가 오염되는 것을 방지한다. 


```
#include <stdio.h>

int out = 10;

int getNoodlesPrice(int count) {
    int noodleCup = 850;
    int result = noodleCup * count;
    
    printf(“out : %d”, out); // 출력 내용 : out : 10    
    return result;
}

int main() {

    printf(“in : %d”, in);		// compile error
    printf(“out : %d”, out); // 출력 내용 : out : 10
}
```

* 어떤 block에도 포함되지 않는 가장 상위에 선언하여, 어디서든 사용 가능한 변수도 존재한다. 
* 이를 **"전역 변수"** 또는 **"global Variable"** 이라고 한다. 
* 하지만, 변수의 생명주기 이유에서 언급 했듯이 메모리활용에도 좋지 않고, 변수가 오염될 확률도 높기 때문에, 사용을 지양한다. 
* 변수 오염 염려가 없는 const 형태의 변수에 주로 사용된다. 

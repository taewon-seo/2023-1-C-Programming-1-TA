

// Chap.4 

// 8bit --> 1 byte -- 1024 (2^10) --> 1 KBytes --> 1 MB --> 1GB --> 1 TB
//

// 정수
// int          :    4 bytes      -20억 ~ 20억
// short        :    2 bytes      -32,000 ~ 32,000
// long         :    4 bytes      ( windows ) ---> sizeof 연산자. data type 크기를 확인
// long long    :    8 bytes      -920경 ~ 920경

// 차이점: 각 데이터 타입이 차지하는 메모리 크기

#include <stdio.h>
#include <limits.h>   // 데이터형의 최대, 최소 값을 알기 위해서 필요

#if 0
int main() {

	printf("int size %d \n", sizeof(int));
	printf("int size %d \n", sizeof(short));
	printf("int size %d \n", sizeof(long));

	printf("int max %d    min %d \n", INT_MAX, INT_MIN);
	printf("short max %d    min %d \n", SHRT_MAX, SHRT_MIN);
	printf("long long max %lld    min %lld \n", LLONG_MAX, LLONG_MIN);

	return 0;
}
#endif

// 컴퓨터 이진수에서는 숫자를 과연 어떻게 표현할까?

// 2개 비트 --> 4개 (2^2)
//            00  01  10  11
//             0   1   2   3
// 
// --> 맨 왼쪽 비트가 0이면 양수,
//                    1이면 음수
//             00  01  10  11
//              0   1  -0  -1
// 2의 보수     0   1  -2  -1


// 음의 영을 없애 버리자, 그러면서도 가장 왼쪽 비트에 의해서 양/음수 판단이 가능하고,
// 산술 연산이 여전히 가능한 할당 체계,,, 이걸 만들자... ===> p.138 2's complement, 2의 보수
// 
// 2의 보수 방법 ===> 양수<-->음수간의 전환 방법
//                    1단계. 비트를 뒤집어, (toggle) --> on -> off, off -> on
//                    2단계. +1 (1을 더한다.)
// 
// -1을 어떻게 표현하는가?   1에 대해서 2의 보수방법을 적용
//                    01 -- toggle --> 10 --> 11 (-1)
// 
// 0에다가 2의 보수를 적용하면?
//                    00 -- toggle --> 11 --> 00
// 
// 10(이진수)은 무엇인가? --> 2의 보수체계를 적용하면 대응하는 양수가 나온다.
//                    10 -- toggle --> 01 -- +1 --> 10 (2)
//            


// 
// 3개 비트 --> 8개 (2^3)
//          000 001 010 011 100 101 110 111
//            0   1   2   3   4   5   6   7
//            0   1   2   3  -0  -1  -2  -3
//      
// 2의 보수   0   1   2   3  -4  -3  -2  -1
//

// 100 -- 011 --> 100  
// 101 -- 010 --> 011

// 4개 비트 --> 16개 (2^4)


// unsigned type (0과 양수만 사용하는 타입)

// unsigned int       : 0 ~ 40억
// unsigned short     : 0 ~ 45000
// unsigned long    
// unsigned long long : 0 ~ 2*90경

#if 0
int main() {

	printf("unsigned int max: %u\n", UINT_MAX);
	printf("unsigned int max: %d\n", UINT_MAX);


	return 0;
}
#endif

// overflow  : data type이 표현할 수 있는 숫자의 한계를 위로 넘어가는 경우
// underflow :                                          밑으로 넘어가는 경우 

#if 0
int main() {

	int a = INT_MAX;
	a = a + 1; // overflow

	printf("overflow %d\n", a);

	int b = INT_MIN;
	b = b - 1;
	printf("underflow %d\n", b);

	return 0;
}
#endif

// 상수 : 변하지 않는 값
// 상수를 만드는 2가지 방법
// 방법 1. const   --> 변수를 만들고, 값을 고정시키는 방법
// 방법 2. #define  --> 컴파일하는 단계에서 값을 바꿔치기 하는 방식

#if 0
#define MY_NNN 10
int main() {

	const float PI = 3.141592;
	const int MY_NUM = 10; // 맨 앞에 const를 붙인다. constant의 약자
	MY_NUM = 30;           // a는 더이상 변수가 아니다. 값을 바꾸는 것이 불가능
	
	printf("%d\n", MY_NNN);

	return 0;
}
#endif

// 실수형

// floating point number type (부동소수점형) 부浮동動 -> 소수점이 떠서 움직임

// fixed point number type (고정소수점형)
//
//    3.14

// float   : 4 byte
// double  : 8 byte
// long double : 8 byte

#if 0
#include <float.h>

int main() {

	printf("float max:%f   min:%e  \n", FLT_MAX, FLT_MIN);
	printf("double max:%e   min:%e  \n", DBL_MAX, DBL_MIN);

	return 0;
}
#endif

// p.147 -- 부동소수점은 부정확할 수도 있다.
// 2진수의 0.1은 10진수의 1/3 같은 존재, 정밀하게 표현할 수 없음.

#if 0
int main() {

	float a = 0.1;
	printf("a is %.20f\n", a);

	return 0;
}
#endif

// p.148 -- 부동소수점을 사용할 경우, 주의할 점

#if 0
int main() {

	double d;

	d = (1.0e20 + 5.0) - (1.0e20);
	printf("%f\n", d);

	return 0;
}
#endif

// 문자형

// char

// ASCII 테이블 (국제 표준): 각 문자별 학번 부여 체계
// p. 150

// American Standard Code for Information Interchange
#if 0
int main() {

	char d = 'a';
	char e = 'E';

	printf("%c \n", d);
	printf("%d \n", d);

	return 0;
}
#endif

// Chap. 5.
//   수식과 연산자

int main() {

	// 1. 산술연산자, binary operator, 피연산자가 2개
	//       +, -, *, /, %
	int a;
	a = a + 1;
	a = a - 2;
	a = a * 3;
	a = a / 4;
	a = a % 5;

	// 2. 부호연산자, unary operator, 피연산자가 1개

	a = -100;
	a = -a;

	// 3. 증감연산자, unary operator
	a++;
	++a;
	a--;
	--a;



	return 0;
}









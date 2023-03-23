
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230322 실습 수업

/* 교재 CH.4 변수와 자료형 */

// 4.1 변수와 상수

// 변수란 무엇인가?
// sum = x + y;
// sum, x, y가 변수
// 변수에 이름을 부여한 후, 변수 이름을 사용하여서 메모리 공간을 사용


/* 원의 면적을 계산하는 프로그램 */
#if 0

int main() {

	// 변수
	double radius;  // 원의 반지름
	double area;    // 원의 면적

	printf("원의 면적을 입력하시오: ");
	scanf("%lf", &radius);

	// 3.141592 는 상수 -> 컴퓨터가 계산을 하기 위해서는 모든 데이터가 메모리에 존재해야 함!
	// 따라서 상수도 메모리에 저장됨. 다만 변수와 달리 이름이 없고, 수정할 수 없음.

	// 원의 면적을 상수를 이용하여 계산
	area = 3.141592 * radius * radius;
	printf("원의 면적: %f \n", area);



	return 0;
}

#endif

// 4.2 자료형

// 자료형에는 정수형, 부동 소수점형, 문자형이 있다.

// 정수형에는 정수 타입의 데이터를 저장할 수 있음: short, int, long, longlong 등
// 부동 소수점형은 실수 타입의 데이터를 저장할 수 있음: float, double, long double 등
// 문자형은 하나의 문자를 저장할 수 있음: char -> 정수형으로 분류하기도 함, 문자가 작은 정수로 표현됨

// 자료형의 크기를 출력하는 프로그램

#if 0

int main() {

	int x;
	printf("변수 x의          크기: %d\n", sizeof(x)); // 변수의 크기를 반환

	printf("char              크기: %d\n", (int)sizeof(char)); // 자료형의 크기를 반환
	printf("int               크기: %d\n", (int)sizeof(int));
	printf("short             크기: %d\n", (int)sizeof(short));
	printf("long              크기: %d\n", (int)sizeof(long));
	printf("long long         크기: %d\n", (int)sizeof(long long));
	printf("float             크기: %d\n", (int)sizeof(float));
	printf("double            크기: %d\n", (int)sizeof(double));


	return 0;
}
#endif

// 4.3 정수형

/*
	short     -> 2byte (16bit)
	int       -> 4byte (32bit)
	long      -> 4byte (32bit)
	long long -> 8byte (64bit)
*/

#if 0

#include <limits.h>

#define  PI 3.141592

int main() {

	// 오버플로우
	// 정수형 변수가 나타낼 수 있는 정수의 범위가 제한되어 있기 때문에 발생함.
	// 정수형 변수를 이용하여 덧셈과 같은 산술 연산을 하는 경우, 산술 연산의 결과가 정수형이 나타낼 수 있는 범위를 넘어갈 수 있음.


	short s = SHRT_MAX; // 최대값으로 초기화, 32767
	unsigned short us = USHRT_MAX; // 최대값으로 초기화, 65535
	int i = INT_MAX; // 최대값으로 초기화, 2147483647 (약 20억)

	printf("short max s: %d\n", s);
	s = s + 1;
	printf("short max s + 1: %d\n", s);
	printf("------------------------\n");

	printf("Ushort max us: %d\n", us);
	us = us + 1;
	printf("Ushort max us + 1: %d\n", us);
	printf("------------------------\n");

	printf("int max i: %d\n", i);
	i = i + 1;
	printf("int max i + 1: %d\n", i + 1);
	printf("------------------------\n");

	return 0;
}

#endif

// 자료형의 출력

#if 0

int main() {

	float f = 123.4567f;
	printf("%%f : %f \n", f);
	printf("%%e : %e \n", f);

	return 0;
}

#endif

/* CH.4 Programming */

// 01. 하나의 실수를 입력받아 소수점 표기방법과 지수표기방법으로 동시에 출력하는 프로그램
#if 0
int main() {
	float a;
	scanf("%f", &a); // 실수 입력 받음
	printf("실수 형식으로는 : %f\n", a);
	printf("실수 형식으로는 : %e\n", a);

	return 0;
}
#endif


// 02. 정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력하는 프로그램
#if 0
int main() {
	int a;
	scanf("%x", &a); // 16진수 정수 입력받음

	printf("8진수로는 : %o\n", a);
	printf("10진수로는 : %d\n", a);
	printf("16진수로는 : %#x\n", a);

	return 0;
}
#endif


// 03. int형의 변수 x와 y의 값을 서로 교환하는 프로그램
// 별도의 변수가 필요하면 정의해서 사용
// 변수 x와 y는 10,20의 값으로 초기화 하라.
#if 0
int main() {
	int x = 10, y = 20;
	int temp; // 임시 변수

	printf("x=%d y=%d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("x=%d y=%d\n", x, y);
	return 0;
}
#endif


// 04. 상자의 부피를 구하는 프로그램
// double형의 실수로 길이, 너비, 높이를 입력받아 부피를 출력
#if 0
int main() {
	double d, w, h;
	scanf("%lf %lf %lf", &d, &w, &h);

	printf("상자의 부피는 : %lf\n", d * w * h);

	return 0;
}
#endif


// 08. 아스키 코드값(숫자) 입력하면 해당 '문자'를 출력하는 프로그램
#if 0

int main() {

	int ascii_num;

	scanf("%d", &ascii_num);
	printf("%c", (char*)ascii_num);

}

#endif

// OJ 1020
// 실수 한개 입력받아 둘째 자리까지 출력하기

/*
	실수(float)하나를 입력받아 저장한 후,

	저장되어있는 값을 소수점 3째 자리에서 반올림해 2째 자리까지 출력하시오.

	> 입력
	실수 하나가 입력된다.

	> 출력 
	결과를 소수점 3째 자리에서 반올림해 2째 자리까지 출력한다.
	(%.2f를 이용하면 된다.)
*/

#if 0

int main() {

	float input = 0;

	scanf("%f", &input);

	printf("%.2f", input);

	return 0;
}

#endif

// OJ 1021
// 정수 한 개 입력받아 세 번 출력하기

#if 0
/*
	int형 정수 하나를 입력받아 3번 출력해보자.

	> 입력
	정수 하나가 입력된다.

	> 출력
	입력받은 정수를 공백으로 구분해 세 번 출력한다.
*/

int main() {

	int a = 0;

	scanf("%d", &a);

	printf("%d %d %d", a, a, a);

	return 0;
}

#endif

// OJ 1022
// 시간 입력받아 그대로 출력하기

/*
	시간이 어떤 형식에 맞추어 입력될 때,
	그대로 출력하는 연습을 해보자

	> 입력
	시(hour)와 분(minute)이 ":"(콜론)로 구분되어 입력된다.

	> 출력
	입력받은 시간을 "시:분"으로 출력한다.
*/

#if 0

int main() {

	int hour = 0;
	int minute = 0;

	scanf("%d:%d", &hour, &minute);

	printf("%d:%d", hour, minute);

	return 0;
}

#endif


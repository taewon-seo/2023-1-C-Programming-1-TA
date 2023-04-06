
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230406 실습

/* 교재 Chap.5 Programming 예제 */

// 02. 2개의 double 형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램을 작성하라.
//     결과는 소수 2번째 자리까지 출력하라.
#if 0

int main() {

	double num1 = 0;
	double num2 = 0;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);

	double sum = num1 + num2;
	double sub = num1 - num2;
	double mul = num1 * num2;
	double div = num1 / num2;

	printf("%.2f %.2f %.2f %.2f", sum, sub, mul, div);

	return 0;
}

#endif

// 03. 3개의 정수값을 입력받아서, 3개의 정수값 중에서 최대값을 출력하는 프로그램을 작성하라.

#if 0

int main() {

	int a, b, c;
	int max = 0;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b; // a와 b중 더 큰 값을 max에 저장

	max = (c > max) ? c : max; // max 와 c중 더 큰 값을 max에 저장
	
	printf("최대값은 %d입니다.", max);

	return 0;
}

#endif

// 05. 100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하라.
//     사용자가 정수 23을 입력하면 2, 3을 차례로 출력하면 된다.

#if 0

int main() {

	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	int a = 0;
	int b = 0;

	a = num / 10;
	b = num % 10;

	printf("십의 자리: %d\n", a);
	printf("일의 자리: %d\n", b);

	return 0;
}

#endif

// OJ 1639
/*
비트 이동 연산을 이용하여 문자 4개를 받아서 하나의 unsigned int형의 변수 안에 저장하는 프로그램을 작성하시오.

첫 번째 문자는 비트 0부터 비트 7까지 저장되고, 두 번째 문자는 비트 8부터 비트,

15까지 세 번째 문자는 비트 16에서 비트 23까지, 네 번째 문자는 비트 24부터 비트 31까지 저장 된다.

결과로 생성되는 정수값은 16진수로 출력하도록 한다.
*/

#if 0

int main() {

	unsigned int num = 0; // 0x00_00_00_00

	unsigned char C1;
	unsigned char C2;
	unsigned char C3;
	unsigned char C4;

	scanf("%c %c %c %c", &C1, &C2, &C3, &C4);
	
	num = C1 | num; 
 
	num = (C2 << 8) | num; 

	num = (C3 << 16) | num;

	num = (C4 << 24) | num;

	printf("%x", num);

	return 0;
}

#endif

// OJ 1639
// 다른 풀이

#if 0

int main() {

	unsigned int num = 0; // 0x00_00_00_00

	unsigned char C1;
	unsigned char C2;
	unsigned char C3;
	unsigned char C4;

	scanf("%c %c %c %c", &C1, &C2, &C3, &C4);

	num = C4 | num;

	num = num << 8;
	num = C3 | num;

	num = num << 8;
	num = C2 | num;

	num = num << 8;
	num = C1 | num;

	printf("%x", num);

	return 0;
}

#endif

// OJ 1640
/*
양의 정수 1개를 입력받아 각 자릿수의 합을 출력하시오.

줄 끝에는 줄바꿈 문자가 없어야 한다.

예를 들어, 9876이 입력되면 9 + 8 + 7 + 6 = 30 이므로 30을 출력해야 한다.

입력 정수는 1000부터 9999까지의 값을 갖는다.
*/

#if 0

int main() {

	int num = 0;
	int C1000 = 0;
	int C100 = 0;
	int C10 = 0;
	int C1 = 0;

	scanf("%d", &num);

	C1 = num % 10;    // 9876 => 6
	num = num / 10;   // 9876 -> 987

	C10 = num % 10;   // 987 => 7
	num = num / 10;   // 987 -> 98

	C100 = num % 10; // 98 => 8
	num = num / 10;   // 98 -> 9

	C1000 = num % 10; // 9 => 9

	printf("%d", C1 + C10 + C100 + C1000);

	return 0;
}

#endif

// OJ 1641
/*
양의 정수 1개를 입력받아 각 자릿수의 위치와 자릿수의 값을 출력하시오.

값 사이는 공백으로 구분되며, 마지막 값 뒤엔 공백이 없다. 줄 끝에는 줄 바꿈 문자가 없어야 한다.

예를 들어,
9876이 입력되면 4 9 3 8 2 7 1 6이 출력되어야 한다.
456이 입력되면 3 4 2 5 1 6이 출력되어야 한다.

입력 정수는 10부터 9999까지의 값을 갖는다.
*/

#if 0

int main() {

	int num = 0;
	int C1000 = 0;
	int C100 = 0;
	int C10 = 0;
	int C1 = 0;

	scanf("%d", &num);

	/*
	4자리 1234
	3자리 123
	2자리 12
	*/

	if (num / 100 >= 1) { // 3자리 수 이상

		if (num / 1000 >= 1) { // 4자리 수 

			C1000 = num / 1000; // 1234 -> 1
			num = num % 1000; // 234

			printf("4 %d ", C1000);
		}

		C100 = num / 100; // 234 -> 2
		num = num % 100; // 234 -> 34
		printf("3 %d ", C100);
	}

	C10 = num / 10; // 34 -> 3
	num = num % 10; // 34 -> 4

	printf("2 %d ", C10);

	C1 = num;
	printf("1 %d", C1);

	return 0;
}

#endif




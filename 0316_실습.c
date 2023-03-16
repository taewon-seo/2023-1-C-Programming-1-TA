
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

// 곱셉 계산기 만들기 복습
// printf, scanf, 자료형

int main() {

	// 변수를 할당받기
	float val1 = 0;
	float val2 = 0;

	// 사용자 입력받기
	printf("첫 번째 수를 입력하세요:");
	scanf("%f", &val1);
	printf("두 번째 수를 입력하세요:");
	scanf("%f", &val2);

	// 계산하기
	float result = 0;
	result = val1 * val2;

	// 결과 출력하기
	printf("%f", result);

	return 0;
}

#endif

/* 
	교재 Programming 예제 
*/

#if 0
// 1번 문제
// 사용자로부터 3개의 정수를 입력받은 뒤, 합계와 평균을 계산하는 출력하는 프로그램을 작성하라.

int main() {

	// 변수 선언 및 할당
	float val1 = 0;
	float val2 = 0;
	float val3 = 0;

	// 사용자의 입력 받기
	printf("첫 번째 수를 입력하세요:");
	scanf("%f", &val1);
	printf("두 번째 수를 입력하세요:");
	scanf("%f", &val2);
	printf("세 번째 수를 입력하세요:");
	scanf("%f", &val3);

	// 계산하기
	float sum = 0;
	sum = val1 + val2 + val3;

	float avg = 0;
	avg = sum / 3;

	// 출력하기
	printf("합계는 %f, 평균은 %f", sum, avg);


	return 0;
}

#endif


#if 0
// 2번 문제
// 마일을 미터로 환산하는 프로그램. 마일 단위로 입력을 받고 1.609를 곱해 미터로 변환하여 출력

int main() {

	float mile = 0;

	printf("마일을 입력하시오: ");
	scanf("%f", &mile);

	float meter = 0;

	// 마일 -> 미터 변환식
	meter = mile * 1609;

	printf("%f마일은 %f미터입니다.", mile, meter);

	return 0;
}

#endif


#if 0
// 3번 문제
//삼각형의 높이와 밑변을 받아서 넓이를 계산하는 프로그램. 모든 데이터는 실수형 입력과 출력

int main() {

	// 변수 생성 및 초기화

	float base = 0;
	float height = 0;
	float area = 0;

	printf("삼각형의 밑변: ");
	scanf("%f", &base);

	printf("삼각형의 높이: ");
	scanf("%f", &height);

	// 삼각형 넓이 계산식

	area = 0.5 * base * height;
	printf("삼각형의 넓이: %f", area);

	return 0;
}

#endif


#if 0
// 4번 문제
// 사용자로부터 화씨온도를 입력받아서, 섭씨온도로 변환하여 출력하라.

int main() {

	float F = 0;

	printf("화씨 온도를 입력하세요:");
	scanf("%f", &F);

	float C = 0;

	// 변환식
	C = (5.0 / 9.0) * (F - 32);
	printf("섭씨온도는 %f", C);

	return 0;
}

#endif

#include <math.h>

#if 0
// 5번 문제
// 3x^2 + 7x + 11 을 계산하는 프로그램을 작성하라. x는 사용자로부터 입력받는다.

int main() {

	float x = 0;
	
	printf("x를 입력하세요:");
	scanf("%f", &x);

	float result1 = 0;
	result1 = 3 * (x * x) + 7 * x + 11;
	// pow 함수 사용 결과값 비교
	float result2 = 0;
	float x_2 = pow(x, 2);
	result2 = 3 * x_2 + 7 * x + 11;

	printf("결과값1은 %f입니다.\n", result1);
	printf("결과값2은 %f입니다.\n", result2);

	return 0;
}

#endif

/* 
	OJ 문제풀이 1308-1312
*/

#if 0
// OJ 1308
/*
	두 개의 숫자를 입력받아 첫 번째 숫자에서 두 번째 숫자를 뺀 값을 출력하라.
*/

int main() {

	int val1 = 0;
	int val2 = 0;

	scanf_s("%d %d", &val1, &val2);

	int result = 0;
	result = val1 - val2;

	printf("%d", result);

	return 0;
}

#endif

#if 0

// OJ 1309
/*
	세 개의 숫자를 입력받아 각각을 2로 나눈 나머지를 순서대로 출력하라.
*/

int main() {

	int val1 = 0;
	int val2 = 0;
	int val3 = 0;

	scanf("%d %d %d", &val1, &val2, &val3);

	printf("%d %d %d", val1 % 2, val2 % 2, val3 % 2);

	return 0;
}

#endif

#if 0

// OJ 1310
/*
	입력되는 2개의 정수 중 큰 수를 출력하시오.	
	두 숫자가 같은 경우는 없다.
*/


int main() {

	int val1 = 0;
	int val2 = 0;

	scanf("%d %d", &val1, &val2);

	if (val1 > val2) {
		printf("%d", val1);
	}
	else {
		printf("%d", val2);
	}

	return 0;
}

#endif

#if 0

// OJ 1311
/*
	입력 정수 1개에 대해서,

	양수거나 0이면 그대로 출력하고,

	음수면 절대값을 취해 양수로 변환하여 출력하시오.
*/

int main() {

	int val = 0;

	scanf("%d", &val);

	int val2 = val;

	if (val < 0) {
		val2 = -val2;
	}
	else {

	}

	printf("%d", val2);

	return 0;
}

#endif

#if 0
// OJ 1312
/*
	정수 입력 2개에 대해

	첫 번째 숫자를 두 번째 숫자로 나누었으면,

	나머지가 0이면 ok를 출력,

	아니면 nok를 출력.

	(주의!! 출력은 모두 소문자, 끝에 줄바꿈 표시하지 마세요)
*/

int main() {

	int val1 = 0;
	int val2 = 0;

	scanf("%d %d", &val1, &val2);

	if ( 0 == (val1 % val2) ) {
		printf("ok");
	}
	else {
		printf("nok");
	}

	return 0;
}

#endif
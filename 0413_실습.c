
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230413 실습

/* Ch.6 Programming 예제 */

// 02. 사용자로부터 3개의 정수를 읽어 들인 후에 if - else 문을 사용하여
//     가장 작은 값을 결정하는 프로그램을 작성하라.

#if 0
 
int main() {

	int x = 0;
	int y = 0;
	int z = 0;
	int min = 0;

	scanf("%d %d %d", &x, &y, &z);

	if (x > y) {
		min = y;
	}
	else {
		min = x;
	}

	if (min > z) {
		min = z;
	}
	else {
		// nothing
	}

	printf("%d", min);

	return 0;
}

#endif

// 10. (x, y) 좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하시오.

#if 0

int main() {

	int x = 0;
	int y = 0;

	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1사분면");
	}
	else if (x < 0 && y > 0) {
		printf("2사분면");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면");
	}
	else if (x > 0 && y < 0) {
		printf("4사분면");
	}
	else {
		printf("축 위의 점");
	}


	return 0;
}

#endif

// OJ 1313

/*
입력받은 3개의 정수 ( > 0) 중 같은 숫자가 있으면 그 숫자를 출력하고,

없으면  0을 출력하시오.
*/

#if 0

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b) {
		printf("%d", a);
	}
	else if (a == c) {
		printf("%d", a);
	}
	else if (b == c) {
		printf("%d", b);
	}
	else {
		printf("0");
	}

	return 0;
}

#endif

// OJ 1316
/*
입력된 정수 ( > 0)를 판별하여 다음과 같이 출력하시오.

홀수이면서 5와 7로 나누어떨어지면 0을 출력

홀수이면서 5로 나누어 떨어지지만, 7로는 나누어지지 않으면 1을 출력

홀수이면서 7로 나누어지지만, 5로 나누어지지 않으면 2를 출력

홀수이면서 5, 7 어느 것으로도 나누어지지 않으면 3을 출력

짝수이면서 5와 7로 나누어떨어지면 10을 출력

짝수이면서 5로 나누어 떨어지지만, 7로는 나누어지지 않으면 11을 출력

짝수이면서 7로 나누어지지만, 5로 나누어지지 않으면 12를 출력

짝수이면서 5, 7 어느 것으로도 나누어지지 않으면 13을 출력
*/

#if 0

int main() {

	// 홀수이면서 vs 짝수이면서

	int a = 0;
	scanf("%d", &a);

	if (a % 2 == 1) { // 홀수 이면서

		if (a % 5 == 0 && a % 7 == 0) {
			printf("%d", 0);
		}
		else if (a % 5 == 0 && a % 7 != 0) {
			printf("%d", 1);
		}
		else if (a % 5 != 0 && a % 7 == 0) {
			printf("%d", 2);
		}
		else if (a % 5 != 0 && a % 7 != 0) {
			printf("%d", 3);
		}

	}
	else {
		if (a % 5 == 0 && a % 7 == 0) {
			printf("%d", 10);
		}
		else if (a % 5 == 0 && a % 7 != 0) {
			printf("%d", 11);
		}
		else if (a % 5 != 0 && a % 7 == 0) {
			printf("%d", 12);
		}
		else if (a % 5 != 0 && a % 7 != 0) {
			printf("%d", 13);
		}
	}

	return 0;
}

#endif

// OJ 1638

/*
월을 정수로 입력받아 (1 ~ 12),

해당 월의 일수를 출력하시오. 단, 2월은 28일까지 있다.
*/

#if 0

int main() {

	int month = 0;

	scanf("%d", &month);

	switch (month) {
	case 2:
		printf("28");
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	default:
		break;
	}

	return 0;
}

#endif




// 1338: 2018 C언어 중간고사 4 (2점)

/*
세 개의 숫자를 입력받아 절대값 기준으로 가장 큰 수와 중간 수 간의 차이, 
중간 숫자와 제일 작은 숫자간의 차이를 출력하는 프로그램을 작성하시오. 
세 숫자는 모두 같을 수도 있다.
*/

#if 0

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b, &c);

	
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	if (c < 0) {
		c = -c;
	}


	if (a >= b && a >= c)
	{
		if (b >= c)
		{
			printf("%d %d", a - b, b - c);
		}
		else
		{
			printf("%d %d", a - c, c - b);
		}
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			printf("%d %d", b - a, a - c);
		}
		else
		{
			printf("%d %d", b - c, c - a);
		}
	}
	else if (c >= a && c >= b)
	{
		if (a >= b)
		{
			printf("%d %d", c - a, a - b);
		}
		else
		{
			printf("%d %d", c - b, b - a);
		}
	}

	return 0;
}

#endif

// 1404: [C언어 퀴즈] 반복문 For - 2

/*
양의 정수 n을 입력받아, n이 홀수면 1부터 n까지 1씩 증가시키면서 출력하고,

짝수면 n부터 1까지 1씩 감소시키면서 출력하시오.

단, 숫자 사이에는 공백 1개, 끝에는 줄바꿈 문자 없음.
*/

#if 0

int main() {

	int n = 0;

	scanf("%d", &n);

	if (n % 2 == 0) {

		// for ( _1_ ; _2_ ; _3_ ) {
		// _1_ -> 초기식 : 들고 다닐 변수
		// _2_ -> 조건식 : 조건
		// _3_ -> 증감식 : 취할 행동
		// { } 내가 반복해서 실행할 내용

		for (int i = n; i >= 1; i--) {
			printf("%d ", i);
		}
	}
	else {
		for (int i = 1; i <= n; i++) {
			printf("%d ", i);
		}
	}

	return 0;
}

#endif

/*
두 수의 공약수 구하기
*/

#if 0

int main() {

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a && i <= b; i++) {

		if (a % i == 0 && b % i == 0) {

			printf("%d ", i);

		}
	}
		
	printf("\n");

	return 0;
}

#endif



// 1343: 2018 C언어 중간고사 9 (3점)

/*
하나의 정수 n (5 <= n <= 1000)을 입력받고,
1부터 n과 가장 가까운 5의 배수까지 1씩 증가시키면서 출력하는 프로그램을 작성하시오.
예를 들어, n=6일 경우, 가장 가까운 5의 배수는 5이므로 1~5까지 출력한다.
n=9일 경우, 가장 가까운 5의 배수는 10이므로 1~10까지 출력한다.
입력
양의 정수 n ( 5 <= n <= 1000 )
출력
1부터 n과 가까운 5의 배수까지 1씩 증가시키면서 출력하되,
숫자 간에는 하나의 공백이 있으며, 맨 끝에는 줄바꿈문자 없음.
*/

#if 0

int main() {

	int n = 0;

	scanf("%d", &n);

	// 5 6 7 8 9 10 11 12 13 14 15
	// 몫과 나머지 관점
	//   5     10    10     15 

	if (n % 5 <= 2) { // 0 1 2
		n = (n / 5) * 5;
	}
	else { // 3 4
		n = ((n / 5) + 1) * 5;
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}


	return 0;
}

#endif

// 1344: 2018 C언어 중간고사 10 (3점)
/*
문제 설명
양의 정수 n (1 <= n <= 20억)과
양의 정수 k (1 <= k <= 9)를 입력받아
n에 들어있는 k의 개수를 출력하는 프로그램을 작성하시오.
입력
n k
n과 k는 공백으로 구분된다.
출력
n에 들어있는 k의 개수
*/

#if 1

int main() {

	int n = 0;
	int k = 0;
	int cnt = 0;

	scanf("%d %d", &n, &k);

	while (1) {

		if (n % 10 == k) {
			cnt++;
		}

		n = n / 10;

		if (n == 0) {
			break;
		}
	}

	printf("%d", cnt);
	
	return 0;
}

#endif



#if 0

int main() {


	return 0;
}

#endif

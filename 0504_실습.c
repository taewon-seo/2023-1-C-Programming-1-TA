
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230504 실습

// 중간고사 해설


// 1672: [C언어 중간고사 2023] 문제 1
/*
1보다 큰 양의 정수 1개를 인수로 받아, 그 인수보다 작거나 같은 소수의 개수를 출력하시오.
끝에 줄바꿈 문자없음.
*/

#if 0

int isPrime(int n) {

	if (n == 2) { // n이 2일 경우, 소수임
		return 1;
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) { // i가 n의 약수 -> 소수가 아님 , 1과 자기 자신은 항상 약수임
			return 0; // 소수가 아님을 리턴
		}
	}

	// 위의 for 반복문을 통과하고 나면, n은 소수를 의미함
	return 1;
}

// cntPrime : 전달 받은 정수 n보다 작거나 같은 소수의 개수를 반환하는 함수
int cntPrime(int n) {

	int cnt = 0;

	for (int i = 2; i <= n; i++) {
		
		if (isPrime(i)) {
			cnt++;
		}
	}

	return cnt;
}

int main() {

	int n = 0;
	int result = 0;

	scanf("%d", &n);

	result = cntPrime(n);

	printf("%d", result);
	
	return 0;
}

#endif



// 1674: [C언어 중간고사 2023] 문제 3
/*
Fibonacci 수열은 앞에 위치한 두 수의 합이 현재 값이 된다.
0 번째 : 0
1 번째 : 1
2 번째 : 1
3 번째 : 2
4 번째 : 3
	...
숫자 n (>=0)을 입력받아,  n번째 fibonacci 숫자를 출력하시오.
끝에 줄바꿈 문자를 출력하지 않는다.
*/

#if 0

int main() {

	int n = 0;
	
	int a = 0;
	int b = 1;
	int c = 1;

	// 0 1 1 2 3 5 8 13 21 ...
	// 0 1 2 3 4 5 6  7  8 ...
	
	scanf("%d", &n);

	for (int i = 0; i < n - 1; i++) {

		c = a + b;
		a = b;
		b = c; 

		// 반복문을 한번 수행하면, 2번째 피보나치 수
		// 반복문을 두번 수행하면, 3번째 피보나치 수
		// 입력한 수가 n이면, n-1번 수행하면, n번째 피보나치 수 반환
	}

	if (n == 0) {
		c--;
	}

	printf("%d", c);

	return 0;
}

#endif

// 1675: [C언어 중간고사 2023] 문제 4
/*
시작연도 s와 종료연도 e를 입력으로 받아, (s < e)

s < Y < e 조건을 만족하는 Y 연도 중에 윤년의 개수를 출력하시오.

끝에 줄바꿈 문자는 없음.
*/

#if 0

int main() {

	int s = 0;
	int e = 0;
	int cnt = 0;

	scanf("%d %d", &s, &e);

	for (int i = s + 1; i < e; i++) {
		if (i % 4 == 0) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}

#endif

// 1677: [C언어 중간고사 2023] 문제 6
/*
양의정수 1 ~ 200000000 사이의 값을 1개 입력받아,

숫자에 있는 3, 6, 9 숫자의 개수만큼 *를 출력하시오.

만약, 3 6, 9가 없다면 0을 출력한다.

끝에 줄바꿈 문자는 없다.
*/

#if 0

int main() {

	int n = 0;
	scanf("%d", &n);

	int cnt = 0;
	while (1) {

		if (n == 0) {
			break;
		}
		else if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) {
			cnt++;
		}
		n = n / 10;
	}

	for (int i = 0; i < cnt; i++) {
		printf("*");
	}

	if (cnt == 0) {
		printf("0");
	}

	return 0;
}

#endif

// 1678: [C언어 중간고사 2023] 문제 7
/*
2보다 큰 양의 짝수는 2개의 소수의 합으로 표시할 수 있다고 추측된다.

이를 골드바흐의 추측이라고 한다.

양의 짝수 n이 입력될 때, 골드바흐의 추측을 만족시키는 소수쌍의 개수를 출력하시오.

예를 들어, 4 = 2 + 2 이므로 1을 출력.

14 = 3 + 11 = 7 + 7 이므로 2를 출력하고, 끝에 줄바꿈 문자는 없다.
*/

#if 0

int isPrime(int n) {

	if (n == 2) {
		return 1;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {

	int n = 0;
	int cnt = 0;
	
	scanf("%d", &n);

	for (int i = 2; i <= n / 2; i++) {
		for (int j = 2; j <= n - i; j++) {

			if (i + j == n) {

				if (isPrime(i) && isPrime(j)) {
					cnt++;
				}

			}
		}
	}

	printf("%d", cnt);

	return 0;
}

#endif


// 1686: [C언어 실습] 반복문 합 계산하기

/*
사용자가 입력한 정수 3개의 합을 계산하여 출력한다.
다만 사용자가 음수를 입력하면 이것은 합계에서 제외된다.
*/

#if 1

int main() {

	int n = 0;
	int sum = 0;
	int cnt = 0;

	while (1) {

		scanf("%d", &n);

		if (n > 0) {
			sum += n;
			cnt++;
		}
		else {
			// nothing
		}

		if (cnt == 3) {
			break;
		}

	}

	printf("%d", sum);

	return 0;
}

#endif

// 1685: [C언어 실습] 가능한 조합 찾기
/*
서로 다른 1자리 수 양의 정수 3개를 입력 받아, 가능한 모든 조합을 오름차순으로 출력 하시오.

각 숫자의 중복 사용이 가능하다.

한 개의 조합을 출력한 후, 줄바꿈이 있다.
*/

#if 0

int main() {


	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 111; i < 1000; i++) {
		int temp = i;
		if (temp % 10 == a || temp % 10 == b || temp % 10 == c) {
			temp = temp / 10;
			if (temp % 10 == a || temp % 10 == b || temp % 10 == c) {
				temp = temp / 10;
				if (temp % 10 == a || temp % 10 == b || temp % 10 == c) {
					printf("%d\n", i);
				}
			}
		}
	}

	return 0;
}
#endif

#if 0

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b, &c);

	// a, b, c를 오른차순으로 정렬한 후 아래 코드를 수행

	// 111 -> 112 -> 113;
	// 121 -> 122 -> 123;

	int index1 = 0;
	int index2 = 0;
	int index3 = 0;

	while (1) {

		if (index1 == 0) {
			printf("%d", a);
		}
		else if (index1 == 1) {
			printf("%d", b);
		}
		else if (index1 == 2) {
			printf("%d", c);
		}

		if (index2 == 0) {
			printf("%d", a);
		}
		else if (index2 == 1) {
			printf("%d", b);
		}
		else if (index2 == 2) {
			printf("%d", c);

		}

		if (index3 == 0) {
			printf("%d", a);
		}
		else if (index3 == 1) {
			printf("%d", b);
		}
		else if (index3 == 2) {
			printf("%d", c);

		}

		printf("\n");

		index3++;

		if (index3 == 3) {
			index3 = 0;
			index2++;
		}

		if (index2 == 3) {
			index2 = 0;
			index1++;
		}

		if (index1 == 3) {
			break;
		}

	}

	return 0;
}

#endif

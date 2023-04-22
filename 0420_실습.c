
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230420 실습

// OJ 1655: [C언어 실습] 크기 비교
#if 0

/*
네 개의 정수를 입력받고, 이들 중 가장 큰 수와 작은 수 순서대로 출력하시오.

각 숫자 사이에는 1개의 공백이 있고, 줄 끝에는 줄바꿈 문자가 없어야 한다.

입력 정수들은 서로 같을 수도 있다.
*/

int main() {

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int max = 0;
	max = a;

	if (max <= b) {
		max = b;
	}
	if (max <= c) {
		max = c;
	}
	if (max <= d) {
		max = d;
	}

	int min = 0;
	min = a;

	if (min >= b) {
		min = b;
	}
	if (min >= c) {
		min = c;
	}
	if (min >= d) {
		min = d;
	}

	printf("%d %d", max, min);

	return 0;
}

#endif

// OJ 1656: [C언어 실습] 크기 비교 2

#if 0

/*
양의 정수들이 입력될 때, 이들 중 가장 큰 수와 작은 수 순서대로 출력하시오.

입력의 종료는 -999가 들어올 때 이다.

각 숫자 사이에는 1개의 공백이 있고, 줄 끝에는 줄바꿈 문자가 없어야 한다.

입력 정수들은 서로 같을 수도 있다.
*/

int main() {

	int max = 0;
	int min = 99999; // or INT_MAX

	int n = 0;

	while (1) {
		scanf("%d", &n);

		if (n == -999) {
			break;
		}
		if (n >= max) {
			max = n;
		}
		if (n <= min) {
			min = n;
		}
	}
	printf("%d %d", max, min);

	return 0;
}

#endif

// OJ 1657: [C언어 실습] 소수 찾기

#if 0

/*
양의 정수들이 입력될 때, 각 자리수들의 합이 소수에 해당하는 정수들의 개수를 출력하시오.

입력의 종료는 -999가 들어올 때이다.

줄 끝에는 줄바꿈 문자가 없어야 한다.

예를 들어, 11 14 65 -999 가 입력되면
11의 각 자리수 합은 2
14는 5,
65는 11,
모두 소수이므로, 3을 출력한다.
*/

int main() {

	int n, p, sum = 0, c = 0, a = 0;
	while (1) {
		scanf("%d", &n);
		if (n == -999)
			break;
		while (1) {
			p = n % 10;
			n /= 10;
			sum += p;
			if (n == 0)
				break;
		}
		if (sum == 2)
			c++;
		else {
			for (int i = 2; i < sum; i++) {
				if (sum % i == 0)
					a++;
			}
			if (a == 0)
				c++;
		}
		sum = 0;
		a = 0;
	}
	printf("%d", c);

	return 0;
}

#endif

// OJ 1658: [C언어 실습] 배수 찾기

#if 0

/*
양의 정수 a와 b를 입력받아, 1부터 20까지의 정수 중에서 a의 배수이지만, b의 배수가 아닌 모든 수들의 개수를 출력하시오.
*/

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	int cnt = 0;

	for (int i = 1; i <= 20; i++) {
		if (i % a == 0 && i % b != 0) {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}

#endif

// OJ 1659: [C언어 실습] 자릿수의 위치와 값 구하기 2

#if 0

/*
양의 정수 1개를 입력받아

자릿수의 값 중 가장 큰 값과 가장 작은 값을 찾아 그 값과 자릿수의 위치를 출력하시오.

단, 각 자릿수의 값이 같은 경우가 존재할 수 있으며, 가장 큰 값과 가장 작은 값이 같은 경우는 없다.

각 자릿수의 값이 같은 경우, 더 큰 자릿수의 위치를 갖는 것을 우선하여 출력한다.

값 사이는 공백으로 구분되며, 마지막 값 뒤엔 공백이 없다. 줄 끝에는 줄 바꿈 문자가 없어야 한다.

예를 들어,

9876이 입력되면 9 4 6 1 이 출력되어야 한다.
456이 입력되면 6 1 4 3 이 출력되어야 한다.
7745가 입력되면 7 4 4 2 이 출력되어야 한다.
332 이 입력되면 3 3 2 1 이 출력되어야 한다.

입력 정수는 10부터 9999까지의 값을 갖는다.
*/

int main() {

	int n = 0;
	int i = 0;
	int temp_num = 0;
	int max_value = 0;
	int min_value = 10;
	int max_index = 0;
	int min_index = 0;

	scanf("%d", &n);

	while (1) { // 가장 큰 값, 작은 값, 자리수 찾기

		temp_num = n % 10;
		i++;

		if (temp_num >= max_value) {
			max_value = temp_num;
			max_index = i;
		}
		if (temp_num < min_value) {
			min_value = temp_num;
			min_index = i;
		}

		n = n / 10;

		if (n == 0) {
			break;
		}
	}

	printf("%d %d %d %d", max_value, max_index, min_value, min_index);

	return 0;
}

#endif


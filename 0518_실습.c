
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2023-05-18 실습

#if 0

// 1706: [2023 C언어 실습] 배열 - 7

/*
양의 정수 10개가 입력된다. 
이 때 10번째 숫자와 같은 수가 앞의 9개 내에 1개라도 있으면 그 개수를 출력하고, 아니면 0을 출력하시오.
*/


int main() {

	int arry[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arry[i]);
	}

	int key = arry[9];
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		
		if (arry[i] == key) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}

#endif

#if 0

// 1707: [2023 C언어 실습] 배열 - 8

/*
10개의 양의 정수가 입력되면, 이중에서 가장 작은 수 min과 가장 큰 수 max를 찾고, 
max - min (두 숫자의 차이)와 같은 값을 갖는 10개 정수 중 있으면 1, 아니면 0을 출력하시오.
*/


int main() {

	int arry[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arry[i]);
	}

	int min = arry[0];
	int max = arry[0];

	for (int i = 1; i < 10; i++) {
		
		if (arry[i] < min) {
			min = arry[i];
		}

		if (arry[i] > max) {
			max = arry[i];
		}
	}

	int find_key = max - min;
	int find_flag = 0;

	for (int i = 0; i < 10; i++) {
		if (arry[i] == find_key) {
			find_flag = 1;
		}
	}

	if (find_flag == 1) {
		printf("%d", 1);
	}
	else {
		printf("%d", 0);
	}

	return 0;
}

#endif

#if 0

// 1708: [2023 C언어 실습] 배열 - 9

/*
10개의 양의 정수들을 입력받아, unique한 정수들만 "입력된 순서"대로 출력하는 프로그램을 작성하시오.
서로 같은 값을 갖는 다른 정수가 없을 때, 그 정수는 unique하다.
이 문제에서 unique한 정수는 반드시 1개 이상 있다.
*/


int main() {

	int arry[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arry[i]);
	}

	int duplication_flag = 0;

	for (int i = 0; i < 10; i++) {
		
		duplication_flag = 0;

		for (int j = 0; j < 10; j++) {

			if (arry[i] == arry[j]) {
				duplication_flag++;
			}
		}

		if (duplication_flag == 1) {
			printf("%d ", arry[i]);
		}
	}

	return 0;
}

#endif

#if 0

// 1709: [2023 C언어 실습] 배열 - 10

/*
양의 정수 1개를 입력받아 2진수로 출력하시오. 이진수는 최대 64자리까지이다. 
출력할 때 0이 아닌 1이 나오는 자리부터 출력하며, 맨끝에 줄바꿈 표시는 없다.
*/

int main(void)
{

	int n[64] = { 0 };
	int k = 0;

	scanf("%d", &k);

	int j = 0;
	for (int i = 0; ; i++)
	{
		n[i] = k % 2;
		k = k / 2;
		if (k == 0)
		{
			j = i;
			break;
		}
	}
	for (int i = j; i >= 0; i--)
	{
		printf("%d", n[i]); // 0 0 0 [ 1 ]  0 0 0 0 -> 1 0 0 0
	}

	return 0;
}

#endif

#if 1

// 1710: [2023 C언어 실습] 배열 - 11

/*
n^2 개 (n은 자연수, n <= 10)의 양의 정수들을 입력받아 n x n 배열에 저장한다. 
저장할 때는 행 위주로 채운다. 즉, 1, 2, 3, 4가 입력되면, 1과 2는 첫 번째 행, 3, 4는 두 번째 행이다. 
배열에서 대각선 원소(행번호와 열번호가 동일)들의 합을 출력하시오. -999가 입력되면 입력이 종료되며, 끝에 줄바꿈 문자는 없다.
*/

int main() {

	int num[100];
	int i;
	int cnt = 0; // 들어온 숫자의 개수
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		cnt++;

		if (num[i] == -999)
		{
			cnt--;
			break;
		}
	}

	int n; // n x n 행렬에서 n의 값을 구함
	for (n = 1; n <= 10; n++) {
		if (n * n == cnt) {
			break;
		}
	}

	// 새로운 10 x 10 배열에 n x n 배열을 저장 
	int N[10][10];
	int q = 0;

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			N[a][b] = num[q];
			q++;
		}
	}

	// 대각선 원소들의 합을 계산
	int sum = 0;
	for (int k = 0; k < n; k++)
	{
		sum += N[k][k];
	}
	printf("%d", sum);

	return 0;
}

#endif



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230504 �ǽ�

// �߰���� �ؼ�


// 1672: [C��� �߰���� 2023] ���� 1
/*
1���� ū ���� ���� 1���� �μ��� �޾�, �� �μ����� �۰ų� ���� �Ҽ��� ������ ����Ͻÿ�.
���� �ٹٲ� ���ھ���.
*/

#if 0

int isPrime(int n) {

	if (n == 2) { // n�� 2�� ���, �Ҽ���
		return 1;
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) { // i�� n�� ��� -> �Ҽ��� �ƴ� , 1�� �ڱ� �ڽ��� �׻� �����
			return 0; // �Ҽ��� �ƴ��� ����
		}
	}

	// ���� for �ݺ����� ����ϰ� ����, n�� �Ҽ��� �ǹ���
	return 1;
}

// cntPrime : ���� ���� ���� n���� �۰ų� ���� �Ҽ��� ������ ��ȯ�ϴ� �Լ�
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



// 1674: [C��� �߰���� 2023] ���� 3
/*
Fibonacci ������ �տ� ��ġ�� �� ���� ���� ���� ���� �ȴ�.
0 ��° : 0
1 ��° : 1
2 ��° : 1
3 ��° : 2
4 ��° : 3
	...
���� n (>=0)�� �Է¹޾�,  n��° fibonacci ���ڸ� ����Ͻÿ�.
���� �ٹٲ� ���ڸ� ������� �ʴ´�.
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

		// �ݺ����� �ѹ� �����ϸ�, 2��° �Ǻ���ġ ��
		// �ݺ����� �ι� �����ϸ�, 3��° �Ǻ���ġ ��
		// �Է��� ���� n�̸�, n-1�� �����ϸ�, n��° �Ǻ���ġ �� ��ȯ
	}

	if (n == 0) {
		c--;
	}

	printf("%d", c);

	return 0;
}

#endif

// 1675: [C��� �߰���� 2023] ���� 4
/*
���ۿ��� s�� ���Ῥ�� e�� �Է����� �޾�, (s < e)

s < Y < e ������ �����ϴ� Y ���� �߿� ������ ������ ����Ͻÿ�.

���� �ٹٲ� ���ڴ� ����.
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

// 1677: [C��� �߰���� 2023] ���� 6
/*
�������� 1 ~ 200000000 ������ ���� 1�� �Է¹޾�,

���ڿ� �ִ� 3, 6, 9 ������ ������ŭ *�� ����Ͻÿ�.

����, 3 6, 9�� ���ٸ� 0�� ����Ѵ�.

���� �ٹٲ� ���ڴ� ����.
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

// 1678: [C��� �߰���� 2023] ���� 7
/*
2���� ū ���� ¦���� 2���� �Ҽ��� ������ ǥ���� �� �ִٰ� �����ȴ�.

�̸� �������� �����̶�� �Ѵ�.

���� ¦�� n�� �Էµ� ��, �������� ������ ������Ű�� �Ҽ����� ������ ����Ͻÿ�.

���� ���, 4 = 2 + 2 �̹Ƿ� 1�� ���.

14 = 3 + 11 = 7 + 7 �̹Ƿ� 2�� ����ϰ�, ���� �ٹٲ� ���ڴ� ����.
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


// 1686: [C��� �ǽ�] �ݺ��� �� ����ϱ�

/*
����ڰ� �Է��� ���� 3���� ���� ����Ͽ� ����Ѵ�.
�ٸ� ����ڰ� ������ �Է��ϸ� �̰��� �հ迡�� ���ܵȴ�.
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

// 1685: [C��� �ǽ�] ������ ���� ã��
/*
���� �ٸ� 1�ڸ� �� ���� ���� 3���� �Է� �޾�, ������ ��� ������ ������������ ��� �Ͻÿ�.

�� ������ �ߺ� ����� �����ϴ�.

�� ���� ������ ����� ��, �ٹٲ��� �ִ�.
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

	// a, b, c�� ������������ ������ �� �Ʒ� �ڵ带 ����

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

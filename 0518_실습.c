
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2023-05-18 �ǽ�

#if 0

// 1706: [2023 C��� �ǽ�] �迭 - 7

/*
���� ���� 10���� �Էµȴ�. 
�� �� 10��° ���ڿ� ���� ���� ���� 9�� ���� 1���� ������ �� ������ ����ϰ�, �ƴϸ� 0�� ����Ͻÿ�.
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

// 1707: [2023 C��� �ǽ�] �迭 - 8

/*
10���� ���� ������ �ԷµǸ�, ���߿��� ���� ���� �� min�� ���� ū �� max�� ã��, 
max - min (�� ������ ����)�� ���� ���� ���� 10�� ���� �� ������ 1, �ƴϸ� 0�� ����Ͻÿ�.
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

// 1708: [2023 C��� �ǽ�] �迭 - 9

/*
10���� ���� �������� �Է¹޾�, unique�� �����鸸 "�Էµ� ����"��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ���� ���� ���� �ٸ� ������ ���� ��, �� ������ unique�ϴ�.
�� �������� unique�� ������ �ݵ�� 1�� �̻� �ִ�.
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

// 1709: [2023 C��� �ǽ�] �迭 - 10

/*
���� ���� 1���� �Է¹޾� 2������ ����Ͻÿ�. �������� �ִ� 64�ڸ������̴�. 
����� �� 0�� �ƴ� 1�� ������ �ڸ����� ����ϸ�, �ǳ��� �ٹٲ� ǥ�ô� ����.
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

// 1710: [2023 C��� �ǽ�] �迭 - 11

/*
n^2 �� (n�� �ڿ���, n <= 10)�� ���� �������� �Է¹޾� n x n �迭�� �����Ѵ�. 
������ ���� �� ���ַ� ä���. ��, 1, 2, 3, 4�� �ԷµǸ�, 1�� 2�� ù ��° ��, 3, 4�� �� ��° ���̴�. 
�迭���� �밢�� ����(���ȣ�� ����ȣ�� ����)���� ���� ����Ͻÿ�. -999�� �ԷµǸ� �Է��� ����Ǹ�, ���� �ٹٲ� ���ڴ� ����.
*/

int main() {

	int num[100];
	int i;
	int cnt = 0; // ���� ������ ����
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

	int n; // n x n ��Ŀ��� n�� ���� ����
	for (n = 1; n <= 10; n++) {
		if (n * n == cnt) {
			break;
		}
	}

	// ���ο� 10 x 10 �迭�� n x n �迭�� ���� 
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

	// �밢�� ���ҵ��� ���� ���
	int sum = 0;
	for (int k = 0; k < n; k++)
	{
		sum += N[k][k];
	}
	printf("%d", sum);

	return 0;
}

#endif


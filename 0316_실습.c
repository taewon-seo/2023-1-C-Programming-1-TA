
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

// ���� ���� ����� ����
// printf, scanf, �ڷ���

int main() {

	// ������ �Ҵ�ޱ�
	float val1 = 0;
	float val2 = 0;

	// ����� �Է¹ޱ�
	printf("ù ��° ���� �Է��ϼ���:");
	scanf("%f", &val1);
	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%f", &val2);

	// ����ϱ�
	float result = 0;
	result = val1 * val2;

	// ��� ����ϱ�
	printf("%f", result);

	return 0;
}

#endif

/* 
	���� Programming ���� 
*/

#if 0
// 1�� ����
// ����ڷκ��� 3���� ������ �Է¹��� ��, �հ�� ����� ����ϴ� ����ϴ� ���α׷��� �ۼ��϶�.

int main() {

	// ���� ���� �� �Ҵ�
	float val1 = 0;
	float val2 = 0;
	float val3 = 0;

	// ������� �Է� �ޱ�
	printf("ù ��° ���� �Է��ϼ���:");
	scanf("%f", &val1);
	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%f", &val2);
	printf("�� ��° ���� �Է��ϼ���:");
	scanf("%f", &val3);

	// ����ϱ�
	float sum = 0;
	sum = val1 + val2 + val3;

	float avg = 0;
	avg = sum / 3;

	// ����ϱ�
	printf("�հ�� %f, ����� %f", sum, avg);


	return 0;
}

#endif


#if 0
// 2�� ����
// ������ ���ͷ� ȯ���ϴ� ���α׷�. ���� ������ �Է��� �ް� 1.609�� ���� ���ͷ� ��ȯ�Ͽ� ���

int main() {

	float mile = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &mile);

	float meter = 0;

	// ���� -> ���� ��ȯ��
	meter = mile * 1609;

	printf("%f������ %f�����Դϴ�.", mile, meter);

	return 0;
}

#endif


#if 0
// 3�� ����
//�ﰢ���� ���̿� �غ��� �޾Ƽ� ���̸� ����ϴ� ���α׷�. ��� �����ʹ� �Ǽ��� �Է°� ���

int main() {

	// ���� ���� �� �ʱ�ȭ

	float base = 0;
	float height = 0;
	float area = 0;

	printf("�ﰢ���� �غ�: ");
	scanf("%f", &base);

	printf("�ﰢ���� ����: ");
	scanf("%f", &height);

	// �ﰢ�� ���� ����

	area = 0.5 * base * height;
	printf("�ﰢ���� ����: %f", area);

	return 0;
}

#endif


#if 0
// 4�� ����
// ����ڷκ��� ȭ���µ��� �Է¹޾Ƽ�, �����µ��� ��ȯ�Ͽ� ����϶�.

int main() {

	float F = 0;

	printf("ȭ�� �µ��� �Է��ϼ���:");
	scanf("%f", &F);

	float C = 0;

	// ��ȯ��
	C = (5.0 / 9.0) * (F - 32);
	printf("�����µ��� %f", C);

	return 0;
}

#endif

#include <math.h>

#if 0
// 5�� ����
// 3x^2 + 7x + 11 �� ����ϴ� ���α׷��� �ۼ��϶�. x�� ����ڷκ��� �Է¹޴´�.

int main() {

	float x = 0;
	
	printf("x�� �Է��ϼ���:");
	scanf("%f", &x);

	float result1 = 0;
	result1 = 3 * (x * x) + 7 * x + 11;
	// pow �Լ� ��� ����� ��
	float result2 = 0;
	float x_2 = pow(x, 2);
	result2 = 3 * x_2 + 7 * x + 11;

	printf("�����1�� %f�Դϴ�.\n", result1);
	printf("�����2�� %f�Դϴ�.\n", result2);

	return 0;
}

#endif

/* 
	OJ ����Ǯ�� 1308-1312
*/

#if 0
// OJ 1308
/*
	�� ���� ���ڸ� �Է¹޾� ù ��° ���ڿ��� �� ��° ���ڸ� �� ���� ����϶�.
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
	�� ���� ���ڸ� �Է¹޾� ������ 2�� ���� �������� ������� ����϶�.
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
	�ԷµǴ� 2���� ���� �� ū ���� ����Ͻÿ�.	
	�� ���ڰ� ���� ���� ����.
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
	�Է� ���� 1���� ���ؼ�,

	����ų� 0�̸� �״�� ����ϰ�,

	������ ���밪�� ���� ����� ��ȯ�Ͽ� ����Ͻÿ�.
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
	���� �Է� 2���� ����

	ù ��° ���ڸ� �� ��° ���ڷ� ����������,

	�������� 0�̸� ok�� ���,

	�ƴϸ� nok�� ���.

	(����!! ����� ��� �ҹ���, ���� �ٹٲ� ǥ������ ������)
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
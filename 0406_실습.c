
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230406 �ǽ�

/* ���� Chap.5 Programming ���� */

// 02. 2���� double ���� �Ǽ��� �о ��, ��, ��, ���� ���ϴ� ���α׷��� �ۼ��϶�.
//     ����� �Ҽ� 2��° �ڸ����� ����϶�.
#if 0

int main() {

	double num1 = 0;
	double num2 = 0;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &num1, &num2);

	double sum = num1 + num2;
	double sub = num1 - num2;
	double mul = num1 * num2;
	double div = num1 / num2;

	printf("%.2f %.2f %.2f %.2f", sum, sub, mul, div);

	return 0;
}

#endif

// 03. 3���� �������� �Է¹޾Ƽ�, 3���� ������ �߿��� �ִ밪�� ����ϴ� ���α׷��� �ۼ��϶�.

#if 0

int main() {

	int a, b, c;
	int max = 0;

	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b; // a�� b�� �� ū ���� max�� ����

	max = (c > max) ? c : max; // max �� c�� �� ū ���� max�� ����
	
	printf("�ִ밪�� %d�Դϴ�.", max);

	return 0;
}

#endif

// 05. 100���� ���� ������ �Է¹޾Ƽ� �̰��� ���� �ڸ�, ���� �ڸ��� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
//     ����ڰ� ���� 23�� �Է��ϸ� 2, 3�� ���ʷ� ����ϸ� �ȴ�.

#if 0

int main() {

	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	int a = 0;
	int b = 0;

	a = num / 10;
	b = num % 10;

	printf("���� �ڸ�: %d\n", a);
	printf("���� �ڸ�: %d\n", b);

	return 0;
}

#endif

// OJ 1639
/*
��Ʈ �̵� ������ �̿��Ͽ� ���� 4���� �޾Ƽ� �ϳ��� unsigned int���� ���� �ȿ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù ��° ���ڴ� ��Ʈ 0���� ��Ʈ 7���� ����ǰ�, �� ��° ���ڴ� ��Ʈ 8���� ��Ʈ,

15���� �� ��° ���ڴ� ��Ʈ 16���� ��Ʈ 23����, �� ��° ���ڴ� ��Ʈ 24���� ��Ʈ 31���� ���� �ȴ�.

����� �����Ǵ� �������� 16������ ����ϵ��� �Ѵ�.
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
// �ٸ� Ǯ��

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
���� ���� 1���� �Է¹޾� �� �ڸ����� ���� ����Ͻÿ�.

�� ������ �ٹٲ� ���ڰ� ����� �Ѵ�.

���� ���, 9876�� �ԷµǸ� 9 + 8 + 7 + 6 = 30 �̹Ƿ� 30�� ����ؾ� �Ѵ�.

�Է� ������ 1000���� 9999������ ���� ���´�.
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
���� ���� 1���� �Է¹޾� �� �ڸ����� ��ġ�� �ڸ����� ���� ����Ͻÿ�.

�� ���̴� �������� ���еǸ�, ������ �� �ڿ� ������ ����. �� ������ �� �ٲ� ���ڰ� ����� �Ѵ�.

���� ���,
9876�� �ԷµǸ� 4 9 3 8 2 7 1 6�� ��µǾ�� �Ѵ�.
456�� �ԷµǸ� 3 4 2 5 1 6�� ��µǾ�� �Ѵ�.

�Է� ������ 10���� 9999������ ���� ���´�.
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
	4�ڸ� 1234
	3�ڸ� 123
	2�ڸ� 12
	*/

	if (num / 100 >= 1) { // 3�ڸ� �� �̻�

		if (num / 1000 >= 1) { // 4�ڸ� �� 

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




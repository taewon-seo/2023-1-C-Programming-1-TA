
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230322 �ǽ� ����

/* ���� CH.4 ������ �ڷ��� */

// 4.1 ������ ���

// ������ �����ΰ�?
// sum = x + y;
// sum, x, y�� ����
// ������ �̸��� �ο��� ��, ���� �̸��� ����Ͽ��� �޸� ������ ���


/* ���� ������ ����ϴ� ���α׷� */
#if 0

int main() {

	// ����
	double radius;  // ���� ������
	double area;    // ���� ����

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	// 3.141592 �� ��� -> ��ǻ�Ͱ� ����� �ϱ� ���ؼ��� ��� �����Ͱ� �޸𸮿� �����ؾ� ��!
	// ���� ����� �޸𸮿� �����. �ٸ� ������ �޸� �̸��� ����, ������ �� ����.

	// ���� ������ ����� �̿��Ͽ� ���
	area = 3.141592 * radius * radius;
	printf("���� ����: %f \n", area);



	return 0;
}

#endif

// 4.2 �ڷ���

// �ڷ������� ������, �ε� �Ҽ�����, �������� �ִ�.

// ���������� ���� Ÿ���� �����͸� ������ �� ����: short, int, long, longlong ��
// �ε� �Ҽ������� �Ǽ� Ÿ���� �����͸� ������ �� ����: float, double, long double ��
// �������� �ϳ��� ���ڸ� ������ �� ����: char -> ���������� �з��ϱ⵵ ��, ���ڰ� ���� ������ ǥ����

// �ڷ����� ũ�⸦ ����ϴ� ���α׷�

#if 0

int main() {

	int x;
	printf("���� x��          ũ��: %d\n", sizeof(x)); // ������ ũ�⸦ ��ȯ

	printf("char              ũ��: %d\n", (int)sizeof(char)); // �ڷ����� ũ�⸦ ��ȯ
	printf("int               ũ��: %d\n", (int)sizeof(int));
	printf("short             ũ��: %d\n", (int)sizeof(short));
	printf("long              ũ��: %d\n", (int)sizeof(long));
	printf("long long         ũ��: %d\n", (int)sizeof(long long));
	printf("float             ũ��: %d\n", (int)sizeof(float));
	printf("double            ũ��: %d\n", (int)sizeof(double));


	return 0;
}
#endif

// 4.3 ������

/*
	short     -> 2byte (16bit)
	int       -> 4byte (32bit)
	long      -> 4byte (32bit)
	long long -> 8byte (64bit)
*/

#if 0

#include <limits.h>

#define  PI 3.141592

int main() {

	// �����÷ο�
	// ������ ������ ��Ÿ�� �� �ִ� ������ ������ ���ѵǾ� �ֱ� ������ �߻���.
	// ������ ������ �̿��Ͽ� ������ ���� ��� ������ �ϴ� ���, ��� ������ ����� �������� ��Ÿ�� �� �ִ� ������ �Ѿ �� ����.


	short s = SHRT_MAX; // �ִ밪���� �ʱ�ȭ, 32767
	unsigned short us = USHRT_MAX; // �ִ밪���� �ʱ�ȭ, 65535
	int i = INT_MAX; // �ִ밪���� �ʱ�ȭ, 2147483647 (�� 20��)

	printf("short max s: %d\n", s);
	s = s + 1;
	printf("short max s + 1: %d\n", s);
	printf("------------------------\n");

	printf("Ushort max us: %d\n", us);
	us = us + 1;
	printf("Ushort max us + 1: %d\n", us);
	printf("------------------------\n");

	printf("int max i: %d\n", i);
	i = i + 1;
	printf("int max i + 1: %d\n", i + 1);
	printf("------------------------\n");

	return 0;
}

#endif

// �ڷ����� ���

#if 0

int main() {

	float f = 123.4567f;
	printf("%%f : %f \n", f);
	printf("%%e : %e \n", f);

	return 0;
}

#endif

/* CH.4 Programming */

// 01. �ϳ��� �Ǽ��� �Է¹޾� �Ҽ��� ǥ������ ����ǥ�������� ���ÿ� ����ϴ� ���α׷�
#if 0
int main() {
	float a;
	scanf("%f", &a); // �Ǽ� �Է� ����
	printf("�Ǽ� �������δ� : %f\n", a);
	printf("�Ǽ� �������δ� : %e\n", a);

	return 0;
}
#endif


// 02. ������ 16������ �Է¹޾Ƽ� 8����, 10����, 16���� ���·� ����ϴ� ���α׷�
#if 0
int main() {
	int a;
	scanf("%x", &a); // 16���� ���� �Է¹���

	printf("8�����δ� : %o\n", a);
	printf("10�����δ� : %d\n", a);
	printf("16�����δ� : %#x\n", a);

	return 0;
}
#endif


// 03. int���� ���� x�� y�� ���� ���� ��ȯ�ϴ� ���α׷�
// ������ ������ �ʿ��ϸ� �����ؼ� ���
// ���� x�� y�� 10,20�� ������ �ʱ�ȭ �϶�.
#if 0
int main() {
	int x = 10, y = 20;
	int temp; // �ӽ� ����

	printf("x=%d y=%d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("x=%d y=%d\n", x, y);
	return 0;
}
#endif


// 04. ������ ���Ǹ� ���ϴ� ���α׷�
// double���� �Ǽ��� ����, �ʺ�, ���̸� �Է¹޾� ���Ǹ� ���
#if 0
int main() {
	double d, w, h;
	scanf("%lf %lf %lf", &d, &w, &h);

	printf("������ ���Ǵ� : %lf\n", d * w * h);

	return 0;
}
#endif


// 08. �ƽ�Ű �ڵ尪(����) �Է��ϸ� �ش� '����'�� ����ϴ� ���α׷�
#if 0

int main() {

	int ascii_num;

	scanf("%d", &ascii_num);
	printf("%c", (char*)ascii_num);

}

#endif

// OJ 1020
// �Ǽ� �Ѱ� �Է¹޾� ��° �ڸ����� ����ϱ�

/*
	�Ǽ�(float)�ϳ��� �Է¹޾� ������ ��,

	����Ǿ��ִ� ���� �Ҽ��� 3° �ڸ����� �ݿø��� 2° �ڸ����� ����Ͻÿ�.

	> �Է�
	�Ǽ� �ϳ��� �Էµȴ�.

	> ��� 
	����� �Ҽ��� 3° �ڸ����� �ݿø��� 2° �ڸ����� ����Ѵ�.
	(%.2f�� �̿��ϸ� �ȴ�.)
*/

#if 0

int main() {

	float input = 0;

	scanf("%f", &input);

	printf("%.2f", input);

	return 0;
}

#endif

// OJ 1021
// ���� �� �� �Է¹޾� �� �� ����ϱ�

#if 0
/*
	int�� ���� �ϳ��� �Է¹޾� 3�� ����غ���.

	> �Է�
	���� �ϳ��� �Էµȴ�.

	> ���
	�Է¹��� ������ �������� ������ �� �� ����Ѵ�.
*/

int main() {

	int a = 0;

	scanf("%d", &a);

	printf("%d %d %d", a, a, a);

	return 0;
}

#endif

// OJ 1022
// �ð� �Է¹޾� �״�� ����ϱ�

/*
	�ð��� � ���Ŀ� ���߾� �Էµ� ��,
	�״�� ����ϴ� ������ �غ���

	> �Է�
	��(hour)�� ��(minute)�� ":"(�ݷ�)�� ���еǾ� �Էµȴ�.

	> ���
	�Է¹��� �ð��� "��:��"���� ����Ѵ�.
*/

#if 0

int main() {

	int hour = 0;
	int minute = 0;

	scanf("%d:%d", &hour, &minute);

	printf("%d:%d", hour, minute);

	return 0;
}

#endif


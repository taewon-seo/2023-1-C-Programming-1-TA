
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 20230330 �ǽ�

/* Chap.4 ���� Programming �������� */

// 05. ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//     1���� 3.3m^2, �������� �ڷ��� ����, ��ȣ ����� �̿��϶�.

#if 0

#define TRANS_TO_PYEONG_1 3.3058

int main() {

	// ��ȣ ����� ���ͷ� ����� ����
	// ���ͷ� ����� �Ϲ����� ���ڳ� ����, ���ڿ��� ���� ex) ���� 3, �Ǽ� 2.5, ���ڿ� "ABC"
	// ��ȣ ����� ����� �ٸ� ���ڷ� ġȯ�� �ϴ� ���� ����


	// ��ȣ ��� ����ϱ�
	const double TRANS_TO_PYEONG = 3.3058;

	double num = 0;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &num);           // %lf: double �� �Է¹ޱ�

	printf("%lf �������Դϴ�.\n", num * TRANS_TO_PYEONG);
	printf("%lf �������Դϴ�.\n", num * TRANS_TO_PYEONG_1);

	return 0;
}
#endif

// 08. ����ڰ� �ƽ�Ű �ڵ尪�� �Է��ϸ� �� �ƽ�Ű �ڵ尪�� �ش��ϴ� ���ڸ� ����ϴ� ���α׷�

#if 0

int main() {

	int input = 0;

	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	printf("%%c: %c �Դϴ�.\n", input);
	printf("%%d: %d �Դϴ�.\n", input);

	return 0;
}

#endif

// 10. ������ ���� ȭ�鿡 ����ϴ� ���α׷� �ۼ�
//     "ASCII code", 'A', 'B', 'C'
//     \t \a \n

#if 0

int main() {

	printf(" \"ASCII code\", 'A', 'B', 'C' \n");
	printf(" \\t \\a \\n ");

	return 0;
}

#endif

// 12. ������ ���� �ǽ�

#if 0

int main() {

	int i = 255;
	
	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);
	printf("%%x: %x \n", i); // 0xff
	
	printf("--------------\n");

	i = -1;

	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);
	printf("%%x: %x \n", i); // 0xffffffff -> 4 bytes ���� ���

	// 255 ---> 0000 0000 ... 1111 1111
	// -1  ---> 1111 1111 ... 1111 1111

	// 1111 1111 ... 1111 
	// 1000 0000 ... 0000 ==> toggle
	// 1000 0000 ... 0001 ==> 2's complement
	// -1�̳�!

	printf("--------------\n");

	i = -2;

	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);
	printf("%%x: %x \n", i); // 0xfffffffe

	printf("--------------\n");

	return 0;
}

#endif

/* Chap. 5 ���İ� ������ */

// 5.2 ���������
// +, -, *, /, %

// �ʴ����� �ð��� �޾Ƽ� �� �� �� �� ���� ����ϴ� ���α׷�
// ������ ������ Ȱ��

#if 0

#define SEC_PER_MINUTE 60 // 1���� 60��

int main() {

	int input, minute, second;


	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d �ʴ� %d�� %d ���Դϴ�. \n", input, minute, second);
	// 1000 -> 16��(960��) + 40��

	return 0;
}

#endif

// ���� ������

// ++��ȣ�� --��ȣ�� ����Ͽ� ������ ���� 1��ŭ ������Ű�ų� ���ҽ�Ŵ

// ���� �����ڴ� ���� �����ڷμ� �ϳ��� �ǿ����ڸ��� ������.

// ++x ---> x = x + 1 �� ���� �ǹ�
// --x ---> x = x - 1 �� ���� �ǹ�

// ++x, x++, --x, x--

// ���� x�� ���� ������ų �����̶�� �����ϰ� ������
// �׷���, ���� �����ڸ� ������ �Ŀ� �� ������ ���� ����� �����̶�� ���� �ʿ�

// ++x�� x�� ���� ���� ������Ű�� ������ x�� ���� ���Ŀ� ���
// x++�� x�� ���� ���� ���Ŀ� ����� �Ŀ� x�� ���� ������Ű�� �ȴ�

#if 0

int main() {

	int x = 10;
	int y = 10;

	printf("x=%d\n", x);
	printf("++x�� ��=%d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++�� ��=%d\n", y++);
	printf("x=%d\n\n", y);

	int x1 = 10;
	int y1 = 20;
	y1 = (1 + ++x1) + 10;

	printf("-----------\n");
	printf("x1: %d\n", x1);
	printf("y1: %d\n\n", y1);

	int x2 = 10;
	int y2 = 20;
	y2 = (1 + x2++) + 10;
	
	printf("x2: %d\n", x2);
	printf("y2: %d\n\n", y2);

	return 0;
}

#endif

// �Ž����� ����ϴ� ���α׷�

#if 0

int main() {

	int user, change = 0;
	int price, c5000, c1000, c500, c100;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);    // ���� ���� �Է¹޴´�

	printf("����ڰ� �� ��: ");
	scanf("%d", &user);
	change = user - price;  // �Ž������� change�� ����
	
	c5000 = change / 5000;  // �� �����ڸ� ����ؼ� 5000�� ���� ������ ���
	change = change % 5000; // ������ �����ڸ� ����Ͽ� ���� �ܵ��� ���

	c1000 = change / 1000;  // ���� �ܵ����� 1000�� ���� ������ ���
	change = change % 1000; // ������ �����ڸ� ����Ͽ� ���� �ܵ��� ���

	c500 = change / 500;   // ���� �ܵ����� 500�� ������ ������ ���
	change = change % 500; // ������ �����ڸ� ����Ͽ� ���� �ܵ��� ���

	c100 = change / 100;   // ���� �ܵ����� 100�� ������ ������ ���
	change = change % 100; // ������ �����ڸ� ����Ͽ� ���� �ܵ��� ���

	printf("��õ����: %d��\n", c5000);
	printf("õ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);
	// 12400 -> 7600: 5000 + 2*1000 + 500 + 100
	return 0;
}

#endif


// OJ 1315
// �ñ޿� ���ʽ�����

/*
	�ñ� 7530���� �ް� �ִµ�,

	8�ð��� ä�� �� ���� ���ʽ��� 1000���� �� �޴´�.

	���� �ð� ( > 0)�� �ԷµǸ� �ӱ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#if 0

int main() {

	int work_hour = 0;

	int wage = 0;

	scanf("%d", &work_hour);

	wage = work_hour * 7530;

	wage = wage + (work_hour / 8) * 1000;

	printf("%d", wage);

	return 0;
}

#endif

// OJ 1305
/*
	100�� 50���� ū���� ���Ͽ� ����� ����Ͻÿ�.
*/

#if 0

int main() {

	printf("%d", 100 > 50);

	return 0;
}

#endif

// OJ 1327

/*
	�Էµ� 1���� ���� ( > 9) n�� ���ؼ�, n�� ���� �ڸ� ���ڸ� ��� �Ͻÿ�.
*/

#if 0

int main() {

	int num = 0;
	scanf("%d", &num);
	
	num = num % 100;
	num = num / 10;

	printf("%d", num % 10);

	return 0;
}

#endif


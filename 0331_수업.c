
#include <stdio.h>

// +, -, *, /, %

// ����������
// ++, --

#if 0
int main() {

	int a = 10;
	int b = 0;

	// 5.10 �������� �켱������ ���� ��Ģ
	// p. 204 �켱���� ǥ�� ����
	b = (4 + 5) * 10; // ��ȣ�� ����Ͽ� �ǵ��� ��Ȯ�ϰ� ǥ��
	
	//a++;
	//printf("%d\n", a);

	b = ++a;
	// a++
	// b = a;

	b = a++;
	// b = a;
	// a++;

	printf("a: %d  b: %d\n", a, b);

	return 0;
}
#endif

#if 0

int main() {

	int a;
	int b;
	// ���Կ�����, assignment operator

	a = 10;
	a = b = 20; // 20�� b�� ����, b�� a�� ����. �����ʺ��� �������� �����.
	
	a = 20;
	b = 20;

	// ���迬����

	//  >   <   >=   <=   ==   !=  

	printf("%d\n", (10 > 8));
	printf("%d\n", (10 < 8));
	printf("%d\n", (10 >= 8));
	printf("%d\n", (10 <= 8));
	printf("%d\n", (10 != 8));
	printf("%d\n", (10 == 8));

	return 0;
}

#endif

#if 0

int main() {

	// �������� p.183
	// ���迬���� ����� ���� �� ���ļ� �Ǵ��� ��

	int a;
	//             2 < a < 5
	// AND : &&
	// OR  : || (enterŰ ����)
	// NOT : !

	// 2 < a < 5
	printf("%d\n", (2 < a) && (a < 5));
	printf("%d\n", (2 < a) || (a < 5));
	printf("%d\n", !(3 > 4));

}
#endif

#if 0

int main() {

	int a = 0;

	// a�� ����ִ� ���ڰ� ¦���̸� 1�� ����Ͻÿ�.
	printf("%d\n", ((a % 2) == 0));
	printf("%d\n", !((a % 2) == 1));
	printf("%d\n", !((a % 2) != 0));

	// a���ڰ� ¦���鼭, 1�� �ڸ��� 7�̸� 1�� ����Ͻÿ�.
	printf("%d\n", (((a % 2) == 0) && (a % 10) == 7));

	// a���ڰ� Ȧ���鼭, 10�� �ڸ� ���ڰ� 7�̸� 1�� ����Ͻÿ�.
	printf("%d\n", ((a % 2) == 1) && ((a / 10) % 10 == 7));

}
#endif

#if 0

int main() {

	// p. 187
	// ����
	// 4�� ������ �������� �����̰�, 100���δ� ������ �������� �ȵ�
	// or
	// 400���� ������ �������� ����

	int a = 1992;
	// a�� �����̸� 1, �ƴϸ� 0�� ����Ͻÿ�.

	printf("%d\n", ((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));

	return 0;
}
#endif

#if 0

int main() {

	// 5.6 ���ǿ�����
	int a;
	
	a = (a > 4) ? 1 : 2;
	// a�� ¦���� a�� 2�踦 ���ϰ�, �ƴϸ� 2�踦 ���ϰ� 1�� ���ض�.
	a = (a % 2 == 0) ? 2 * a : 2 * a + 1;


	return 0;
}
#endif

#if 0

int main() {

	// 5.8 ��Ʈ������.
	char x = 4; // 1 byte = 8 bit ==> 0000 0100
	char y = 2; //                ==> 0000 0010
	char z;

	z = x & y; // and ====> 0000 0000
	z = x | y; //  or ====> 0000 0110
	z = x ^ y; // xor ====> exclusive or -- 
	z = ~x;    // bit not  0 --> 1, 1 --> 0 // 1111_1011

	// XOR 
	// 1 xor 1 = 0
	// 1 xor 0 = 1
	// 0 xor 1 = 1
	// 0 xor 0 = 0

	x = x << 1; 

	//  & : and
	//  | : or
	//  ^ : xor
	// << : left shift --- 2�辿 Ŀ���� ȿ��
	// >> : right shift --- 1/2�� �۾����� ȿ��

	return 0;
}
#endif

#if 1

int main() {

	// p.198 ����ȯ, casting

	int a;

	a = 3.14; // implicit casting, �Ϲ��� ����ȯ
	a = (int)3.14; // explicit casting, ����� ����ȯ

	
	return 0;
}

#endif



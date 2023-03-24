

// Chap.4 

// 8bit --> 1 byte -- 1024 (2^10) --> 1 KBytes --> 1 MB --> 1GB --> 1 TB
//

// ����
// int          :    4 bytes      -20�� ~ 20��
// short        :    2 bytes      -32,000 ~ 32,000
// long         :    4 bytes      ( windows ) ---> sizeof ������. data type ũ�⸦ Ȯ��
// long long    :    8 bytes      -920�� ~ 920��

// ������: �� ������ Ÿ���� �����ϴ� �޸� ũ��

#include <stdio.h>
#include <limits.h>   // ���������� �ִ�, �ּ� ���� �˱� ���ؼ� �ʿ�

#if 0
int main() {

	printf("int size %d \n", sizeof(int));
	printf("int size %d \n", sizeof(short));
	printf("int size %d \n", sizeof(long));

	printf("int max %d    min %d \n", INT_MAX, INT_MIN);
	printf("short max %d    min %d \n", SHRT_MAX, SHRT_MIN);
	printf("long long max %lld    min %lld \n", LLONG_MAX, LLONG_MIN);

	return 0;
}
#endif

// ��ǻ�� ������������ ���ڸ� ���� ��� ǥ���ұ�?

// 2�� ��Ʈ --> 4�� (2^2)
//            00  01  10  11
//             0   1   2   3
// 
// --> �� ���� ��Ʈ�� 0�̸� ���,
//                    1�̸� ����
//             00  01  10  11
//              0   1  -0  -1
// 2�� ����     0   1  -2  -1


// ���� ���� ���� ������, �׷��鼭�� ���� ���� ��Ʈ�� ���ؼ� ��/���� �Ǵ��� �����ϰ�,
// ��� ������ ������ ������ �Ҵ� ü��,,, �̰� ������... ===> p.138 2's complement, 2�� ����
// 
// 2�� ���� ��� ===> ���<-->�������� ��ȯ ���
//                    1�ܰ�. ��Ʈ�� ������, (toggle) --> on -> off, off -> on
//                    2�ܰ�. +1 (1�� ���Ѵ�.)
// 
// -1�� ��� ǥ���ϴ°�?   1�� ���ؼ� 2�� ��������� ����
//                    01 -- toggle --> 10 --> 11 (-1)
// 
// 0���ٰ� 2�� ������ �����ϸ�?
//                    00 -- toggle --> 11 --> 00
// 
// 10(������)�� �����ΰ�? --> 2�� ����ü�踦 �����ϸ� �����ϴ� ����� ���´�.
//                    10 -- toggle --> 01 -- +1 --> 10 (2)
//            


// 
// 3�� ��Ʈ --> 8�� (2^3)
//          000 001 010 011 100 101 110 111
//            0   1   2   3   4   5   6   7
//            0   1   2   3  -0  -1  -2  -3
//      
// 2�� ����   0   1   2   3  -4  -3  -2  -1
//

// 100 -- 011 --> 100  
// 101 -- 010 --> 011

// 4�� ��Ʈ --> 16�� (2^4)


// unsigned type (0�� ����� ����ϴ� Ÿ��)

// unsigned int       : 0 ~ 40��
// unsigned short     : 0 ~ 45000
// unsigned long    
// unsigned long long : 0 ~ 2*90��

#if 0
int main() {

	printf("unsigned int max: %u\n", UINT_MAX);
	printf("unsigned int max: %d\n", UINT_MAX);


	return 0;
}
#endif

// overflow  : data type�� ǥ���� �� �ִ� ������ �Ѱ踦 ���� �Ѿ�� ���
// underflow :                                          ������ �Ѿ�� ��� 

#if 0
int main() {

	int a = INT_MAX;
	a = a + 1; // overflow

	printf("overflow %d\n", a);

	int b = INT_MIN;
	b = b - 1;
	printf("underflow %d\n", b);

	return 0;
}
#endif

// ��� : ������ �ʴ� ��
// ����� ����� 2���� ���
// ��� 1. const   --> ������ �����, ���� ������Ű�� ���
// ��� 2. #define  --> �������ϴ� �ܰ迡�� ���� �ٲ�ġ�� �ϴ� ���

#if 0
#define MY_NNN 10
int main() {

	const float PI = 3.141592;
	const int MY_NUM = 10; // �� �տ� const�� ���δ�. constant�� ����
	MY_NUM = 30;           // a�� ���̻� ������ �ƴϴ�. ���� �ٲٴ� ���� �Ұ���
	
	printf("%d\n", MY_NNN);

	return 0;
}
#endif

// �Ǽ���

// floating point number type (�ε��Ҽ�����) ��ݩ���� -> �Ҽ����� ���� ������

// fixed point number type (�����Ҽ�����)
//
//    3.14

// float   : 4 byte
// double  : 8 byte
// long double : 8 byte

#if 0
#include <float.h>

int main() {

	printf("float max:%f   min:%e  \n", FLT_MAX, FLT_MIN);
	printf("double max:%e   min:%e  \n", DBL_MAX, DBL_MIN);

	return 0;
}
#endif

// p.147 -- �ε��Ҽ����� ����Ȯ�� ���� �ִ�.
// 2������ 0.1�� 10������ 1/3 ���� ����, �����ϰ� ǥ���� �� ����.

#if 0
int main() {

	float a = 0.1;
	printf("a is %.20f\n", a);

	return 0;
}
#endif

// p.148 -- �ε��Ҽ����� ����� ���, ������ ��

#if 0
int main() {

	double d;

	d = (1.0e20 + 5.0) - (1.0e20);
	printf("%f\n", d);

	return 0;
}
#endif

// ������

// char

// ASCII ���̺� (���� ǥ��): �� ���ں� �й� �ο� ü��
// p. 150

// American Standard Code for Information Interchange
#if 0
int main() {

	char d = 'a';
	char e = 'E';

	printf("%c \n", d);
	printf("%d \n", d);

	return 0;
}
#endif

// Chap. 5.
//   ���İ� ������

int main() {

	// 1. ���������, binary operator, �ǿ����ڰ� 2��
	//       +, -, *, /, %
	int a;
	a = a + 1;
	a = a - 2;
	a = a * 3;
	a = a / 4;
	a = a % 5;

	// 2. ��ȣ������, unary operator, �ǿ����ڰ� 1��

	a = -100;
	a = -a;

	// 3. ����������, unary operator
	a++;
	++a;
	a--;
	--a;



	return 0;
}









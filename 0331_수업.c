
#include <stdio.h>

// +, -, *, /, %

// 증감연산자
// ++, --

#if 0
int main() {

	int a = 10;
	int b = 0;

	// 5.10 연산자의 우선순위와 결합 규칙
	// p. 204 우선순위 표가 있음
	b = (4 + 5) * 10; // 괄호를 사용하여 의도를 명확하게 표현
	
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
	// 대입연산자, assignment operator

	a = 10;
	a = b = 20; // 20이 b로 들어가고, b가 a로 들어간다. 오른쪽부터 왼쪽으로 수행됨.
	
	a = 20;
	b = 20;

	// 관계연산자

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

	// 논리연산자 p.183
	// 관계연산자 결과를 여러 개 합쳐서 판단할 때

	int a;
	//             2 < a < 5
	// AND : &&
	// OR  : || (enter키 위에)
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

	// a에 들어있는 숫자가 짝수이면 1을 출력하시오.
	printf("%d\n", ((a % 2) == 0));
	printf("%d\n", !((a % 2) == 1));
	printf("%d\n", !((a % 2) != 0));

	// a숫자가 짝수면서, 1의 자리가 7이면 1을 출력하시오.
	printf("%d\n", (((a % 2) == 0) && (a % 10) == 7));

	// a숫자가 홀수면서, 10의 자리 숫자가 7이면 1을 출력하시오.
	printf("%d\n", ((a % 2) == 1) && ((a / 10) % 10 == 7));

}
#endif

#if 0

int main() {

	// p. 187
	// 윤년
	// 4로 나누어 떨어지는 연도이고, 100으로는 나누어 떨어지면 안됨
	// or
	// 400으로 나누어 떨어지는 연도

	int a = 1992;
	// a가 윤년이면 1, 아니면 0을 출력하시오.

	printf("%d\n", ((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));

	return 0;
}
#endif

#if 0

int main() {

	// 5.6 조건연산자
	int a;
	
	a = (a > 4) ? 1 : 2;
	// a가 짝수면 a에 2배를 곱하고, 아니면 2배를 곱하고 1을 더해라.
	a = (a % 2 == 0) ? 2 * a : 2 * a + 1;


	return 0;
}
#endif

#if 0

int main() {

	// 5.8 비트연산자.
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
	// << : left shift --- 2배씩 커지는 효과
	// >> : right shift --- 1/2씩 작아지는 효과

	return 0;
}
#endif

#if 1

int main() {

	// p.198 형변환, casting

	int a;

	a = 3.14; // implicit casting, 암묵적 형변환
	a = (int)3.14; // explicit casting, 명시적 형변환

	
	return 0;
}

#endif




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2023-05-11 C언어 실습

// 배열

#if 0

int main() {

	// 같은 데이터형을 갖는 변수가 많이 필요할 때 사용

	int a[10];
	// a[0], a[1], ... , a[9]

	char ccc[20];
	float k[2];
	double y[5];

#define SZ 5
	long aa[SZ];

	/*
	int k = 10;
	int b[k]      // 크기로 변수 x
	cahr ccc[-2]; // 크기로 음수 x
	float k[3.5]; // 크기로 실수 x
	*/


	// 배열요소의 접근
	// read 접근
	printf("%d\n", a[2]);

	// write 접근
	a[2] = 10;
	printf("%d\n", a[2]);

	return 0;
}

#endif

#if 0

int main() {

	// 인덱스의 범위
	int a[10];

	// 배열 크기가 10인 경우, 인덱스는 항상 0부터 시작하여 9에서 종료

	// for-반복문 i를 이용한 배열요소 write
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}

	// for-반복문 i를 이용한 배열요소 read
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}

#endif

#if 0

// 배열 e는 global variable 이므로 자동적으로
// 모든 배열요소가 0으로 초기화
int e[5];

int main() {

	// local variable이므로, garbage value로 초기화
	int a[5];

	// 각 배열요소가 지정된 값으로 초기화
	int b[5] = { 3, 4, 5, 6 ,7 };

	/*
		배열 일부가 초기화되면, 나머지는 0으로 초기화
	*/

	// c[0], c[1]은 초기화, 나머지는 0으로
	int c[5] = { 1, 2 };

	// d[0]은 초기화, 나머지는 0으로
	int d[5] = { 1 };

	return 0;
}

#endif

#if 0

// 계산에 의한 배열요소의 크기

int main() {

	// 배열 크기 지정하지 않는 경우,
	// 초기값의 개수로 배열크기 지정
	int a[] = { 1,2,3 };

	// 배열크기를 알아내는 방법
	//
	// sizeof(a)    : 배열 전체의 바이트 크기 : 4 * 3 = 12 bytes
	// sizeof(a[0]) : 배열요소 1개의 바이트 크기 : 4bytes
	int size = sizeof(a) / sizeof(a[0]);

	printf("%d", size); // 3 출력

	return 0;
}

#endif

#if 0

int main() {

	// 배열 a를 배열 b로 복사

	int a[] = { 1, 2, 3 }; 
	int b[3];

	// 올바른 복사 방법
	for (int i = 0; i < 3; i++) {
		b[i] = a[i];
	}

	// 부적절한 복사 방법
	// b = a;

	// 배열 a와 배열 b를 비교
	
	// 올바른 비교 방법
	// b[2] = 1; 다를 경우
	for (int i = 0; i < 3; i++) {
		if (a[i] != b[i]) {
			printf("a와 b는 다릅니다.\n");
			break;
		}
	}

	// 부적절한 비교 방법
	if (a == b) {
		printf("부적절한 비교방법입니다.");
	}

	printf("%x\n", a);
	printf("%x\n", b);

	return 0;
}

#endif

// 배열과 함수

#if 0

/*
	함수 parameter로서의 배열
*/

// 배열을 parameter로 받는 함수

// int k[] : 배열 parameter, 배열 크기를 지정할 필요 없음
// int sz  : 배열 크기 (! parameter로 전달된 배열의 크기는 계산 불가)
void foo(int k[], int sz) {

	for (int i = 0; i < sz; i++) {
		printf("%d\n", k[i]);
	}
}

void goo(int k[], int sz) {
	k[2] = 100;
}


// const 키워드 추가로 배열 k의 내용 변결 불가
void zoo(const int k[], int sz) {
	// k[1] = 200; // 배열 요소 값 변경이 금지됨
}

int main() {

	int a[] = { 1, 2, 3 };

	// 배열 a를 함수 foo의 argument로 전달
	foo(a, 3);

	// 배열 a를 함수 goo의 argument로 전달
	goo(a, 3);

	printf("---- after goo ----\n");
	foo(a, 3);

	// 배열 a를 함수 zoo의 argument로 전달
	zoo(a, 3);

	return 0;
}

#endif


#if 0

// 정렬
// selection sort

#define SIZE 10

int main() {

	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };

	int i = 0;
	int j = 0;
	int temp = 0;
	int least = 0;

	for (i = 0; i < SIZE - 1; i++) {

		least = i;

		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least]) {
				least = j;
			}

			temp = list[i];
			list[i] = list[least];
			list[least] = temp;
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}

#endif

#if 0

// bubble sort

#define SIZE 10

int main() {

	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int temp = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}

#endif

#if 0

// 탐색
// 순차 탐색

#define SIZE 10

int main() {

	int key = 0;
	int i = 0;
	int list[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("탐색 성공 인덱스 = %d\n", i);
		}

	}
	return 0;
}

#endif

// 실습


#if 0

// 1700: [C언어 실습] 같은 문자 찾기

/*
10개의 알파벳 소문자를 입력 받아, 마지막 입력 문자와 같은 것이 몇 개 있는지 출력하시오.
*/

int main() {

	char a[10] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}

	/*for (int i = 0; i < 10; i++) {
		printf("%c ", a[i]);
	}*/	

	for (int i = 0; i < 10; i++) {
		if (a[i] == a[9]) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}

#endif


#if 0

// 1701: [C언어 실습] 모음을 찾아라
/*
10개의 소문자 알파벳을 입력 받아 마지막 문자가 
자음이면, 앞 선 9개 중에서 자음의 개수를
모음이면, 모음의 개수를 출력하시오.
*/

int main() {

	// 모음 (Vowels) a e i o u

	char a[10] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			printf("%d\n", a[i]);
			cnt++;
		}
	}

	if (a[9] == 'a' || a[9] == 'e' || a[9] == 'i' || a[9] == 'o' || a[9] == 'u') {
		printf("%d", cnt);
	}
	else {
		printf("%d", 10 - cnt);
	}

	return 0;
}

#endif


#if 0

/*
10개의 알파벳 문자 (대,소문자만)를 입력 받아,
반대 순서로 한 줄에 공백없이 출력 하시오.
*/

int main() {

	char a[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}

	for (int i = 9; i >= 0; i--) {
		printf("%c", a[i]);
	}

	return 0;
}

#endif

#if 0

// 1703: [C언어 실습] 모음은 제외하기
/*
10개의 알파벳 문자 (대,소문자만)를 입력 받아,
모음은 제외하고 한 줄에 공백없이 출력하시오.
*/

int main() {

	char a[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
			a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ) {
			// nothing
		}
		else {
			printf("%c", a[i]);
		}
	}


	return 0;
}

#endif

#if 0

// 1704: [C언어 실습] 앞뒤가 똑같아
/*
5개의 알파벳 문자 (소문자만)를 입력 받아,
Palindrom (앞뒤로 읽어 동일)이면 1을 출력하고, 아닐 경우 0을 출력한다.
*/

int main() {

	char a[5] = { 0 };
	char b[5] = { 0 };
	int flag = 0;

	for (int i = 0; i < 5; i++) {
		scanf(" %c", &a[i]);
	}

	
	for (int i = 0; i < 5; i++) {
		b[i] = a[4 - i];
	}

	for (int i = 0; i < 5; i++) {
		if (a[i] != b[i]) {
			flag = 1;
		}
	}

	if (flag == 1) {
		printf("%d", 0);
	}
	else {
		printf("%d", 1);
	}

	return 0;
}

#endif

#if 0

// 1705: [C언어 실습 - 배열] 앞뒤가 똑같아?

/*ㄴ
Palindrome 문자열은 앞에서부터 읽었을 때와 뒤에서부터 읽었을 때 동일하다는 특징을 갖는다.

예를 들어, aba, aaa, abba, 등은 palindrome 문자열이다.

길이 5인 문자열 s가 입력되었을 때,
​
인덱스 i (0 <= i < 5) 위치에 있는 한 개의 문자를 제거했을 때,

palindrome 문자열이 되는 모든 i값들의 합을 출력하시오.

예를 들어, s = aaaaa 인 경우, i = 0, 1, 2, 3 이 조건을 만족하므로 0+1+2+3+4 = 10을 출력,

s = ababa 인 경우, i = 2만이 이 조건을 만족하므로 2를 출력한다.
*/

#define SZ 10

int main() {

	char str1[SZ];
	char str2[SZ];
	char str3[SZ];

	for (int i = 0; i < SZ; i++) {
		scanf(" %c", &str1[i]);
	}

	int i;
	int j;
	int flag = 0;
	int result = 0;
	
	// i 를 제거한 문자열을 만들고
	// 문자열을 뒤집고 비교한다.

	// a b c b a

	for (i = 0; i < SZ; i++)
	{

		for (j = 0; j < i; j++) // i = 2 abcde
		{
			str2[j] = str1[j];
		}


		for (j = i; j <= SZ - 1; j++) // i = 1;
		{
			str2[j] = str1[j + 1];
		}

		for (j = 0; j < SZ; j++)
		{
			str3[j] = str2[SZ - 2 - j];
		}

		for (j = 0; j < SZ - 1; j++) {
			if (str2[j] != str3[j]) {
				flag = 1;
			}
		}
		
		if (flag == 1) {
			flag = 0;
		}
		else {
			printf("%d\n", i);
			result = result + i;
		}
	}

	printf("%d", result);

	return 0;
}

#endif


// 온라인 저지 문제 추가

#if 0

// 1687: [23-C언어] 배열-1
/*
int days[12]를 선언하고, 각 달의 날 수 만큼 입력받아 저장한 다음, 
각 월에는 몇 일이 있는지 한 줄 씩 출력하시오. (윤년은 고려하지 않는다.)

*/

int main() {

	int days[12] = { 0 };
	for (int i = 0; i < 12; i++) {
		scanf("%d", &days[i]);
	}

	for (int i = 0; i < 12; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
	}

	return 0;
}

#endif

#if 0

// 1688: [23-C언어] 배열-2
/*
크기가 10인 1차원 배열에 주어진 숫자들을 저장한 후,
최대값과 최소값을 출력하는 프로그램을 작성해보시오. (단, 주어지는 숫자는 0과 100 사이의 숫자이다.)
*/

int main() {

	int nums[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &nums[i]);
	}

	int max = nums[0];
	int min = nums[0];

	for (int i = 1; i < 10; i++) {
		if (max < nums[i]) {
			max = nums[i];
		}

		if (min > nums[i]) {
			min = nums[i];
		}
	}

	printf("최대값은 %d, 최소값은 %d 입니다.", max, min);

	return 0;
}

#endif

#if 0

// 1689: [23-C언어] 배열-3
/*
2개의 5개의 원소를 배열을 선언하고, 주어진 값으로 초기화를 한 뒤,
두 배열의 대응되는 원소의 값이 같은지 검사하는 함수 array_equal을 만들고
만일 두 배열의 대응되는 원소의 값이 같다면 0을 반환하고, 아니면 1을 반환하는 함수를 만들어보시오.

이후, 반환받은 값이 1이면 "원소의 값이 다르다"를 출력하고, 0이면 "원소의 값이 같다"로 출력하시오.
*/

int array_equal(int a1[], int b1[], int sz) {

	for (int i = 0; i < sz; i++) {
		if (a1[i] != b1[i]) {
			
			return 1;
		}
	}

	return 0;
}

int main() {

	int a[5] = { 0 };
	int b[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 5; i++) {
		scanf("%d", &b[i]);
	}
	int result = array_equal(a, b, sizeof(a)/4);

	if (result == 1) {
		printf("원소의 값이 다르다");
	}
	else {
		printf("원소의 값이 같다");
	}

	return 0;
}

#endif

#if 0

// 1690: [23-C언어] 배열-4
/*
2개의 최대 크기가 10인 정수 배열 a, b를 선언하고, 10개의 정수를 입력받아 a에 저장하여라. 
이후, a 배열의 원소들을 b 배열로 복사하고, b 배열을 출력해보시오.

*/

int main() {

	int a[10] = { 0 };
	int b[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}


	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	}

	for (int i = 0; i < 10; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}

	return 0;
}

#endif


#if 0

// 2차월 배열의 함수 전달

// Parameter로 전달된 2차월 배열의 경우,
// 열의 개수는 반드시 지정 필요
void foo(int a[][3], int row_cnt) {

	for (int i = 0; i < row_cnt; i++) {
	
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

// 2차원 배열

int main() {

	int a1[2][3];  // 2행 3열 2차원 배열
	a1[0][0] = 10; // 첫번째 배열 요소
	a1[1][2] = 10; // 마지막 배열 요소

	// 2차월 배열의 초기화
	int a[2][3] = { {1, 2, 3},
					{4, 5, 6} };

	// 초기값에 의해서 자동으로 행의 개수는 2로 결정
	int b[][3] = { {1, 2, 3}, 
				   {4, 5, 6} };

	// 초기값을 반드시 2차월 형태로 입력할 필요는 없다
	int c[][3] = { 1, 2, 3, 4, 5, 6 };

	foo(c, 2);

	return 0;
}

#endif


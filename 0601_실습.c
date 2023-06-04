
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

// 1711: [C언어퀴즈 2023] 문제 1

/*
배열을 이용하여 푸는 문제입니다.

최대 2개 ~ 10개의 양의 정수를 입력받아, 2개 이상 중복되는 숫자들의 개수를 출력하시오.

예을 들어, 입력에 10, 20, 20, 10, 20의 경우, 10과 20이 중복되므로 2를 출력한다.

입력의 끝은 -1이다.
*/

int main()
{

	int nums[10] = { 0 };
	int k = 0;
	int nums_cnt = 0;

	for (int i = 0; i < 10; i++) {
		
		scanf(" %d", &k);

		if (k == -1) { // 입력 받은 수가 -1이면 배열에 넣지 않고 종료
			
			break;
		}
		else {

			nums[i] = k; // 배열에 복사
			nums_cnt = i;  // 입력 받은 정수의 개수 기록
		}
	}

	int dup_flag = 0;
	int dup_cnt = 0;

	for (int i = 0; i <= nums_cnt; i++) {
		// 찾고 나면 값을 변경 -> 다시 검색되는 것 방지

		for (int j = i + 1; j <= nums_cnt; j++) {

			// 현재 확인 중인 i 다음 수부터 확인

			if (nums[i] == -1) {
				// 이미 확인한 수 일 경우, break로 탈출
				break;
			}

			if (nums[i] == nums[j]) {
				// 만약 같은 것이 있으면
				dup_flag = 1;
				nums[j] = -1; // 다시 검색되지 않도록 값 변경
			}
		}

		// dup_flag 를 확인하여 중복된 수가 있는지 확인

		if (dup_flag == 1) {

			dup_cnt++;    // 중복 수 cnt
			dup_flag = 0; // flag 다시 초기화
		}
	}

	printf("%d", dup_cnt);

	return 0;
}
#endif

#if 0

// 1712: [C언어퀴즈 2023] 문제 2

/*
배열을 이용하여 푸는 문제입니다.

2개 ~ 10개 이하의 서로 다른 양의 정수들을 입력받는다. 입력의 끝은 -1이다.

입력된 숫자 중 2개로 이루어진 모든 조합(숫자 순서에 상관없음)들에 대해,

그 조합의 합이 소수가 되는 개수를 출력하시오.
*/

int isPrime(int n) {

	// 전달 받은 정수가 소수인지 확인하는 함수

	// 소수란? -> 1과 자기 자신으로만 나누어 떨어지는 수

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {

			// 나누어 떨어지는 수 (약수)가 존재하면, 소수가 아니므로, 0을 반환
			return 0;
		}
	}

	// 위 for-반복문에서 return되지 않을 경우, 소수를 의미하며, 1을 반환
	return 1;
}

int main()
{

	int nums[10] = { 0 };
	int k = 0;
	int nums_cnt = 0;

	for (int i = 0; i < 10; i++) {

		scanf(" %d", &k);

		if (k == -1) { // 입력 받은 수가 -1이면 배열에 넣지 않고 종료

			break;
		}
		else {

			nums[i] = k; // 배열에 복사
			nums_cnt = i;  // 입력 받은 정수의 개수 기록
		}
	}

	int temp_sum = 0;
	int prime_cnt = 0;

	for (int i = 0; i <= nums_cnt; i++) {

		for (int j = i + 1; j <= nums_cnt; j++) {
		
			temp_sum = nums[i] + nums[j]; // 두 수의 합을 계산
				
			if (isPrime(temp_sum)) { // 두 수의 합이 소수이면

				prime_cnt++; // 소수의 개수 증가
			}

		}
	}

	printf("%d", prime_cnt);

	return 0;
}
#endif

#if 0

// 1713: [C언어퀴즈 2023] 문제 3
/*
문자열에 관한 문제입니다.

최대 길이 10인 알파벳 문자열 1개를 입력받아, 소문자는 대문자로, 대문자는 소문자로 전환하여 출력하시오.

끝에 줄바꿈 문자 없음.
*/

int main()
{

	char str[11]; // 문자열을 입력받을 배열

	scanf("%s", str); // %s 이용하여 입력받기

	for (int i = 0; str[i] != '\0'; i++) {
		
		// '\0' -> 문자열의 끝, 문자열의 끝을 만나기 전까지 반복

		if (str[i] >= 'A' && str[i] <= 'Z') { // str[i]가 대문자라면

			str[i] += 32; // ascii 코드에서 대문자와 소문자 크기 차이 32 만큼 더해줌
		}
		else if (str[i] >= 'a' && str[i] <= 'z') { // str[i]가 소문자라면

			str[i] -= 32; // ascii 코드에서 대문자와 소문자 크기 차이 32 만큼 빼줌
		}
	}

	printf("%s", str);

	return 0;
}
#endif

#if 0

// 1714: [C언어퀴즈 2023] 문제 4

/*
문자열에 대한 문제입니다.

최대 길이 10인 알파벳 문자열을 입력받아, 그 문자열 안에 포함된 길이 3 "이상"인 palindrom의 개수를 출력하시오.

길이 3 이상이므로, 길이 4, 5, ... 도 가능하다.

palindrom이란 앞과 뒤어서 읽어서 동일한 문자열이다. 예를 들어, aba 같은 것이다.

알파벳 대소문자는 구별된다.

출력끝에는 줄바꿈 문자가 없어야 한다.
*/

#include <string.h>

int main()
{

	// 1. 최대 길이 10인 알파벳 문자열을 입력받고
	// 2. 그 문자열 안에 포함된 길이 3 "이상"인 문자열을 확인하여
	// 3. palindrom인지 확인 (strcmp 이용하기)

	char str1[11];
	char str2[11];
	char str3[11];

	scanf("%s", str1);

	int length = 0;
	int ix = 0;

	int palin_cnt = 0;

	for (length = 3; length <= strlen(str1); length++) { // 확인할 문자열의 길이

		for (int i = 0; i <= strlen(str1) - length; i++) { // str1에서 순차적으로 length 길이만큼 추출

			for (int j = i; j < i + length; j++) {

				str2[ix] = str1[j]; // 확인할 부분만 str2에 저장
				ix++;
			}

			// str2 완성
			str2[ix] = '\0';

			// printf("%s\n", str2);


			// str3 제작 -> str2의 reverse

			for (int k = 0; k < length; k++) {

				str3[length - 1 - k] = str2[k];
			}

			// str3 완성
			str3[ix] = '\0';

			// printf("str2 : %s\n", str2);
			// printf("str3 : %s\n", str3);
			// printf("===========\n");

			if (strcmp(str2, str3) == 0) { // str2와 str3가 같으면, palindrome
			
				palin_cnt++;
			}

			// str2, str3 초기화
			strcpy(str2, "\0");
			ix = 0;

			strcpy(str3, "\0");
		}
	}

	printf("%d", palin_cnt);

	return 0;
}
#endif

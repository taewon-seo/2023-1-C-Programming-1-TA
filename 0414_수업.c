
#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

#if 0

int main() {

	int i;

	for (i = 0; i < 10; i++) {
		printf("hello\n");
		printf("bye\n");
	}

	return 0;
}

#endif

#if 0

int main() {
	
	// 디버깅 실습
	int i = 300; // 변수 초기화, 안하면 garbage value가 들어가 있음.

	for (i = 0; i < 5; i++) {

		printf("hello\n");

	}

	return 0;
}

#endif

#if 0

int main() {

	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", i);
	}

	return 0;
}

#endif

#if 0

int main() {

	int i = 0;
	for (i = 0; i < 10; i++) {
		if ((i % 2 == 0)) {

			printf("%d\n", i);

		}
	}

	return 0;
}

#endif

#if 0

int main() {

	for (int i = 0; i <= 100; i++) {
		if (i % 10 == 3) {
			printf("%d\n", i);
		}
	}

	return 0;
}

#endif

#if 0

int main() {

	int cnt = 0;
	
	for (int i = 0; i <= 100000; i++) {
		if (i % 10 == 8 && i % 8 == 0) {
			cnt++;
			//printf("%d\n", i);
		}
	}

	printf("%d", cnt);

	return 0;
}

#endif

#if 0

int main() {

	int i = 0;
	int k = 0;

	for (i = 0; i < 5; i++) {
		
		for (k = 0; k < 5; k++) {

			printf("%d %d\n", i, k);

		}
	}

	return 0;
}

#endif

#if 0

int main() {

	int n = 9; // 입력받았다고 가정
	// 아까 본인의 코드의 경우 scanf가 동작하지 않았음
	
	for (int i = 1; i <= n; i++) {
		if (i == 3 || i == 6 || i == 9) {
			printf("X ");
		}
		else {
			printf("%d ", i);
		}
	}
	
	/*
	for (int i = 1; i <= n; i++) {

		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("X ");
		}
		else {
			printf("%d ", i);
		}

	}
	*/

	return 0;
}

#endif

#if 0

int main() {

	// break 실습

	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);

		if (i == 5) {
			break;
		}
	}

	return 0;
}

#endif

#if 0

int main() {

	// break 실습 2

	for (int i = 1; i < 5; i++) {
		
		for (int j = 1; j < 5; j++) {

			printf("%d %d\n", i, j);

			if ((j % 3) == 0) {
				break; // 자신과 가장 가까운 반복문만 중단한다.
			}
		}
	}

	return 0;
}

#endif

#if 1

int main() {

	int n = 22;
	//scanf("%d", &n);

	int i = n;
	while (1) {

		printf("%d\n", i);
		if (i == 1) {
			break;
		}

		if (i % 2 == 0) { // 짝수이면
			i = i / 2;
		}
		else {
			i = 3 * i + 1;
		}
	}

	return 0;
}

#endif

#if 0

int main() {

	return 0;
}

#endif





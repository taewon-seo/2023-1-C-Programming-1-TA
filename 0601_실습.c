
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

// 1711: [C������� 2023] ���� 1

/*
�迭�� �̿��Ͽ� Ǫ�� �����Դϴ�.

�ִ� 2�� ~ 10���� ���� ������ �Է¹޾�, 2�� �̻� �ߺ��Ǵ� ���ڵ��� ������ ����Ͻÿ�.

���� ���, �Է¿� 10, 20, 20, 10, 20�� ���, 10�� 20�� �ߺ��ǹǷ� 2�� ����Ѵ�.

�Է��� ���� -1�̴�.
*/

int main()
{

	int nums[10] = { 0 };
	int k = 0;
	int nums_cnt = 0;

	for (int i = 0; i < 10; i++) {
		
		scanf(" %d", &k);

		if (k == -1) { // �Է� ���� ���� -1�̸� �迭�� ���� �ʰ� ����
			
			break;
		}
		else {

			nums[i] = k; // �迭�� ����
			nums_cnt = i;  // �Է� ���� ������ ���� ���
		}
	}

	int dup_flag = 0;
	int dup_cnt = 0;

	for (int i = 0; i <= nums_cnt; i++) {
		// ã�� ���� ���� ���� -> �ٽ� �˻��Ǵ� �� ����

		for (int j = i + 1; j <= nums_cnt; j++) {

			// ���� Ȯ�� ���� i ���� ������ Ȯ��

			if (nums[i] == -1) {
				// �̹� Ȯ���� �� �� ���, break�� Ż��
				break;
			}

			if (nums[i] == nums[j]) {
				// ���� ���� ���� ������
				dup_flag = 1;
				nums[j] = -1; // �ٽ� �˻����� �ʵ��� �� ����
			}
		}

		// dup_flag �� Ȯ���Ͽ� �ߺ��� ���� �ִ��� Ȯ��

		if (dup_flag == 1) {

			dup_cnt++;    // �ߺ� �� cnt
			dup_flag = 0; // flag �ٽ� �ʱ�ȭ
		}
	}

	printf("%d", dup_cnt);

	return 0;
}
#endif

#if 0

// 1712: [C������� 2023] ���� 2

/*
�迭�� �̿��Ͽ� Ǫ�� �����Դϴ�.

2�� ~ 10�� ������ ���� �ٸ� ���� �������� �Է¹޴´�. �Է��� ���� -1�̴�.

�Էµ� ���� �� 2���� �̷���� ��� ����(���� ������ �������)�鿡 ����,

�� ������ ���� �Ҽ��� �Ǵ� ������ ����Ͻÿ�.
*/

int isPrime(int n) {

	// ���� ���� ������ �Ҽ����� Ȯ���ϴ� �Լ�

	// �Ҽ���? -> 1�� �ڱ� �ڽ����θ� ������ �������� ��

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {

			// ������ �������� �� (���)�� �����ϸ�, �Ҽ��� �ƴϹǷ�, 0�� ��ȯ
			return 0;
		}
	}

	// �� for-�ݺ������� return���� ���� ���, �Ҽ��� �ǹ��ϸ�, 1�� ��ȯ
	return 1;
}

int main()
{

	int nums[10] = { 0 };
	int k = 0;
	int nums_cnt = 0;

	for (int i = 0; i < 10; i++) {

		scanf(" %d", &k);

		if (k == -1) { // �Է� ���� ���� -1�̸� �迭�� ���� �ʰ� ����

			break;
		}
		else {

			nums[i] = k; // �迭�� ����
			nums_cnt = i;  // �Է� ���� ������ ���� ���
		}
	}

	int temp_sum = 0;
	int prime_cnt = 0;

	for (int i = 0; i <= nums_cnt; i++) {

		for (int j = i + 1; j <= nums_cnt; j++) {
		
			temp_sum = nums[i] + nums[j]; // �� ���� ���� ���
				
			if (isPrime(temp_sum)) { // �� ���� ���� �Ҽ��̸�

				prime_cnt++; // �Ҽ��� ���� ����
			}

		}
	}

	printf("%d", prime_cnt);

	return 0;
}
#endif

#if 0

// 1713: [C������� 2023] ���� 3
/*
���ڿ��� ���� �����Դϴ�.

�ִ� ���� 10�� ���ĺ� ���ڿ� 1���� �Է¹޾�, �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�Ͽ� ����Ͻÿ�.

���� �ٹٲ� ���� ����.
*/

int main()
{

	char str[11]; // ���ڿ��� �Է¹��� �迭

	scanf("%s", str); // %s �̿��Ͽ� �Է¹ޱ�

	for (int i = 0; str[i] != '\0'; i++) {
		
		// '\0' -> ���ڿ��� ��, ���ڿ��� ���� ������ ������ �ݺ�

		if (str[i] >= 'A' && str[i] <= 'Z') { // str[i]�� �빮�ڶ��

			str[i] += 32; // ascii �ڵ忡�� �빮�ڿ� �ҹ��� ũ�� ���� 32 ��ŭ ������
		}
		else if (str[i] >= 'a' && str[i] <= 'z') { // str[i]�� �ҹ��ڶ��

			str[i] -= 32; // ascii �ڵ忡�� �빮�ڿ� �ҹ��� ũ�� ���� 32 ��ŭ ����
		}
	}

	printf("%s", str);

	return 0;
}
#endif

#if 0

// 1714: [C������� 2023] ���� 4

/*
���ڿ��� ���� �����Դϴ�.

�ִ� ���� 10�� ���ĺ� ���ڿ��� �Է¹޾�, �� ���ڿ� �ȿ� ���Ե� ���� 3 "�̻�"�� palindrom�� ������ ����Ͻÿ�.

���� 3 �̻��̹Ƿ�, ���� 4, 5, ... �� �����ϴ�.

palindrom�̶� �հ� �ھ �о ������ ���ڿ��̴�. ���� ���, aba ���� ���̴�.

���ĺ� ��ҹ��ڴ� �����ȴ�.

��³����� �ٹٲ� ���ڰ� ����� �Ѵ�.
*/

#include <string.h>

int main()
{

	// 1. �ִ� ���� 10�� ���ĺ� ���ڿ��� �Է¹ް�
	// 2. �� ���ڿ� �ȿ� ���Ե� ���� 3 "�̻�"�� ���ڿ��� Ȯ���Ͽ�
	// 3. palindrom���� Ȯ�� (strcmp �̿��ϱ�)

	char str1[11];
	char str2[11];
	char str3[11];

	scanf("%s", str1);

	int length = 0;
	int ix = 0;

	int palin_cnt = 0;

	for (length = 3; length <= strlen(str1); length++) { // Ȯ���� ���ڿ��� ����

		for (int i = 0; i <= strlen(str1) - length; i++) { // str1���� ���������� length ���̸�ŭ ����

			for (int j = i; j < i + length; j++) {

				str2[ix] = str1[j]; // Ȯ���� �κи� str2�� ����
				ix++;
			}

			// str2 �ϼ�
			str2[ix] = '\0';

			// printf("%s\n", str2);


			// str3 ���� -> str2�� reverse

			for (int k = 0; k < length; k++) {

				str3[length - 1 - k] = str2[k];
			}

			// str3 �ϼ�
			str3[ix] = '\0';

			// printf("str2 : %s\n", str2);
			// printf("str3 : %s\n", str3);
			// printf("===========\n");

			if (strcmp(str2, str3) == 0) { // str2�� str3�� ������, palindrome
			
				palin_cnt++;
			}

			// str2, str3 �ʱ�ȭ
			strcpy(str2, "\0");
			ix = 0;

			strcpy(str3, "\0");
		}
	}

	printf("%d", palin_cnt);

	return 0;
}
#endif

/*m��° ������ ������ 2m+1�� ũ�������� Ʈ����.
����ڰ� �Է��� Ʈ�� ����(n)�� ���߱� ���� n2 ������ ���������, ���� ������ ������ ������ 2m+1 ������ �� �ִ�.
i�� �� ������ ���� �ѹ���.
j�� m�� ���� ���� ���� �� * ��°� ������ ������ �����ϴ� ������ */

#include<stdio.h>
int main(void) {

	int i, j, m; 
	int n;

	printf("\nƮ���� ���̸� �Է��ϼ���: ");
	scanf_s("%d", &n);
	int n2 = n;

	for (m = 3; ; m += 2) {

		for (i = 1; i <= n2 && i <= m; i++) {

			for (j = 1; j <= n - i; j++)
				printf(" ");
			if (m == 3 && i == 1) printf("��");
			else {
				for (j = 1; j <= i; j++)
					printf("* ");
			}
			printf("\n");
		}
		n2 -= m;
		if (n2 <= 0) break;
	}
	printf("\n\tMerry Christmas!\n\n");
	return 0;
}
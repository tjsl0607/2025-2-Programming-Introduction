#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float r; //���� ���� �Ҵ����� �ʾƵ� ��
	float area;

	printf("�������� �Է�");
	scanf("%f", &r);
	// area = 3.14 * r ^ 2;  �� ��� ������ ��. ^�� �Ǽ����� �Ұ����ϵ��� �����Ǿ� �ֳ���
	area = 3.14 * r * r;

	printf("���� ����: %f\n", area);

	printf("2510720 ������\n");


	return 0;
	//0�� ��ȯ
}
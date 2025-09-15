#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float r; //굳이 값을 할당하지 않아도 됨
	float area;

	printf("반지름을 입력");
	scanf("%f", &r);
	// area = 3.14 * r ^ 2;  이 경우 오류가 남. ^는 실수형이 불가능하도록 지정되어 있나봄
	area = 3.14 * r * r;

	printf("원의 면적: %f\n", area);

	printf("2510720 문예선\n");


	return 0;
	//0을 반환
}
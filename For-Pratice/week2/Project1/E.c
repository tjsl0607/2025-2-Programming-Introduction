#define _CRT_SECURE_NO_WARNINGS
//�� ���� �־� �۵���.

#include <stdio.h>
int main(void) {

double m, v, e;
printf("����(kg):");
scanf("%lf", &m);
printf("�ӵ�(km/s):");
scanf("%lf", &v);

e = m * v *v / 2.0;
//double�� ^�� ���� �Ұ�.

printf("�������(J):%f", e);

return 0;
}
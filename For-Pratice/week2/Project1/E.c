#define _CRT_SECURE_NO_WARNINGS
//맨 위에 둬야 작동함.

#include <stdio.h>
int main(void) {

double m, v, e;
printf("질량(kg):");
scanf("%lf", &m);
printf("속도(km/s):");
scanf("%lf", &v);

e = m * v *v / 2.0;
//double은 ^로 제곱 불가.

printf("운동에너지(J):%f", e);

return 0;
}
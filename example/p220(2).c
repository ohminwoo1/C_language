#include <stdio.h>
int main(void)
{
    double x, y;

    printf("실수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    printf("%f %f %f %f", x+y, x-y, x*y, x/y);

    return 0;
}

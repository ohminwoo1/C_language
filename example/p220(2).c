#include <stdio.h>
int main(void)
{
    double x, y;

    printf("�Ǽ��� �Է��Ͻÿ�:");
    scanf("%lf %lf", &x, &y);

    printf("%f %f %f %f", x+y, x-y, x*y, x/y);

    return 0;
}

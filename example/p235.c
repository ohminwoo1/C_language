#include <stdio.h>

int main(void)
{
    int n, d, r;

    printf("분자를 입력하시오: ");
    scanf("%d", &n);

    printf("분모를 입력하시오: ");
    scanf("%d", &d);

    if (d == 0)
        printf("0으로 나눌 수는 없습니다\n");
    else
    {
        r = n/d;
        printf("결과는 %d입니다.",r);
    }
    return 0;
}

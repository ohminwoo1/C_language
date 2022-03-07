#include <stdio.h>
int main(void)
{
    int t,a,m;

    printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
    scanf("%d %d",&t,&a);

    if (t > 17) {
        printf("요금은 10000원 입니다.");
    }else if (t<17 && a>12 && a<65) {
        printf("요금은 34000원 입니다.");
    }else if (t<17 && a<12 || a>65) {
        printf("요금은 25000원 입니다.");
    }

    return 0;
}

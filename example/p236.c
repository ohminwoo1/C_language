#include <stdio.h>
int main(void)
{
    int y;

    printf("연도를 입력하시오: ");
    scanf("%d", &y);

    if((y % 4 ==0 && y % 100 != 0) || y % 400 == 0)
        printf("%d년은 윤년입니다.",y);
    else
        printf("%d년은 윤년이 아닙니다.", y);
    return 0;
}

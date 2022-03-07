#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, rd=0;

    printf("선택하시오(1:가위, 2:바위 3:보) => ");
    scanf("%d",&x);

    rd = rand()%4;

    if (rd == 1 && x == 2 || rd == 2 && x == 3 || rd == 3 && x == 1)
    {
        printf("사용자가 이겼음");
    }
    else if (rd == 1 && x == 3 || rd == 2 && x== 1 || rd == 3 && x == 2)
    {
        printf("사용자가 졌음");
    }
    else
        printf("사용자가 비겼음");

    return 0;
}

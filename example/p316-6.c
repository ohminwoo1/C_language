#include <stdio.h>
int main(void)
{
    char n;
    int x,y;
    while (1) {
        printf("****************\n");
        printf("A---- Add\n");
        printf("S---- Subtract\n");
        printf("M---- Muitiply\n");
        printf("D---- Divide\n");
        printf("Q---- Quit\n");
        printf("****************\n");
        printf("연산을 선택하시오: ");
        scanf("%c",&n);
        printf("두수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d",&x,&y);
        if (n == 'A') {
            printf("%d",x+y);
        }else if (n == 'S') {
            printf("%d",x-y);
        }else if (n == 'M') {
            printf("%d",x*y);
        }else if (n == 'D') {
            printf("%d",x/y);
        }else   break;
        printf("\n");z
    }
    return 0;
}

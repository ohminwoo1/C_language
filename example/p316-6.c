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
        printf("������ �����Ͻÿ�: ");
        scanf("%c",&n);
        printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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

#include <stdio.h>
int main(void)
{
    char op;
    int x,y,r;

    printf("������ �Է��Ͻÿ�(��: 2 + 5)\n");
    printf(">> ");
    scanf("%d %c %d",&x,&op,&y);

    switch(op)
    {
        case '+':
            r=x+y;
            break;
        case '-':
            r=x-y;
            break;
        case '*':
            r=x*y;
            break;
        case '/':
            r=x*y;
            break;
        case '%':
            r=x%y;
            break;
        default:
            printf("�������� �ʴ� �������Դϴ�.");
            break;
    }
    printf("%d %c %d = %d",x,op,y,r);

    return 0;
}

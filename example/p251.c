#include <stdio.h>
int main(void)
{
    char op;
    int x,y,r;

    printf("수식을 입력하시오(예: 2 + 5)\n");
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
            printf("지원되지 않는 연산자입니다.");
            break;
    }
    printf("%d %c %d = %d",x,op,y,r);

    return 0;
}

#include <stdio.h>
int main(void)
{
    char op;

    printf("문자를 입력하시오: ");
    scanf("%c",&op);

    switch (op) {
        case 'a':printf("모음입니다."); break;
        case 'e':printf("모음입니다."); break;
        case 'i':printf("모음입니다."); break;
        case 'o':printf("모음입니다."); break;
        case 'u':printf("모음입니다."); break;
        default : printf("자음입니다."); break;
    }
    return 0;
}

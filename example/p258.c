#include <stdio.h>
int main(void)
{
    char op;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%c",&op);

    switch (op) {
        case 'a':printf("�����Դϴ�."); break;
        case 'e':printf("�����Դϴ�."); break;
        case 'i':printf("�����Դϴ�."); break;
        case 'o':printf("�����Դϴ�."); break;
        case 'u':printf("�����Դϴ�."); break;
        default : printf("�����Դϴ�."); break;
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    int n;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("�Էµ� ������ ¦���Դϴ�.");
    else
        printf("�Էµ� ������ Ȧ���Դϴ�.");

    return 0;
}

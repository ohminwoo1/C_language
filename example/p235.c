#include <stdio.h>

int main(void)
{
    int n, d, r;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    printf("�и� �Է��Ͻÿ�: ");
    scanf("%d", &d);

    if (d == 0)
        printf("0���� ���� ���� �����ϴ�\n");
    else
    {
        r = n/d;
        printf("����� %d�Դϴ�.",r);
    }
    return 0;
}

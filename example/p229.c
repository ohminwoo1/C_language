#include <stdio.h>

int main(void)
{
    int n;

    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &n);

    if(n < 0)
        n = -n;

    printf("���밪�� %d�Դϴ�.",n);

    return 0;
}

#include <stdio.h>
int main(void)
{
    int y;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &y);

    if((y % 4 ==0 && y % 100 != 0) || y % 400 == 0)
        printf("%d���� �����Դϴ�.",y);
    else
        printf("%d���� ������ �ƴմϴ�.", y);
    return 0;
}

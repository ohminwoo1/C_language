#include <stdio.h>
int main(void)
{
    int x, y, z,c;
    printf("3���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x>y) {
        c=y;
    }else c = x;

    if (c>z) {
        printf("���� ���� ������ %d�Դϴ�.",z);
    }else printf("���� ���� ������ %d�Դϴ�.",c);

    return 0;
}

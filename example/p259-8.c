#include <stdio.h>
int main(void)
{
    int t,a,m;

    printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
    scanf("%d %d",&t,&a);

    if (t > 17) {
        printf("����� 10000�� �Դϴ�.");
    }else if (t<17 && a>12 && a<65) {
        printf("����� 34000�� �Դϴ�.");
    }else if (t<17 && a<12 || a>65) {
        printf("����� 25000�� �Դϴ�.");
    }

    return 0;
}

#include <stdio.h>
int main(void)
{
    int h,a;

    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%d",&h);
    printf("���̸� �Է��Ͻÿ�: ");
    scanf("%d",&a);

    if (h>=140 && a>=10) {
        printf("Ÿ�� �����ϴ�.");
    }else printf("�˼��մϴ�");

    return 0;
}

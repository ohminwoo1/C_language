#include <stdio.h>
int main(void)
{
    float h,w;

    printf("ü�߰� Ű�� �Է��Ͻÿ�: ");
    scanf("%f %f",&h,&w);

    if ((h-100)*0.9 < w) {
        printf("��ü�� �Դϴ�.");
    }else printf("��ü���� �ƴմϴ�.");

    return 0;
}

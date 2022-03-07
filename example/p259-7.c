#include <stdio.h>
int main(void)
{
    float h,w;

    printf("체중과 키를 입력하시오: ");
    scanf("%f %f",&h,&w);

    if ((h-100)*0.9 < w) {
        printf("과체중 입니다.");
    }else printf("과체중이 아닙니다.");

    return 0;
}

#include <stdio.h>
int main(void)
{
    int h,a;

    printf("키를 입력하시오(cm): ");
    scanf("%d",&h);
    printf("나이를 입력하시오: ");
    scanf("%d",&a);

    if (h>=140 && a>=10) {
        printf("타도 좋습니다.");
    }else printf("죄송합니다");

    return 0;
}

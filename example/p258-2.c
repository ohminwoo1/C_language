#include <stdio.h>
int main(void)
{
    int x,y;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&x);
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&y);
    
    if (x % y == 0) {
        printf("����Դϴ�.");
    }else   printf("����� �ƴմϴ�.");

    return 0;
}

#include <stdio.h>
int main(void)
{
    int x, y, z,c;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x>y) {
        c=y;
    }else c = x;

    if (c>z) {
        printf("제일 작은 정수는 %d입니다.",z);
    }else printf("제일 작은 정수는 %d입니다.",c);

    return 0;
}

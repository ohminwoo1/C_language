#include <stdio.h>
int main(void)
{
    int n=0,sum=0;

    while (sum<10000) {
        n++;
        sum+=n;
    }
    
    sum-=n;
    n--;

    printf("1���� %d������ ���� %d�Դϴ�.",n,sum);

    return 0;
}

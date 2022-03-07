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

    printf("1부터 %d까지의 합이 %d입니다.",n,sum);

    return 0;
}

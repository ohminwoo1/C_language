#include <stdio.h>
int main(void)
{
    int n;
    do {
        printf("������ ����(����: -1): ");
        scanf("%d",&n);
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    } while(n!=-1);
}

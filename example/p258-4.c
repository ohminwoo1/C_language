#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, rd=0;

    printf("�����Ͻÿ�(1:����, 2:���� 3:��) => ");
    scanf("%d",&x);

    rd = rand()%4;

    if (rd == 1 && x == 2 || rd == 2 && x == 3 || rd == 3 && x == 1)
    {
        printf("����ڰ� �̰���");
    }
    else if (rd == 1 && x == 3 || rd == 2 && x== 1 || rd == 3 && x == 2)
    {
        printf("����ڰ� ����");
    }
    else
        printf("����ڰ� �����");

    return 0;
}

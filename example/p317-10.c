#include <stdio.h>
int main(void)
{
    double result=1,r=1;
    int n;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf",&r);
    printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d",&n);

    for(int i=0; i<n;i++){
        result*=r;
    }
    printf("������� %f",result);
    return 0;
}

#include <stdio.h>
int main(void)
{
    double result=1,r=1;
    int n;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf",&r);
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d",&n);

    for(int i=0; i<n;i++){
        result*=r;
    }
    printf("결과값은 %f",result);
    return 0;
}

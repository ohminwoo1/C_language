#include <stdio.h>
int main(void)
{
    int count;
    for (int i = 2; i <= 100; i++) {
        count = 0;
        for (int j = 2; j < i ; j++) {
            if (i%j == 0) {
                count ++;
            }
        }
        if (count == 0) {
            printf("%d ",i);
        }
    }
    return 0;
}

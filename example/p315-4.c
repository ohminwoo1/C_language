#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 7; i++) {
        for (int k = 0; k < 7-i; k++l) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

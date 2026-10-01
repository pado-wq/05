#include <stdio.h>

int main(void)
{
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    printf("절대값: %d\n", number);

    return 0;
}
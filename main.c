#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int sum = 0;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &number);

    if (number < 1) {
        printf("1 이상의 정수를 입력하세요.\n");
        return 0;
    }

    for (i = 1; i <= number; i++) {
        sum += i;
    }

    printf("1부터 %d까지의 합: %d\n", number, sum);

    return 0;
}
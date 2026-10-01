#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("계산식을 입력하세요 (예: 2 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;

        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;

        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;

        case '/':
            if (b == 0) {
                printf("0으로 나눌 수 없습니다.\n");
            } else {
                printf("%d / %d = %d\n", a, b, a / b);
            }
            break;

        default:
            printf("지원하지 않는 연산자입니다.\n");
            break;
    }

    return 0;
}
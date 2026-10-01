#include <stdio.h>

int main(void)
{
    int c;
    int num = 0;

    printf("문자열을 입력하세요: ");

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= '0' && c <= '9') {
            num++;
        }
    }

    printf("숫자 문자의 개수: %d\n", num);

    return 0;
}
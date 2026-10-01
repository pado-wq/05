#include <stdio.h>

int main(void)
{
    int answer = 59;
    int guess;
    int count = 0;

    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);

        count++;

        if (guess < answer) {
            printf("입력한 숫자가 정답보다 작습니다.\n");
        } else if (guess > answer) {
            printf("입력한 숫자가 정답보다 큽니다.\n");
        } else {
            printf("정답입니다!\n");
        }

    } while (guess != answer);

    printf("총 %d번 시도했습니다.\n", count);

    return 0;
}
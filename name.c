#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int check(float x, float y) {
    if (x <= 0) {
        if (x >= -3.0f && y <= (x + 3.0f) && y >= (-x - 3.0f)) {
            return 1;
        }
    }
    else {
        if (y >= 0.0f && ((x * x) / 16.0f + (y * y) / 9.0f <= 1.0f)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    system("chcp 1251");
    puts("функция");

    float x, y;
    int s = 1;
    while (s) {
        puts("Введите x:");
        scanf("%f", &x);

        puts("Введите y:");
        scanf("%f", &y);

        int res = check(x, y);

        if (res == 1) {
            printf("Точка принадлежит области\n");
        }
        else {
            printf("Точка не принадлежит области\n");
        }

        puts("Завершить? (Введите 0)");
        scanf("%d", &s);
    }

    return 0;
}
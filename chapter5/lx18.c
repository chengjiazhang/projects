/*
输入学生的分数并显示出分布情况
 */
#include <stdio.h>
#define number 80
int main() {
    int i, j;
    int num;
    int tensu[number];
    int bunpu[11] = {0};
    printf("请输入学生人数：\n");
    do {
        scanf("%d", &num);
        if (num < 1 || num > number)
            printf("请输入1-%d的数：", number);
    } while (num < 1 || num > number);
    printf("请输入%d人的分数。\n", num);
    for (i = 0; i < num; i++) {
        printf("%2d号：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[tensu[i] / 10]++;
    }

    puts("\n---分布图---");
    printf("  100:");
    for (j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    for (i = 9; i >= 0; i--) {
        printf("%2d-%2d:", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;


}
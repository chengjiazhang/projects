/*
编写一段程序，对代码清单9-7进行如下改写。
1、将字符串的个数3改为更大的数，将其值定义为对象式宏。
 2、在最初的for语句读取"$$$$$”时停止读取操作。
3、第二个for语句显示"$$$$$"前输入的所有字符串。
 */
#include <string.h>
#include <stdio.h>
#define NUMBER 5

int main() {
    int i;
    char s[NUMBER][128];

    for (i = 0; i < NUMBER; i++) {


        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (strcmp (s[i], "$$$$$") == 0)
            break;
    }

    for (i = 0; i < NUMBER; i++) {
        if (strcmp(s[i], "$$$$$") == 0)
            break;
        printf("s[%d]=\"%s\"\n", i, s[i]);
    }

    return 0;
}
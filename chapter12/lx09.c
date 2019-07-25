/*
将5名学生的身高进行升序排列
 */
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

/*表示学生的结构体*/
typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;


} Student;
/*将x和y指向的学生进行互换*/
void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*将学生数组a的前n个元素按身高进行升序排列*/
void sort_by_height(Student a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

int main(void) {
    int i;
    Student std[] = {
        {"Sato", 178, 61.2, 80000},
        {"Sanaka", 175, 62.5, 73000},
        {"Takao", 173, 86.2, 0},
        {"Mike", 165, 72.3, 70000},
        {"Masaki", 179, 77.5, 70000},
    };

    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);

    sort_by_height(std, NUMBER);

    puts("\n按身高排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
}
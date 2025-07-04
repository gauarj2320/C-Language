/* 7. Write a recursive function to print squares of first N natural numbers */
#include<stdio.h>

void print_num(int x);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    print_num(num);
    printf("\n");
    return 0;
}

void print_num(int x) {
    if (x <= 0) {
        return;
    }
    print_num(x - 1);
    printf("%d ", x*x);
}

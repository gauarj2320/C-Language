// Write a program to print unit digit of a given number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The unit digit of number is %d", (num % 10));
    return 0;
}
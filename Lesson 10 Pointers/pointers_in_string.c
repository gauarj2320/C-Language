//pointer application in string
#include<stdio.h>
int length(char*);
int main()
{
    int l;
    char str[10];
    fgets(str,10,stdin);
    l=length(str);
    printf("Length of string is:%d\n",l);
    return 0;
}

int length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i-1;
    
}
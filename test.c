#include<stdio.h>
int main()
{
    int a=3;
    int *p = &a;
    int d = p;
    printf("%d", d);
    return 0;
}
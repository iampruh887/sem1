#include<stdio.h>
int main()
{
    int a[3][2] = {{1, 1},{2,34},{43,4}};
    int *ptr = &a[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", *(a+i*3+j));
        }
    }    
    return 0;
}
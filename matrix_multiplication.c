#include<stdio.h>
void main()
{
    int p[2][2]={0} ;
    int arr1[2][2] = {{1, 1},{1, 1}};
    int arr2[2][2] = {{1, 1},{1, 1}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            p[i][j]= 0;
            for(int k=0;k<2;k++)
            {
                p[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            printf("%d   ", p[i][j]);
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int data[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d ", &data[i][j]);
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            int key = data[i][j];
            int k = j-1;
            while(key>data[i][j] && k>=0)
            {
                data[i][k+1] = data[i][k];
                k--;
            } 
            data[i][k+1] = key;
        }
        printf("STUDENT: %d | SUBJECT- HIGHEST: %d LOWEST: %d", i, data[])
    }
}//code not complete , but doable
/*see question here: 
WCP to store the marks of m students in n subjects in an array. Then, report the
highest marks and lowest marks of each student with subject number.*/
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    for(int i=0;i<SIZE;i++)
        arr[i] = (i+1);
    int x;
    scanf("%d", &x);
    for(int i=0;i<SIZE;i++)
        printf("%d\t", arr[i]);
    int del = x-1;
    for(int i=del;i<SIZE-1;i++)
    {
        arr[i] = arr[(i+1)];
    }
    arr[(SIZE-1)] = NULL; 
    printf("\n");
    for(int i=0;i<SIZE-1;i++)
        printf("%d\t ", arr[i]);
    return 0;
}
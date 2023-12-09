#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    for(int i=SIZE-1;i>=0;i--)
        arr[i] = (SIZE*SIZE)-(SIZE-i)*(SIZE-i);        
    for(int i=0;i<SIZE;i++)
        printf("%d ", arr[i]);
    for(int i=1;i<SIZE;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(key>arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("\n");
    for(int i=0;i<SIZE;i++)
        printf("%d ", arr[i]);
    return 0;
}
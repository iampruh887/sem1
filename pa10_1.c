#include<stdio.h>
int* max_ele(int* a, int* b, int c)
{
    if(*(a+c)>*(b+c))
        return a+c;
    else 
        return b+c;
}
int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 0, 6};
    int arr3[3];
    for(int i=0;i<3;i++)
    {
        arr3[i] = *(max_ele(arr1, arr2, i));
    }
    for(int i=0;i<3;i++)
        printf("%d ", arr3[i]);
    return 0;
}
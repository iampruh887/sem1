#include<stdio.h>
void insertionSort(int *ptr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = *(ptr + i);
        int j = i - 1;

        while (j >= 0 && key < *(ptr + j))
        {
            *(ptr + (j + 1)) = *(ptr + j);
            j--;
        }

        *(ptr + (j + 1)) = key;
    }
}

int main()
{
    int ar1[] = {1, 2, 4, 32, 432, 42, 3, 2};
    int ar2[] = {3, 4, 2, 1, 43, 13, 5322, 434};
    int k = sizeof(ar1)/sizeof(int) + sizeof(ar2)/sizeof(int);
    int ar3[k];
    int i;
    for(i=0;i<sizeof(ar1)/sizeof(int);i++)
    {
        ar3[i] = ar1[i];
    }
    int c=0;
    for(i;i<k;i++)
    {
        ar3[i] = ar2[c];
        c++;
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ", ar3[i]);
    }
    printf("\n");
    int *ptr = &ar3[0];
    int l = sizeof(ar3)/sizeof(int);
    insertionSort(ptr, l);
    
    for(int i=0;i<l;i++)
    {
        printf("%d ", ar3[i]);
    }
}
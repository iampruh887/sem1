#include<stdio.h>
void cnc(char  arr[], char arr2[] )
{
    int k = sizeof(arr)/sizeof(char) + sizeof(arr2)/sizeof(char);
    char re[k];
    int l=0;
    while(arr[l]!='\0')
    {
        re[l]=arr[l];
        l++
    }
    re[l] = ' ';
    l++;
    int d=0;
    while(arr2[d]!='\0')
    {
        re[l] = arr2[d];
        l++;
        d++;
    }    
}
int cmp(char arr[], char arr2[])
{
    if(sizeof(arr)/sizeof(char) != sizeof(arr2)/sizeof(char))
    {
        printf("strings are not equal");
        return 0;
    }
    int flag=0;
    int l=0;
    int k = sizeof(arr)/sizeof(char) + sizeof(arr2)/sizeof(char);
    while(arr[l]!='\0' && arr2[l]!='\0' && l<k)
    {
        if(arr[l] != arr2[l])
        {
            flag = 1;
            break;
        }
        else 
            flag = 0;
    l++;
    }
    if(flag == 0)
    {
        
    }
}
    
}
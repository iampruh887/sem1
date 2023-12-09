#include<stdio.h>
int main()
{
    int ar[40];
    for(int i=1;i<41;i++)
    {
        ar[i-1] = i;
        printf("%d -> %d\n", i, ar[i-1]);
    }

    int odd=0, even =0;
    for(int i=0;i<40;i++)
    {
        if(ar[i]%2==0)
            even++;
        else if( ar[i]%2==1)
            odd++;
    }
    printf("%d\n", ar[0]);
    int ee[even], oo[odd];
    even = 0; odd=0;
    for(int i=0;i<40;i++)
    {
        if(ar[i]%2==0)
        {
            ee[even] = ar[i];
            even ++;
        }
        else if( ar[i]%2==1)
        {
            oo[odd] = ar[i];
            odd++;
        }
    }
    for(int i=0;i<even;i++)
        printf("%d\t", ee[i]);
    printf("\n");
    for(int i=0;i<odd;i++)
        printf("%d\t", oo[i]);
    return 0;
}
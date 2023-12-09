#include<stdio.h>
#include<math.h>
int mirror(int a)
{
    int flag=0;
    int k,mir=0;
    while(a!=0)
    {
        k=a%10;
        a=a/10;
        switch(k)
        {
            case 3:
                flag=1;
                break;
            case 4:
                flag=1;
                break;
            case 6:
                flag=1;
                break;
            case 7:
                flag=1;
                break;
            case 9:
                flag=1;
                break;
            case 2: 
                k=5;
                break;
            case 5:
                k=2;
                break;
        }
        mir=mir*10+k;
    }
    if(flag==0)
        return mir;
    else 
    {
        // printf("error , the number cannot be reversed up to down!\n");
        return 0;
    }
}
int prime(int a)
{
    int flag=0;
    if(a==1)
        flag=1; 
    for(int i=2;i<sqrt(a);i++)
        if(a%i==0)
            flag=1;
    return flag;//works
}
int updown(int a)
{
    int flag=0;
    int k, upd=0;
    while(a!=0)
    {
        k=a%10;
        a=a/10;
        switch(k)
        {
            case 4:
                flag=1;
                break;
            case 6:
                flag=1;
                break;
            case 7:
                flag=1;
                break;
            case 9:
                flag=1;
                break;
            case 2: 
                k=5;
                break;
            case 5:
                k=2;
                break;
        }
        upd=upd*10+k;
    }
    if(flag==0)
        return upd;
    else 
    {
        // printf("error , the number cannot be reversed up to down!\n");
        return 0;
    }
}
int main()
{
    int a, b;
    printf("enter the range from: ");
    scanf("%d", &a);
    printf(" to: ");
    scanf("%d", &b);
    printf("the list of alpha numbers is:");
    for(int i=a;i<=b;i++)
    {
    // printf("\n %d", reverse(i));
    // printf("\n%d", prime(i));
    // printf("\n%d", updown(i));
        if(prime(i)==0)
        {
            // printf("1  ");
            if(updown(i))
            {
                // printf("2  ");
                if(prime(updown(i))==0)
                {
                    // printf("3  ");
                    if(prime(mirror(i))==0)
                    {
                        printf("\n%d", i);
                    }
                    else continue;
                }
                else continue;
            }
            else continue;
        }
        else 
            continue;
    }
    return 0;
}
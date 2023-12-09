#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    if(a==b)
    {
        printf("0");
        return 0;
    }
    else if(a>b)
    {
        printf("%d", a-b);
        return 0;
    }
    else{
        c=0;
        while(b!=a)
        {
            if(b>a)
            {
                if(b%2==0)
                {
                    b=b/2;
                    c++;
                }
                else
                {
                    b += 1;
                    c++;
                }
            }
            else
            {
                c+= a-b;
                break;
            }
            // printf("%d\n", b);
        }
        printf("\n%d", c);
        return 0;
    }
}

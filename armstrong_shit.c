#include<stdio.h>
#include<math.h>
int arms(int n)
{
    int dig=0, temp;
    int ar=0;
   
    temp = n;
    while(n!=0)
    {
        n=n/10;
        dig++;
    }
    n = temp;
    while(n!=0)
    {
        int r=n%10;

        ar = ar + pow(r, dig);

        n=n/10;
    }
    if(ar==temp)
        return 1;
    else 
    return 0;
}
int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   for(int i=a;i<=b;i++)
   {
    int k = arms(i);
    if(k)
        printf("%d\n", i);
   }
    return 0;
}
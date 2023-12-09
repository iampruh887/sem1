#include<stdio.h>
int main()
{
    char str[101];
    scanf("%[^\n]s" ,str);
    int i=0;
    int dots=0;
    while(str[i]!='\0')
    {
        if(str[i]!='.')
        {
            int j=i;
            while(str[j]!= ' ' && j!=0)
            {
                j--;    
            }
            
            while(j<=i)
        }
        i++;
    }
}
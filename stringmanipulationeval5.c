#include<stdio.h>
int main()
{
    char str[43];
    scanf("%[^\n]s", str);
    // int len = strlen(str);
    int k=str[0];
    if(k>=97 && k<=122)
    {
        k=k-32;
        str[0] = k;
    }
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            int l = str[i+1];
            if(l>=97 && l<=122)
            {
                l=l-32;
                str[(i+1)] = l;
            }            
        }    
        i++;
    }
    printf("%s", str);
    return 0;
}
#include <stdio.h>
int numDigits(int a) //function to calculate no. of digits
{
    int dig=0;
    while(a!=0)
    {
        a=a/10;
        dig++;
    }
    return dig;
}
int decimalToBinary(int d)//function to convert decimal to binary
{
    int b[32];
    int i=0,num=0;
    while(d>0)
    {
        b[i]=d%2;
        d=d/2;
        i++;
    }

      for(int j=i-1;j>=0;j--)
    {
        num=num*10+b[j];
    }
    return num;
}

int palindromeCheck(int a)//function to check for palindrome
{
    int b=0, temp;
    temp = a;
    while(a!=0)
    {
        b=10*b+(a%10);
        a=a/10;
    }
    if(temp==b)
        return 1;
    else 
        return 0;
}
int main()
{
    int a,b,c,i=0,n,num=0,bin=0,Time[16],l=0, Regression[16], temp,dig, newd;
    scanf("%d", &n);
    temp=n;
    while(!(n==0 || n==1))
    {
        Regression[i]=n%2;
        n=n/2;
        i++;
    }
    dig=i;
    Regression[i]=n;//filling up the Regression array
    while(l<=dig)
    {
        Time[l]=Regression[i];
        l++;i--;
    }
/*going forward in Time[] & storing 
    the secret number across Time[]*/
    n=temp;
    i=dig;
    for(int d=0;d<=i;d++)
        bin=10*bin+Time[d];
//Printing Time[] after secret number was spread across Time[]
    printf("%d", bin);
    printf("\t<SECRET NUMBER STORED>\n");
    for(int j=(n-1); j>=0;j--)
    {
        if(palindromeCheck(j))
        {
            num = j;
            break;
        }
    }
    b=decimalToBinary(num);
    c=b;
    for(int j=dig;j>=0;j--)
    {
        if(b==0)
            break;
        Time[j]=(b%10);
        b=b/10;
    }
    if(numDigits(c)<numDigits(bin))
    {
        newd = numDigits(bin)-numDigits(c)-1;
    for(int j=newd;j>=0;j--)
        Time[j]=0;
    }//filling up the Time[] in reverse order with the nearest
    //palindrome number
    for(int j=0;j<=dig;j++)
    {
        printf("%d", Time[j]);
    }
//Printing Time[] after the secret number was 
//changed with palindrome
    printf("\t<TIME ENCRYPTED>\n");
    for(int j=0;j<=dig;j++)
    {
        Time[j]=0;
    }
    for(int j=0;j<=dig;j++)
    {
        printf("%d", Time[j]);
    }
//destroying and printing the destroyed Time[]
    printf("\t<TIME GOT DESTROYED>\n");
    printf("Congratulations! You have become TIMELESS\n");
    printf(">>THE SEEKERS OF THE END HAVE NOTICED YOU<<\n");
    return 0;
}
#include<stdio.h>
int conumchek(int a, int b)//checks for similarity in digits of two numbers
{
    int temp1,temp2,dig=0,key,k,num=0,rev=0;
    temp1=a;temp2=b;
    while(a>0)//calculates number of digits
    {
        dig++;
        a/=10;
    }
    a=temp1;
    int digits[dig];//array declaration to store the digits of the other number
    for(int i=0;i<dig;i++)
    {
        digits[i]=b%10;
        b=b/10;
    }
    for(int i=1;i<dig;i++) //using insertion sort on the other number 
    {
        key=digits[i];
        k=i-1;
        while(digits[k]>key && k>=0)
        {
            digits[k+1]=digits[k];
            k--;
        }
        digits[k+1]=key;
    }
    for(int i=0;i<dig;i++)//calculating the number from array
    {
        num=10*num+digits[i];
    }
    while(num>0)//calculating the highest possible number generated combination of the digits of the other number
    {
        rev=10*rev+(num%10);
        num=num/10;
    }
    if(rev==a)//checking if the highest combination of 'b' is equal to the highest possible combination of the given input i.e.'a'
        return 1;
    else    
        return 0;
}
int prime(int a) //function to check whether a number is prime or not
{
    int flag=1; 
    if (a<=1) {
        return 0;
    }
    for (int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            flag=0; 
            break;
        }
    }
    return flag;
}

int fact(int a) // function to calculate the factorial of a given number
{
    int f=1;
    if(a==0)
        return 1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,dig=0,temp1,temp2,key,k,rev=0,num=0,a;
    printf("Total number of patients: ");
    scanf("%d", &n);
    temp1=n;
    while(n>0)//calculates the no. of digits in the given input
    {
        n=n/10;
        dig++;
    }
    n=temp1;//restores the value of n
    int digits[dig];//array declaration
    for(int i=0;i<dig;i++)//extracting the digits of the number into the array
    {
        digits[i]=n%10;
        n=n/10;
    }
    n=temp1;
    for(int i=1;i<dig;i++) //using insertion sort to store the digits of the number in ascending order in the array
    {
        key=digits[i];
        k=i-1;
        while(digits[k]>key && k>=0)
        {
            digits[k+1]=digits[k];
            k--;
        }
        digits[k+1]=key;
    }
    for(int i=0;i<dig;i++)//gives the smallest possible combination of the number
    {
        num=10*num+digits[i];
    }
    while(num>0)//reversing the smalles possible number to generate largest possible number
    {
        rev=10*rev+(num%10);
        num=num/10;
    }
    int faccc=fact(dig);
    printf("The maximum number is: %d\n", rev); // prints the maximum of all combinations of the number
    
    printf("Possible combinations of patient id are: %d\n", faccc);
    int idkwhatarray[faccc];//array declaration 
    int maxarr=0;
    int counter;
    for(int i=rev;i>=num;i--)// storing all possible combinations of the number in the previously declared array
    {
        if(conumchek(rev,i))
        {   
            // printf("[%d]\t", i);
            idkwhatarray[maxarr]=i;
            maxarr++;
        }
        if(maxarr==faccc)
            break;
    }
   
    int maxid=0;
    for(int i=0;i<faccc;i++)//printing patient ids for appropriate ranks 
    {
        if(prime(i))
        {
            if(i%10==3||i%10==7)
            {
                printf("patient id at Rank %d is: %d\n", i, idkwhatarray[i-1]);
            }
        }
    }
    return 0;
}   
#include <stdio.h>
int main(void)
{
    
	int n,i,s=0,s2,j,m;
	    scanf("%d",&n);
	    s2=(n*(n+1))/2;
	    //printf("%d\n",s2);
	    int arr[n];
	    for(j=0;j<n-1;j++)
	    {
	      scanf("%d",&arr[j]);
	    }
	      for(j=0;j<n-1;j++)
	    {
	      s+=arr[j];
	    }
	    m=s2-s;   
	    printf("%d\n",m); 
	return 0;
}


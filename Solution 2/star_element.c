#include <stdio.h>
int main()
{
	int t;
    long a[100000],max,b[100000];
	scanf("%d",&t);
	while(t--)
	{
	    long int n;
	    scanf("%ld",&n);
	    int i;
	    for(i=0;i<n;i++)
	      {
	          scanf("%ld",&a[i]);
	      }
	    max=a[n-1];
	    int count=0;
	    b[count++]=a[n-1];
	    int flag=0;
	    for(i=n-2;i>=0;i--)
	    {
	        if(max<a[i])
	        { 
	            flag=0;
	            max=a[i];
	            b[count++]=a[i];
	        }
	        else if(max==a[i])
	            {
	                flag++;
	            }
	    }
	    for(i=count-1;i>=0;i--)
	     {
	         printf("%ld ",b[i]);
	     }
	    if(flag==0)
	     {
	         printf("\n%ld\n",max);
	     }
	    else
	     {
	         printf("\n-1\n");
	     }
	 }
	return 0;
}

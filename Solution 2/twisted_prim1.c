#include <stdio.h>
#include<math.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    int count= 0;
	    int count1= 0;
	    int rev= 0;
	    int i;
	    scanf("%d",&n);
	    for(i=2;i<n;i++) 
	    {
	        if((n%i)==0)
	        {
	         count++;
	         break;
	        }
	    }
	    while(n>0) 
	    {
	        rev=rev*10+n%10;
	        n/=10;
	    }
	    for(i=2;i<rev;i++)
	    {
	        if((rev%i)==0)
	        {
	         count1++;
	         break;
	        }
	    }
	    if(count==0 && count1==0)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	
	
	return 0;
}

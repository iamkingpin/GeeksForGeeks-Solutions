#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d",&n);
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    scanf("%d",&m);
	    int max=0;
	    int count=0;
	    int left=0,right=0;
	    while(right<n)
	    {
	        if(count<=m)
	        {
	            if(a[right]==0)
	            {
	                count++;
	            }
	            right++;
	        }
	        
	        if(count>m)
	        {
	           if(a[left]==0)
	           {
	               count--;
	           }
	            left++;
	        }
	        if(right-left>max)
	        {
	            max=right-left;
	        }
	    }
	        printf("%d\n",max);
	}
	return 0;
}

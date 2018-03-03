#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,n;
	    scanf("%d%d%d",&x,&y,&n);
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int count=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<=x)
	        {
	            count++;
	        }
	        else
	        {
	            while(a[i]>x)
	            {
	                a[i]=a[i]-x+y;
	                count++;
	            }
	            count++;
	        }
	       
	    }
	     printf("%d\n",count);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int t,i,n,k,j;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	    scanf("%d",&n);
	    int arr[n];
	    for (i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(int p=n-1;p>=0;p--)
	    {
	        // rotation
	        int a = arr[p];
	        for(j=p;j>0;j--)
	        {
	            arr[j]=arr[j-1];
	        }
	        arr[0]=a;
	        // deleting
	        int c=n-p;
	        if(c>1)
	        {
	            if(n-1-c<=p)
	            {
	                for(j=p+1-c;j<p;j++)
	                {
	                    arr[j]=arr[j+1];
	                }
	            }
	            else
	            {
	                for(j=0;j<p-1;j++)
	                {
	                    arr[j]=arr[j+1];
	                }
	            }
	        }
	    }
	    printf("%d\n",arr[0]);
	}
	return 0;
}

#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int b[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int j=0;
	    int k=1;
	    for(i=0;i<n;i++)
	    {
	       if(a[i]>0)
	       {
	           b[j]=a[i];
	           j+=2;
	       }
	        if(a[i]<0)
	       {
	           b[k]=a[i];
	           k+=2;
	       }
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",b[i]);
	    }
	    printf("\n");
	}
	return 0;
}

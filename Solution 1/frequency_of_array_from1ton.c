#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i,j;
	    int count;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=1;i<=n;i++)
	    {
	      count=0;
	      for(j=0;j<n;j++)
	      {
	           if(a[j]==i)
	            {
	           count++;
	            }
	      }
	       printf("%d ",count);
	    }
	    printf("\n");
	}
	return 0;
}

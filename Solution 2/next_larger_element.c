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
	    int i,j;
    	for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int max;
	    for(i=0;i<n;i++)
	    {
	        max=a[i];
	        for(j=i+1;j<n;j++)
	        {
	            if(a[j]>max)
	            {
	                printf("%d ",a[j]);
	                max=a[j];
	                break;
	            }  
	        }
	        if(max==a[i])
	        {
	            printf("-1 ");   
	        }
	    }
	    printf("\n");
	}
	return 0;
}

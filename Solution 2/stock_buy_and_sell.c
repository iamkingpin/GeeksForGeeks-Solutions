#include <stdio.h>
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
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    i=0;
	    int flag=0;
	    while(i<n)
	    {
	       int j=i+1;
	       int k=i;
	       int count=0;
	       while(a[k]<a[j] && j<n)
	        {
	            j++;
	            k++;
	            count++;
	        }
	        if(count==0)
	        {
	            j++;
	            k++;
	        }
	        else
	        {
	            printf("(%d %d) ",i,k);
	            flag=1;
	        }
	        i=k;
	    }
	    if(flag==0)
	    {
	        printf("No Profit");
	    }
	    printf("\n");
	}
	return 0;
}

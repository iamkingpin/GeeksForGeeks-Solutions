#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[100];
	    int count=1;
	    int max=1;
	    int i,j;
	    int temp;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]>a[j])
	            {
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    for(i=0;i<n-1;i++)
	    {
	        if((a[i+1]-a[i])==1)
	        {
	            count++;
	        }
	        else
	        {
	            if(count>max)
	            {
	                max=count;
	            }
	            count=1;
	        }
	    }
	    if(count>max)
	    {
	         max=count;
	    }
	    printf("%d\n",max);
	}
	return 0;
}

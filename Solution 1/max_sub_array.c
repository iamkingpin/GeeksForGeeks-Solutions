#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,n;
	    scanf("%d",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int sum = 0;
	    int s,k;
	    int max=-1;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            s=i;
	            sum = 0;
	        }
	        else
	        sum=-1;
	        while(arr[i]>=0)
	        {
	            sum=sum+arr[i];
	            i++;
	            if(i>=n)
	            break;
	        }
	        if(sum>=max)
	        {
	            max = sum;
	            k=s;
	        }
	    }
	    while(arr[k]>=0 && k<n)
	    {
	        printf("%d ",arr[k]);
	        k++;
	    }
	    printf("\n");
	}
	return 0;
}

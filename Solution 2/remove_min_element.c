#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[1000];
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    int min=1000;
	    int max=0;
	    int max_len=0;
	    for(int i=0;i<n;i++)
	    {
	        min=1000;
	        max=0;
	        for(int j=i;j<n;j++)
	        {
	            if(arr[j]>max)
	            max=arr[j];
	            if(arr[j]<min)
	            min=arr[j];
	            if(2*min>max && j-i+1>max_len)
	            {
	                max_len=j-i+1;
	            }
	            if(2*min<max)
	            break;
	        }
	    }
	    printf("%d\n",n-max_len);
	}
	return 0;
}

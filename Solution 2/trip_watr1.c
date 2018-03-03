#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,result=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int high=n-1;
        int low=0,l=0,r=0;
        while(low<=high)
        {
            if(arr[low]<arr[high])
            {
                if(arr[low]>l)
                {
                    l=arr[low];
                }
                else
                {
                    result=result+l-arr[low];
                }
                low++;
            }
            else
            {
                if(arr[high]>r)
                {
                    r=arr[high];
                }
                else
                {
                    result=result+r-arr[high];
                }
                high--;
            }
        }
        printf("%d\n",result);
    }
	//code
	return 0;
}

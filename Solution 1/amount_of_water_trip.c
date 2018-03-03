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
        int low=0,left=0,right=0;
        while(low<=high)
        {
            if(arr[low]<arr[high])
            {
                if(arr[low]>left)
                {
                    left=arr[low];
                }
                else
                {
                    result+=left-arr[low];
                }
                low++;
            }
            else
            {
                if(arr[high]>right)
                {
                    right=arr[high];
                }
                else
                {
                    result+=right-arr[high];
                }
                high--;
            }
        }
        printf("%d\n",result);
    }
	//code
	return 0;
}

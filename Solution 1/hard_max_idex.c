#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
          {
             scanf("%d",&arr[i]);
          }
        int max=0;
        for(i=0;i<n;i++)
        {
            if(max==n-1)
               {
                    break;
               }
            for(j=0;j<n;j++)
                {
                    if(max<(j-i) && arr[i]<=arr[j])
                    {
                        max=j-i;
                    }
                }
        }
        printf("%d\n",max);
    }
	return 0;
}

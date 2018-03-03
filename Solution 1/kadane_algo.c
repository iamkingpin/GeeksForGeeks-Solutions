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
        int sum=0,sum1=0;
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sum=a[0];
        for(i=0;i<n;i++)
        {
            sum1=sum1+a[i];
            
            if(sum1>sum)
            {
                sum=sum1;
            }
            if(sum1<0)
            {
                sum1=0;
            }
            
        }
        printf("%d\n",sum);
    }
	return 0;
}

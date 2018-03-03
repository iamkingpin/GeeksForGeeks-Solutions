#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,flag=0;
        scanf("%d",&n);
        int a[n];
        int sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum2+=a[i];
        }
        int result=sum2;
        for(i=0;i<n;i++)
        {
            sum1+=a[i];
            sum2=sum2-sum1-a[i+1];
            if(sum1==sum2)
            {
                flag=1;
                break;
            }
            else
            {
                sum2=result;
            }
        }
        if(flag==1||n==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
return 0;
}

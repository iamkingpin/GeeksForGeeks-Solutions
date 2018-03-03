#include<stdio.h>
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int a[1000];
            int i,n;
            scanf("%d",&n);
            a[1]=1;
            a[2]=2;
            // dividing by 1000000007 coz in question it is mentioned  output % 10^9+7
            for(i=3;i<=n;i++)   
            {
                a[i]=a[i-1]%1000000007+a[i-2]%1000000007;
            }
            printf("%d\n",a[n]%1000000007);
        }
        return 0;
            
        }

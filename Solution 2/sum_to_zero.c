#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
     	int t;
        scanf("%d",&t); 
        while(t--)
        {
            int n;
            scanf("%d",&n);
            int a[n];
            int i,j;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            int x=0;
            int y=1;
            int min=a[0]+a[1];
            int sum=0;
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                 sum=a[i]+a[j];
                 if(abs(min)>abs(sum))
                 {
                     min=sum;
                     x=i;
                     y=j;
                 }
                 if(abs(min)==abs(sum))
                   {
                       if(abs(a[x])+abs(a[y])<abs(a[i])+abs(a[j]))
                       {
                           x=i;
                           y=j;
                       }
                   }
                }
            }
            if(a[x]>a[y])
            {
                printf("%d %d\n",a[y],a[x]);
            }
            else
            {
                printf("%d %d\n",a[x],a[y]);
            }
        }
	return 0;
}

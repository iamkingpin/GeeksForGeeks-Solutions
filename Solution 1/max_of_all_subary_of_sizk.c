#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d,i,j,max=0;
        scanf("%d%d",&n,&d);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<=n-d;j++)
        {
            for(i=j;i<(j+d);i++)
            {
                if(a[i]>max)
                max=a[i];
            }
            printf("%d ",max);
            max=0;
            
        }
        
        printf("\n");
        
    }
	//code
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
		int i;
        scanf("%d%d",&n,&k);
        int *a=malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
        {
       	   scanf("%d",&a[i]);
		}
		int j;
        int temp;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            temp=a[i];
            for(j=i;j<n;j++)
            {
                if(a[j]==temp)
                {
                    count++;
                }
                 else
                {
                    break;
                }
            }
            
            if(count==k)
            {
              break;	
			}
            else
            {
            count=0;
            i=j-1;
            }
        }
        if(count==k)
        {
        printf("%d\n",a[i]);	
		}
        else
      		{
      	        printf("-1\n");
	  		}
    }
    return 0;
}

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
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
            int  max1=a[0];
            int  max2=0;
            int  temp;
            for(i=1;i<n;i++)
            {
                if(max2<max1)
                {
                    temp=max1;
                }
                max1=max2+a[i];
                max2=temp;
            }
	       if(max1>max2)
           {
                printf("%d\n",max1);
           }
          else
            {
                printf("%d\n",max2);
            }
	    }
	return 0;
}

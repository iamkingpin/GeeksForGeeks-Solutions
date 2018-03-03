#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a,b,over[101]={0};
	    int i,j;
	    int flag=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d %d",&a,&b);
	        if(a==b && over[a]==0)
	            {
	                over[a]=5;
	            }
	        else
            {
                for(j=a;j<b;j++)
                    {
                        over[j]=1;
                    }
            }
	    }
	    for(i=0;i<=100;i++)
	    {
	        if(over[i]==5)
	           {
	                printf("%d %d ",i,i);
	           }
	        else if(flag==0 && over[i]==1)
	        {
	            flag=1;
	            printf("%d ",i);
	        }
	        else if(flag==1 && over[i]==0)
	        {
	            flag=0;
	            printf("%d ",i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

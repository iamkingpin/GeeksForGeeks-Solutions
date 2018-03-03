#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    char str[1000][1000];
		scanf("%d",&n);
		int count[1000];
		int i,j;
		for(i=0;i<n;i++)
        {
		scanf("%s",str[i]);
		count[i]=1;
        }
		i=0;
		while(i<n)
		{
			for(j=i+1;j<n;j++)
			{
				if((strcmp(str[i],str[j])==0) && count[j]!=0)
				{
				    count[i]=count[i]+1;
				    count[j]=0;
				}
			}
			i++;
		}
		int temp=0;
		int result=0;
		for(i=0;i<n;i++)
		{
		   if(result<count[i])
           {
             temp=result;
             result=count[i];
           }
	       else if(result!=count[i] && temp<count[i])
           {
                  temp=count[i];
           }
		}
		for(i=0;i<n;i++)
        {
             if(temp==count[i] && count[i]!=0)
		     {
		         printf("%s ",str[i]);
		     }
        }
		printf("\n");
	}
	return(0);
}

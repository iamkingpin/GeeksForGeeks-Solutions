#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int count = 0;
	    int flag;
	    int i;
	    for(i=n;i<=m;i++)
	    {
	        int num =i;
	        flag=1;
	        while((num / 10) > 0)
	        {
	            int first=num%10;
	            num=(num/10);
	            int second=num%10;
	            if((second-first)*(second-first)!= 1)
	            {
	                flag=0;
	            }
	        }
	        if(flag == 1)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	
	return 0;
}

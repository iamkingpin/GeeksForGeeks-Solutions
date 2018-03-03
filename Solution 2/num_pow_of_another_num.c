#include<stdio.h>
#include<math.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    int i;
	    int z;
	    int flag=0;
	    for(i=0;i<=y/2;i++)
	    {
	        z=pow(x,i);
	        if(z==y)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        printf("0\n");
	    }
	    else
	    {
	         printf("1\n");
	    }
	   
	}
	return 0;
}

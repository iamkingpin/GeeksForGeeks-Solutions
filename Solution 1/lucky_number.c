#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int count=0,count1=0;
	    int i;
	    while(n>0)
	    {
	        if(n%7==0)
	        {
	            count++;
	            n-=7;
	        }
	        else if(n%4==0)
	        {
	            count1++;
	            n-=4;
	        }
	        else
	        {
	            count1++;
	            n-=4;
	        }
	     }
	        if(n<0)
	        {
	            printf("-1\n");
	            continue;
	        }
	        for(i=0;i<count1;i++)
	        {
	            printf("4");
	        }
	        for(i=0;i<count;i++)
	       {
	            printf("7");
	       }
	        printf("\n");
	}
	return 0;
}

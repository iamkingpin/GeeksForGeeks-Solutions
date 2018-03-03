#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{   
	    int s[100]={0};
		int count=0;
		int i,j;
		int a[8];
		for(j=0;j<8;j++)
		{ 
		    
			scanf("%d",&a[j]);
			s[a[j]]++;
		}
		for(i=0;i<100;i++)
		{
			if(s[i]==4)
			{
			     count++;
			}
		} 
		if(count==2)
		{
		    printf("Yes\n");
		}
		else
		{
		printf("No\n");    
		}
	}
	return 0;
}

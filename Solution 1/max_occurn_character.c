#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[100];
		scanf("%s",str);
		int length=strlen(str);
		int i,j;
		int max=0;
		int temp;
		for(i=0;i<length;i++)
		{
			int count=0;
			for(j=0;j<length;j++)
			{
				if(str[i]==str[j])
				{
				    count++;
				}
			}
			if(count>max)
			{
				max=count;
				temp=str[i];
			}
			if(count==max && str[i]<temp)
		    {
		        temp=str[i];
		    }
		}
		printf("%c\n",temp);
	}
	return 0;
}

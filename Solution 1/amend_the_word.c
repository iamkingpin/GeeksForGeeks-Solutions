#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[101];
		scanf("%s",str);
		int i;
		if(str[0]>='A' && str[0]<='Z')
		{
		    str[0]=str[0]+32;
		}
		printf("%c",str[0]);
		for(i=1;str[i]!='\0';i++)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i]=str[i]+32;
				printf(" ");
			}
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}

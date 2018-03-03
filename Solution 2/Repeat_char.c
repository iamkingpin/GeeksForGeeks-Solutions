#include<stdio.h>
#include<string.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	char str[100];
	scanf("%s",str);
	int i,j;
	int count;
	for(i=0;i<strlen(str);i++)
	{
	    count=0;
	    for(j=0;j<strlen(str);j++)
	    {
	        if(i!=j && str[i]==str[j])
	        {
	            count=1;
	            break;
	        }
	    }
	    	if(count==1)
	{
	    printf("%c\n",str[i]);
	    break;
	}
	}
    
	if(count==0)
	{
	    printf("-1\n");
	}
	}
	return 0;
}

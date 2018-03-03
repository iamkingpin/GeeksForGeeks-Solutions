#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,i,j,count1,max,flag=0;
	char str[52];
	scanf("%d",&t);
	while(t--)
	{
		count1=0;max=0;flag=0;
		scanf("%s",str);
		int count[26]={0};
		for(i=0;i<strlen(str);i++)
		{
		    count[str[i]-97]++;
		    if(count[str[i]-97]>1)
		    {
		    
		        if(count1>max)max=count1;
		        for(j=0;j<26;j++)count[j]=0;
		        i=i-count1;
		        count1=0;
		        
		   }
		   else count1++;
		   if((i==(strlen(str)-1))&&(count1>max))max=count1;
		}
		printf("%d\n",max);
    }
	return 0;
}

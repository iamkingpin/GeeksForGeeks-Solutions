#include<stdio.h>
#include<string.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	char str1[101];
	char str2[101];
	scanf("%s",str1);
	scanf("%s",str2);
	int i,j;
	int count=0;
	int l1=strlen(str1);
	int l2=strlen(str2);
	int temp;
	for(i=0;i<l1;i++)
	{
	    for(j=i+1;j<l1;j++)
	    {
	        if(str1[i]>str1[j])
	        {
	            temp=str1[i];
	            str1[i]=str1[j];
	            str1[j]=temp;
	        }
	    }
	}
	for(i=0;i<l2;i++)
	{
	    for(j=i+1;j<l2;j++)
	    {
	        if(str2[i]>str2[j])
	        {
	            temp=str2[i];
	            str2[i]=str2[j];
	            str2[j]=temp;
	        }
	    }
	}
    if(strcmp(str1,str2)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
	}
	return 0;
}

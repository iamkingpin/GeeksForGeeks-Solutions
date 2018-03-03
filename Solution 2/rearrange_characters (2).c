#include<stdio.h>
#include<string.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		char a[600];
		scanf("%s",a);
		int i,j,k,max=0;
		for(i=0;a[i];i++)
		{
		 k=0;
		for(j=i;a[j];j++)
		if(a[i]==a[j])
		k++;
		if(k>max)
		max=k;
	}
	i=strlen(a);
	if(max>i-max)
	printf("0\n");
	else
	printf("1\n");
	}
}

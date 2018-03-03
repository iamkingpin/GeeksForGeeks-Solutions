#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const char hash[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printall(int a[],int current,char output[],int n)
{
	if(current==n)
	{
		printf("%s ",output);
		return;
	}
	int i;
	for(i=0;i<strlen(hash[a[current]]);i++)
	{
		output[current]=hash[a[current]][i];
		printall(a,current+1,output,n);
		if(a[current]==0 || a[current]==1)
		{
			return;
		}
	}
}
void call(int a[],int n)
{
	char final[n+1];
	final[n]='\0';
	printall(a,0,final,n);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	scanf("%d",&n);
	int *a=malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	call(a,n);
	printf("\n");
	}
	return 0;
}

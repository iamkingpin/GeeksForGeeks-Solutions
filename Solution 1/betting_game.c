#include<stdio.h>
int main()
{
	char s[100000];
	int sum,i,t,j,vet;
	scanf("%d",&t);
	{
		for(i=0;i<t;i++)
		{
			scanf("%s",s);
			j=0;
			vet=1;
			sum=4;
			while(s[j]!='\0')
			{
			    if(sum<vet)
					{
						sum=-1;
						break;
					}
				if(s[j]=='W')
				{
					sum=sum+vet;
					vet=1;
					j++;
				}
				if(s[j]=='L')
				{
					sum=sum-vet;
					vet=vet*2;
					j++;
				}
			}
			printf("%d\n",sum);
		}
	}
}

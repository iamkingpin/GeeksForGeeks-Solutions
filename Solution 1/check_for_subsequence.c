#include<stdio.h>
#include<string.h>
int main()
{
	int t;;
	scanf("%d", &t);
    while(t--)
	{
		char str1[1000];
		char str2[1000];
		scanf("%s %s",str1,str2);
		int i;
		int j=0;
		int length1=strlen(str1);
		int length2=strlen(str2);
		for (i=0;i<length2;i++)
		{
			if (str1[j]==str2[i])
			{
				j++;
			}
		}
		if (j==length1)
		{
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}
}

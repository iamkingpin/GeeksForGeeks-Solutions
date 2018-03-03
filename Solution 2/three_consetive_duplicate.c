#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char duplicate(char str[])
{
    char temp;
    int i,j;
    int n=strlen(str);
    for(i=0;i<n-2;i++)
    {
        if(str[i]==str[i+1] && str[i]==str[i+2])
        {
            for(j=i;j<n-3;j++)
            {
                str[j]=str[j+3];
            }
            str[n-1]=str[n-2]=str[n-3]='\0';
            duplicate(str);
        }
    }
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[100];
	    scanf("%s",str);
	    if(str[0]=='\0')
	    {
	        printf("-1\n");
	    }
	    else
	    {
	        duplicate(str);
	    }
	    if(str[0]!='\0')
	    {
	        printf("%s\n",str);
	    }
	    else
	    {
	        printf("-1\n");
	    }
	}
	return 0;
}

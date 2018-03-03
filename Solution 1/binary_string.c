#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char str[100];
	    scanf("%s",str);
	    int i;
	    int count=0;
	    for(i=0;str[i]!='\0';i++)
	    {
	        if(str[i]=='1')
	        {
	            count++;
	        }
	    }
	    printf("%d\n",(count*(count-1))/2);
	}
	return 0;
}


#include <stdio.h>
#include <string.h>
int main() 
{
	int t;
	char a[100],b[100];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%s",a);
	    scanf("%s",b);
	    if(strstr(a,b))
	        printf("found\n");
	    else
	        printf("not found\n");
	}
	return 0;
}

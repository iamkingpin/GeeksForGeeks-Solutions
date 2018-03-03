#include <stdio.h>
#include <string.h>
int main() 
{
	int t;
	scanf("%d ",&t);
	while(t--)
	{
	    char str[1001];
	    scanf("%[^\n] ",str);
	    int i;
	    int l=strlen(str);
	    int b[257]={0};
	    for(i=0;i<l;i++)
	    {
	        b[str[i]]++;
	    }
	    for(i=0;i<l;i++)
	    {
	        if(b[str[i]]>0)
	        {
	            printf("%c",str[i]);
	            b[str[i]]=0;
	        }
	    }     
	    printf("\n");      
	}
	return 0;
}

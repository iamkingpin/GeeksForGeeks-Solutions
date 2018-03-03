#include <stdio.h>
#include <string.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str1[100],str2[100];
	    int i=0,j=0;
	    scanf("%s %s",str1,str2);
	    int length=strlen(str2);
	    while(str1[i]!='\0' && str2[j]!='\0')
	    {
	        if(str1[i]==str2[j])
	        {
	            i++;
	            j++;
	        }
	        else 
	        {
	            i=i-j+1;
	            j=0;
	        }
	    }
	    if(length==j)
	    {
	        printf("found\n");
	    }
	    else 
	    {
	        printf("not found\n");
	    }
	}
	return 0;
}

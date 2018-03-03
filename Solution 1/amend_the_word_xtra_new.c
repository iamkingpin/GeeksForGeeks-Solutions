#include <stdio.h>
#include<ctype.h>>
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i;
	    char name[100];
	    scanf("%s",name);
	 
	    for(i=0;name[i]!='\0';i++)
	    {
	        if(isupper(name[i])&&i==0)
	        {
	            printf("%c",tolower(name[i]));
	        }
	        else if(isupper(name[i]))
	        {
	            printf(" %c",tolower(name[i]));   
	        }
	        else
	        {
	            printf("%c",name[i]);
	        }
	        
	    }
	       printf("\n");
	}
	
	return 0;
}

#include <stdio.h>
int main() 
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[100];
	    scanf("%s",str);
	    int i;
	    int count=0;
	    int valid=0;
	    for(i=0;str[i]!='\0';i++)
	    {
	        if(str[i]=='[' || str[i]=='(' || str[i]=='{')
	        {
	            count+=1;
	        }
	        else if(str[i]==']' || str[i]==')'  || str[i]=='}')
	        {
	            count-=1;
	        }
	        if(count<0)
	        {
	            valid=1;
	        }
	    }
	    if(count)
	    {
	        valid=1;
	    }
	    if(valid==0)
	    {
	        printf("balanced\n");
	    }
	    else
	    {
	        printf("not balanced\n");
	    }
	}
	return 0;
}

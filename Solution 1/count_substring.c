#include <stdio.h>
#include<string.h>
int main() {
	//code
	int num;
	scanf("%d",&num);
	while(num--)
	{
	    char str[101];
	    scanf("%s",str);
	     int count=0,i,j;
	    for(i=0;i<strlen(str);i++)
	    {
	       
	        if(str[i]!='1')
	        continue;
	        for(j=i+1;j<strlen(str);j++)
	        {
	           if(str[j]=='1')
	           count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

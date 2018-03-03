#include <stdio.h>
#include <string.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[100];
	    scanf("%s",str);
	    int len=strlen(str);
	    int maxlen=1;
	    int final=0;
	    int low,high;
	    for(int i=1;i<len;i++)
	    {
	        low=i-1;
	        high=i+1;
	        while((low>=0&&high<=len-1)&&(str[low]==str[high]))
	        {
	            if(high-low+1>maxlen)
	            {
	                maxlen=high-low+1;
	                final=low;
	            }
	            low--;
	            high++;
	        }
	        
	        low=i-1;
	        high=i;
	        while((low>=0&&high<=len-1)&&(str[low]==str[high]))
	        {
	            if(high-low+1>maxlen)
	            {
	                maxlen=high-low+1;
	                final=low;
	            }
	            low--;
	            high++;
	        }
	    }
	    str[final+maxlen]='\0';
	    printf("%s\n",&str[final]);
	}
	return 0;
}

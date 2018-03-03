#include<stdio.h>
#include<string.h>
int main()
 {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,length;
	    scanf("%d",&n);
	    int bb=0,rr=0,rb=0,br=0;
	    char str[1000];
	    for(i=0;i<n;i++)
	    {
	        scanf("%s",str);
	        length=strlen(str);
	        if(str[0]=='B' && str[length-1]=='B')
	        {
	            bb++;
	        }
	        else if(str[0]=='R' && str[length-1]=='R')
	        {
	            rr++;
	        }
	        else if(str[0]=='R' && str[length-1]=='B')
	        {
	            rb++;
	        }
	        else br++;
	    }
	    int count;
	    int min=(rb<br)?rb:br;
	    if(rb==0 && br==0)
	    {
	        int max=(rr<bb)?bb:rr;
	        count=max;
	    }
	    else if(rb == br)
	    {
	        count = rr+bb+2*rb;
	    }
	    else 
	    {
	    count = (2*min+1)+rr+bb;
	        
	    }
	    if(count==1)
	    printf("0\n");
	    else 
	    printf("%d\n",count*length);
	}
	return 0;
}

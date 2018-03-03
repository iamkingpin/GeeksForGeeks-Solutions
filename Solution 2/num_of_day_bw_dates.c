#include <stdio.h>
int main()
{
	int t,i;
	int d1,m1,y1,d2,m2,y2,s1,s2;
	int d[]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&d1,&m1,&y1);
	    scanf("%d %d %d",&d2,&m2,&y2);
	    long int a1,a2;
	    a1=a2=0;
	    
	    a1= 365*y1+d1;
	    for(i=0;i<m1-1;i++)
	    {
	    	a1+=d[i];
		}
	    if(m1<=2)
	    {
	        y1--;
	    }
	    s1= (y1/4)-(y1/100)+(y1/400);
	    a1=a1+s1;
	  
	    a2= 365*y2+d2;
	    for(i=0;i<m2-1;i++)
	    {
	        a2+=d[i];
	    }
	    if(m2<=2)
	    {
	        y2--;
	    }
	    s2= (y2/4)-(y2/100)+(y2/400);
	    a2=a2+s2;
	
	   if(y2>y1)
	    {
	        printf("%ld\n",a2-a1);
	    }
	    else
	    {
	        printf("%ld\n",a1-a2);
	    }
	}
	return 0;
}

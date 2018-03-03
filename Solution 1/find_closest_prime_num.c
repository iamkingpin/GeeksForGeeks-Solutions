#include <stdio.h>
#include<math.h>
int prime(int n1)
{
 int i;
 for(i=2;i<=sqrt(n1);i++)
 {
     if(n1%i==0)
    {
        return 0;
    }
 }
    return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,min,max;
	    scanf("%d",&n);
	    i=n;
	    j=n;
	  while(1)
	  {
	      min=prime(i);
	      max=prime(j);
	      if(min==1)
	      {
	          printf("%d\n",i);
	          break;
	      }
	      if(max==1)
	      {
	          printf("%d\n",j);
	          break;
	      }
	      i--;
	      j++;
	  }
	}
	return 0;
}

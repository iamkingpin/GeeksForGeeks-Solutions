#include<stdio.h>
int main()
{
	int n,t,i,j;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    int num1,num2,p1,p2;
	    for(i=n-1;i>=1;i--)
	    {
	        for(j=i-1;j>=0;j--)
	        {
	            p1=1,p2=1;
	            num1=a[i],num2=a[j];
	            while(num1>0)
	                {
                        p1*=10;
                        num1=num1/10;
                    }
                    while(num2>0)
                    {
                        p2*=10;
                        num2=num2/10;
                    }
                    num1=a[i]*p2+a[j];
                    num2=a[j]*p1+a[i];
                    if(num2>num1)
                        a[i]^=a[j]^=a[i]^=a[j];
	        }
	    }
	    for(i=n-1;i>=0;i--)
	        printf("%d",a[i]);
	    printf("\n");
	}
	return 0;
}

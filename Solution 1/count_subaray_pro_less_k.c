#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	long long int i;
	long long int a[n];
	long long int result=0;
	long long int pro=1;
	for(i=0;i<n;i++)
	{
	    scanf("%lld",&a[i]);
	}
	long long int j;
	for(i=0,j=0;i<n;i++)
	{
	   if(j<i)   
	   {
	       j=i;
	   }   
	   while(pro*a[j]<k && j<n) 
	   {
	       pro*=a[j];
	       j++;
	       
	   }
	   if(i<j)
	   {
            pro/=a[i];
            result+=j-i;
       }
	}
	printf("%lld\n",result);
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10];
        int a[10];
        scanf("%s",str);
        int n=strlen(str)-1;
        int i;
        int sum=0;
        for(i=0;i<=n;i++)
        {
            if(str[i]=='I')
            {
                a[i]=1;
            }
            else if(str[i]=='V'|| str[i]=='v')
            {
                a[i]=5;
            }
            else if(str[i]=='X' || str[i]=='x')
            {
                a[i]=10;
            }
            else if(str[i]=='L' || str[i]=='l')
            {
                a[i]=50;
            }
            else if(str[i]=='C' || str[i]=='c')
            {
                a[i]=100;
            }
            else if(str[i]=='D' || str[i]=='d')
            {
                a[i]=500;
            }
            else if(str[i]=='M' || str[i]=='m')
            {
                a[i]=1000;
            }
            
        }
        sum=a[n];
        for(i=n-1;i>=0;i--)
        {
        if(a[i]<a[i+1])
        {
            sum=sum-a[i];
        }
        else
        {
            sum=sum+a[i];
        }
        }
        printf("%d\n",sum);
    }
	return 0;
}

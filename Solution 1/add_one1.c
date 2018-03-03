#include<stdio.h>
#include<stdlib.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==9)
        {
         a[i]=0;
        }
        else
        {
         a[i]++;
         flag=1;
         break;
        }
    }
    if(flag==0)
    {
    printf("1 ");
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
    }
	return 0;
}

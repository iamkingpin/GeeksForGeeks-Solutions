#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b;
    scanf("%d %d",&a, &b);
    int i;
    while(a<=b) // adding "=" includes last interval also .e if 3 5 than 5 is also in list
    {
        int flag=0;
        for(i=2;i<=a/2;++i)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0 && a!=1) //adding a!=1 removes 1 from prime no list
        {
                printf("%d ",a);
        }
       ++a; 
    }
    printf("\n");
    }

    return 0;
}

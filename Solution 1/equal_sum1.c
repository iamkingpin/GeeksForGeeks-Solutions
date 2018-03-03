#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int x=0;
        int y =n-1;
        int sum=0;
        while(x!=y) 
        {
            if(sum>=0) 
            {
                sum-=a[y];
                y--;
            } 
            else 
            {
                sum+=a[x];
                x++;
            }
        }
        if(sum==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}


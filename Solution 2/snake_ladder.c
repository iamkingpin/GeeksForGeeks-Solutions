#include <stdio.h>
void snake(int start, int end, int a[], int n, int *count)
{
    int x=2*n;
    int i, max=0,diff,temp;
    for (i=0; i<x;i+=2) 
    {
    if ((a[i] >= start) && (a[i+1] <= end) && (max<(a[i+1] - a[i])))
        {
            max=a[i+1]-a[i];
            temp=i;
        }
    }
    if (max== 0 || max< 6)
    {
        diff = end-start;
        *count = *(count) + (diff / 6);
        *count= *(count) + ((diff % 6) ? 1 : 0);
        return;
    }
    if (start != a[temp]) 
    {
        snake(start, a[temp], a,n,count);
    }
    if (end != a[temp+1])
    {
        snake(a[temp+1], end, a,n,count);
    }

}
int main()
{
    int t;
    scanf ("%d", &t);
    while(t--) 
    {
        int n;
        scanf("%d", &n);
        int x=2*n;
        int i;
        int a[20];
        int count=0;
        for (i=0; i<x; i++) 
        {
            scanf("%d", &a[i]);
        }
        snake(1,30,a,n,&count);
        printf ("%d\n",count);
    }
}

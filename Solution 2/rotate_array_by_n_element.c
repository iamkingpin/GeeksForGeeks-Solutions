#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
     {
        int n,d,i;
        scanf("%d%d",&n,&d);
        int arr[n];
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
       for(i=d;i<n;i++)
         printf("%d ",arr[i]);
       
       for(i=0;i<d;i++)
        printf("%d ",arr[i]);
         
         printf("\n");
     }
	return 0;
}

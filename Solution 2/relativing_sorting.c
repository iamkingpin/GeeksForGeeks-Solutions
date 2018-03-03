#include<stdio.h>
int main()
{
	int t;
scanf("%d",&t); 
        while(t--)
        {
            int m,n,i;
            scanf("%d",&m);
            scanf("%d",&n);
            int a1[m],a2[n],j;
            for(i=0;i<m;i++)
            {
                scanf("%d",&a1[i]);
            }
            for(i=0;i<n;i++)
            {
                scanf("%d",&a2[i]);
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(a2[i]==a1[j])
                    {
                        printf("%d ",a1[j]);
                        a1[j]=0;
                    }
                }
            }
            for(i=0;i<m-1;i++)
            {
                for(j=0;j<m-1-i;j++)
                {
                    if(a1[j]>a1[j+1])
                    {
                        int temp=a1[j];
                        a1[j]=a1[j+1];
                        a1[j+1]=temp;
                        
                    }
                }
            }
            for(i=0;i<m;i++)
            {
                if(a1[i]!=0)
                {
                    printf("%d ",a1[i]);
                }
            }
   
            printf("\n");
        }
	return 0;
}

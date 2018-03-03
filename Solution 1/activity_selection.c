#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int s[n],f[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&f[i]);
        }
        int temp;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(f[i] > f[j])
                {
                    temp = f[i];
                    f[i] = f[j];
                    f[j] = temp;
                    
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        int count=1;
        for(i=1,j=0;i<n;i++)
        {
            if(s[i]>=f[j])
            {
                count++;
                j=i;
            }
        }
        printf("%d\n",count);
    }
    
	return 0;
}

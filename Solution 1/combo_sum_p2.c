 #include <stdio.h>
int sum,n,num=0,flag=0;
int b[15];
void combo(int a[],int k)
{
    int i,j,ans;
    if(k==n)
    {
        return ;
    }
    i=k;
        b[num]=a[i];
        num++;
        ans=0;
        for(j=0;j<num;j++)
        {
            ans+=b[j];
        }
        if(ans==sum)
        {
            flag=1;
            printf("(");
            for(j=0;j<num-1;j++)
            {
                printf("%d ",b[j]);
            }
            printf("%d",b[j]);
            printf(")");
        }
        combo(a,i+1);
        i=i+1;
        while(a[i]==b[num-1])
        {
            i++;
        }
        num--;
        if(i<n)
        {
            combo(a,i);
        }
    return;
}
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&sum);
        for(i=0;i<n;i++)
        {
            int k=i;
            int min=a[i];
            for(j=i+1;j<n;j++)
            {
                if(min>a[j])
                {
                    min=a[j];
                    k=j;
                }
            }
            if(a[i]>min)
            {
                a[k]=a[i];
                a[i]=min;
            }
        }
        num=0;
        flag=0;
        combo(a,0);
        if(flag==0)
        {
            printf("Empty\n");
        }
        if(flag==1)
        {
            printf("\n");
        }
    }
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *a,*b,T,N,K,i,j,c=1,f;
    scanf("%d",&T);
    
    while(T--)
    {
        scanf("%d",&N);
       
        a=(int*)malloc(sizeof(int)*N);
        b=(int*)malloc(sizeof(int)*N);
        for(i=0;i<N;i++)
        scanf("%d",a+i);
       
        scanf("%d",&K);
        
        for(i=0;i<N;i++)
        b[i]=0;
        
        for(i=0;i<N-1;i++)
        {
            if(b[i]==0)
            {
                f=0;
                
            for(j=i+1;j<N;j++)
            {
                
                if(b[j]==0 && (a[j]+a[i])%K==0 && f==0)
                {
                    b[j]=1;
                    b[i]=1;
                    f=1;
                }
            }
            }
        }
        for(i=0;i<N;i++)
        {
            if(b[i]==0)
            c=0;
        }
        if(c==0)
        printf("False\n");
        
        else if(c==1)
        printf("True\n");
        
        c=1;
        
}return 0;

}

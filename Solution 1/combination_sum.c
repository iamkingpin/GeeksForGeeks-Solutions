#include <stdio.h>

void sort_array(int A[],int n)
{
    int minn,temp;
    for(int i=0;i<n;i++)
    {
        minn = i;
        for(int j=i+1;j<n;j++)
            if(A[j]<A[minn])
                minn = j;
        temp = A[i];
        A[i] = A[minn];
        A[minn] = temp;
    }
}
void make(int *ans,int A[],int idx,int n,int arr[],int sz,int sum,int b)
{
    if(sum==b)
    {
        *ans = 1;
        printf("(");
        for(int i=0;i<sz;i++)
            if(i==sz-1)
                printf("%d",arr[i]);
            else
                printf("%d ",arr[i]);
        printf(")");
        return;
    }
    
    if(idx>=n)
        return;
    
    if((sum+A[idx])<=b)
    {
        arr[sz] = A[idx];
        make(ans,A,idx,n,arr,sz+1,sum+A[idx],b);
    }
    make(ans,A,idx+1,n,arr,sz,sum,b);
}

int main() {
	int t,n,b,ans,ctr;
	int A[20];
	int arr[50];
	
	scanf("%d",&t);
	while(t--)
	{
	    ans = 0;
	    ctr = 0;
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	        scanf("%d",&A[i]);
	    sort_array(A,n);
	    for(int i=0;i<n-1;i++)
	        if(A[i]!=A[i+1])
	            A[ctr++] = A[i];
	   A[ctr++] = A[n-1];
	   n = ctr;
	    scanf("%d",&b);
	    make(&ans,A,0,n,arr,0,0,b);
	    if(ans==0)
	        printf("Empty");
	    printf("\n");
	}
	return 0;
}

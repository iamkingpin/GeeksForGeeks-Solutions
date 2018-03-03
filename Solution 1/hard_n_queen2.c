#include <stdio.h>

void nqueens(int n,int x[],int l);
int place(int k,int l,int x[]);
void print(int x[],int n);

int count;
int main() {
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
	    count = 0;
	    int n;
	    scanf("%d",&n);
	    int x[n+1];
	    int j;
		for(j=1;j<n+1;j++)
	        x[j] = 0;
	    int s = 0;
	    nqueens(n,x,1);
	    if(count == 0)
	        printf("-1");    
	
	    printf("\n");
	}
	return 0;
}

void nqueens(int n,int x[],int l)
{
	int k;
    for (k=1;k<n+1;k++)
    {
        if(place(k,l,x))
        {
            x[l] = k;
            if(l == n)
            {
                print(x,n);
                count++;
            }
            else
                nqueens(n,x,l+1);
        }
    }
    
}

int place(int k,int l,int x[])
{
    int c;
    for(c=1;c<l;c++)
    {
        if(x[c] == k || k-x[c] == l-c || k-x[c] == c-l)
            return 0;
    }
    return 1;
}

void print(int x[],int n)
{
    printf("[");
    int m;
	for( m=1;m<n+1;m++)
        printf("%d ",x[m]);
    printf("] ");
}

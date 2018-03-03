#include <stdio.h>
#include <string.h>
int transformString()
{
    char A[1000000],B[1000000];
	    int m,n,i,j;
	    scanf("%s %s",A,B);
	    m = strlen(A);
	    n = strlen(B);
	    if (n != m)
       return -1;
    int count[256];
    memset(count, 0, sizeof(count));
    for (i=0; i<n; i++)   
       count[B[i]]++;
    for (i=0; i<n; i++)   
       count[A[i]]--;         
    for (i=0; i<256; i++)   
      if (count[i])
         return -1;
         
          int res = 0;
    for (i=n-1, j=n-1; i>=0; )
    {
        while (i>=0 && A[i] != B[j])
        {
            i--;
            res++;
        }
 
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int t;
	    t=transformString();
	    printf("%d\n",t);
	
	}
	
	return 0;
}

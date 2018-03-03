#include <stdio.h>
int count(int m){
    int i;
    
    if(m%2!=0)
    return 0;
    
    if(m==2)
    return 1;
    
    if(m==0)
    return 1;
    
    int count1=0;
    for(i=2;i<=m;)
    {
        count1 = count1+ count(m-i)*count(i-2);
        i=i+2;
    }
    return count1;
}
int main() {
	int i,j,k,n,m;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&m);
	    printf("%d\n",count(m));
	}
}

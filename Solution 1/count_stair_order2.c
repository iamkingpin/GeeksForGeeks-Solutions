#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
    scanf("%d",&n);
    int first=1,second=1,next=1;
    int i;
    for(i=3;i<=n+1;i++)
    {
        next=(first+second)%1000000007;
        first=second;
        second=next;
        
    }
    printf("%d\n",next);
}
	return 0;
}

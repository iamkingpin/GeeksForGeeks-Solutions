#include <stdio.h>
int main() 
{
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",(n/m)*m + m*(((n%m)*2)/m));
    }
	return 0;
}

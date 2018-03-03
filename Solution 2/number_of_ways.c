#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
	while(t--){
	    int n,i;
	    long long a[100];
	    scanf("%d",&n);
	    a[1]=1;
	    a[2]=1;
	    a[3]=1;
	    a[0]=1;
	    for(i=4;i<=n;i++)
	    a[i]=a[i-1]+a[i-4];
	    printf("%lld\n",a[n]);
	}
	return 0;
}

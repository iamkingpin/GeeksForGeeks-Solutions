#include <stdio.h>

int main() {
	int i,j,n,t;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    scanf("%d",&b[i]);
	        int count,max=0,mx;
	    for(i=0;i<n;i++){count=0;
	        for(j=0;j<n;j++)
	            if(a[i]>=a[j]&&a[i]<=b[j])count++;
	        if(max<count){
	        max=count;mx=a[i];}
	    }
	    printf("%d %d\n",max,mx);
	}
	return 0;
}

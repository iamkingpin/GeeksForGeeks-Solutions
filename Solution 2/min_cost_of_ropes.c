#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int i,n,key,j;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++) {
	        scanf("%d",&a[i]);
	        if(!i) {
	            continue;
	        }
	        key=a[i];
	        j=i-1;
	        while(j>=0 && a[j]<key) {
	            a[j+1]=a[j];
	            j--;
	        }
	        a[j+1]=key;
	    }
	    int sum=0,total=0;
	    for(i=n-1;i>0;i--) {
	        
	        sum=a[i]+a[i-1];
	        total+=sum;
	        a[i-1]=sum;
	        key=a[i-1];
	        j=i-2;
	        while(j>=0 && a[j]<key) {
	            a[j+1]=a[j];
	            j--;
	        }
	        a[j+1]=key;
	    }
	    printf("%d\n",total);
	}
	return 0;
}

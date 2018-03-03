#include <stdio.h>
int main() {
	int i,j,n,x;
	scanf("%d",&x);
	while(x--){
	    scanf("%d",&n);
	    int a[n],N;
	    int sum=0;
	    for(i=0;i<n;i++){
	    scanf("%d",&a[i]);sum+=a[i];}
	    N=(sum%2==0)?(sum/2):((sum/2)+1);
	    long long int t[N+1];t[0]=1;
	    for(i=1;i<=N;i++)t[i]=0;
	    for(i=0;i<n;i++){
	        for(j=N;j>=a[i];j--){
	        t[j]+=t[j-a[i]];}
	    }
	    for(i=N;i>0;i--){
	    if(t[i]>0)break;}
	    printf("%d\n",abs((sum-i)-i));
	}
	return 0;
}

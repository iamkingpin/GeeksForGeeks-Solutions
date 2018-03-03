#include <stdio.h>
int dp(int,int,int,int);
int minm(int,int);
int hs[100][100];

int main() {
    int t;
	int l,b;
	scanf("%d",&t);
	while(t--){
	scanf("%d%d",&l,&b);
	printf("%d\n",dp(0,0,b,l));
	}
	return 0;
}

int dp(int a,int b,int k,int l){
    if(hs[k-a][l-b]){
        return hs[k-a][l-b];
    }
	else if(k-a==1 || l-b==1){
		return ((k-a==1) ? l-b : k-a );
	}
	else if(k-a==l-b){
		return 1;
	}
    else if(a>=k || b>=l){
        return 0;
    }
    else{
        int i,min=10000000;
        int value=0;
        for(i=1;i<=((k-a<l-b)?k-a:l-b);i++){
            value=1+minm(dp(a+i,b,k,l)+dp(a,b+i,a+i,l),dp(a,b+i,k,l)+dp(a+i,b,k,b+i));
             if(min>value){
                 min=value;
             }
        }
		hs[k-a][l-b]=min;
        return min;
    }
}

int minm(int a,int b){
	return ((a>b)?b:a);
}

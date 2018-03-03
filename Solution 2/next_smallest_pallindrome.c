#include <stdio.h>
int allnine(int ar[],int n){
    int i;
    for(i=0;i<n;i++){
        if(ar[i]!=9){
            return 0;
        }
    }
    return 1;
}
void carryOn(int ar[],int n){
    int c=1,mid=n/2,i=mid-1,j;
    if(n%2!=0){
        ar[mid]+=c;
        c=ar[mid]/10;
        ar[mid]=ar[mid]%10;
        j=mid+1;
    }
    else{
        j=mid;
    }
    while(i>=0 && c>0){
        ar[i]+=c;
        c=ar[i]/10;
        ar[i]=ar[i]%10;
        ar[j]=ar[i];
        j++;i--;
    }
}
int main() {
    int t,n,i,j,f,c,mid;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        /*if(n==1){
            printf("%d\n",ar[0]+1);
            continue;
        }*/
        if(allnine(ar,n)){
            printf("1 ");
            for(i=1;i<n;i++){
                printf("0 ");
            }
            printf("1\n");
            continue;
        }
        if(n%2==0){
            j=n/2;
            i=j-1;
        }
        else{
            i=n/2;
            j=i;
        }
        while(ar[i]==ar[j] && i>=0 && j<n){
            i--;
            j++;
        }
        f=0;
        if(i<0 || (ar[i]<ar[j])){
            f=1;
        }
        while(i>=0){
            ar[j]=ar[i];
            i--;
            j++;
        }
        if(f){
            carryOn(ar,n);
        }
        for(i=0;i<n;i++){
            printf("%d ",ar[i]);
        }
        printf("\n");
     }
}

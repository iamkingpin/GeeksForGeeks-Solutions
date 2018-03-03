#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char str[10000];
        scanf("%s",str);
        int len=strlen(str);
        //printf("%d",len);
        int i=0,j=1;
        int arr[len];
        arr[0]=0;
        while(j<len){
            if(str[i]==str[j]){
                arr[j]=i+1;
                i++;
                j++;
            } else {
                if(i!=0){
                    i=arr[i-1];
                } else {
                    arr[j++]=0;
                }
            }
        }
        printf("%d\n",arr[j-1]);
    }
	//code
	return 0;
}

#include<stdio.h>

int main(){
    int t,n,e,i;

    scanf("%d",&t);
    while(t>0){
        scanf("%d %d ",&n,&e);
        int flag=1;
        int arr1[2*e];
        int arr2[2*e];
        for(i=0;i<(2*e);i++){
            scanf("%d",&arr1[i]);
        }
        for(i=0;i<(2*e);i++){
            scanf("%d",&arr2[i]);
        }
        int count=0;
        int j=0,i=0;
        int x;
        int root=1;
        while(j<(2*e)){
            int temp=0;
            while(arr1[j] == root){
                j=j+2;
                temp=temp+2;
            }
            int checkroot=0;
            while(arr2[checkroot] != root){
                checkroot =checkroot + 2;
            }
            int end = checkroot + temp;
            int tempc=0;

            root=arr1[j];
            x=1;
            for(i=count+1;i<j;i=i+2){
                if(arr1[i] != arr2[end-x]){
                    flag=0;
                    break;
                }
                x=x+2;
            }
            if(flag==0)
               break;
            count = count + temp;

        }
        if(flag==1)
            printf("1\n");
        else
            printf("0\n");
        t--;
    }

    return 0;
}


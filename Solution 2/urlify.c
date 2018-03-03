#include<stdio.h>
int main()
{
	int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
unsigned long x,y;
scanf("%lu",&x);
y=x;
int a[1000];
int ind=0;
while(x!=0){
    int rem=x%62;
    a[ind++]=rem;
    x=x/62;
}
for(int j=ind-1;j>=0;j--){
    if(a[j]>=0 && a[j]<26){
        printf("%c",a[j]+97);
    }
     if(a[j]>=26 && a[j]<52){
        printf("%c",a[j]-26+65);
    }
     if(a[j]>=52 && a[j]<62){
        printf("%c",a[j]-52+48);
    }
}
printf("\n%lu\n",y);
}
	return 0;
}

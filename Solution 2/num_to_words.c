#include <stdio.h>

void dou(int x){
    switch(x){
        case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7:
        printf("seven ");
        break;
        case 8:
        printf("eight ");
        break;
        case 9:
        printf("nine ");
        break;
        case 10:
        printf("ten");
        break;
        case 11:
        printf("eleven");
        break;
        case 12:
        printf("twelve");
        break;
        case 13:
        printf("thirteen");
        break;
        case 14:
        printf("fourteen");
        break;
        case 15:
        printf("fifteen");
        break;
        case 16:
        printf("sixteen");
        break;
        case 17:
        printf("seventeen");
        break;
        case 18:
        printf("eighteen");
        break;
        case 19:
        printf("nineteen");
        break;
    }
    return;
}
void d(int x){
    int temp;
    if(x<20){
        dou(x);
        return;
    }
    temp=x/10;
    switch(temp){
        case 2:
        printf("twenty ");
        break;
        case 3:
        printf("thirty ");
        break;
        case 4:
        printf("forty ");
        break;
        case 5:
        printf("fifty ");
        break;
        case 6:
        printf("sixty ");
        break;
        case 7:
        printf("seventy ");
        break;
        case 8:
        printf("eighty ");
        break;
        case 9:
        printf("ninety ");
        break;
    }
    temp=x%10;
    dou(temp);
}
int three(int x){
    int temp;
    temp=x/100;
    d(temp);
    
    temp=x%100;
    if(temp==0){
        printf("hundred");
        return 0;
    }
    if(temp>0){
        printf("hundred and ");
        d(temp);
    }
    
    
}
void four(int x){
    int temp;
    temp=x/1000;
    dou(temp);
    printf("thousand ");
    temp=x%1000;
    
    if(temp==0){
        //printf("thousand");
        return;
    }
    three(temp);
    
}
int fun(){
    int x,temp;
    scanf("%d",&x);
    if(x<10){
        dou(x);
        return 0;
    }
    
    if(x<100){
        d(x);
        return 0;
    }
    if(x<1000){
        three(x);
        return 0;
    }
    if(x<10000){
        four(x);
        return 0;
    }
    
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    fun();
	    printf("\n");
	}
	return 0;
}

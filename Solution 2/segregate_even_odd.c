#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
	//code
	int T,N,data;
	
	scanf("%d",&T);
	while(T--)
	{
	    struct node *head=NULL,*q=NULL,*pos,*even=NULL,*odd=NULL;
	    scanf("%d",&N);
	    while(N--)
	    {
	        scanf("%d",&data);
	        q=(struct node*)malloc(sizeof(struct node));
	        q->data=data;
	        q->next=NULL;
	        if(head==NULL)
	        {
	            head=q;
	            pos=q;
	        }
	        else
	        {
	            pos->next=q;
	            pos=pos->next;
	        }
	    }
	    
	    while(head)
	    {
	        if(head->data%2)
	        {
	            if(!odd)
	            {
	            odd=head;
	            q=head;
	            }
	            else
	            {
	                q->next=head;
	                q=head;
	            }
	        }
	        else
	        {
	            if(!even)
	            {
	            even=head;
	            pos=head;
	            }
	            else
	            {
	                pos->next=head;
	                pos=head;
	            }
	        }
	        
	        head=head->next;
	    }
	    
	    if(even)
	    pos->next=odd;
	    else
	    even=odd;
	    q->next=NULL;
	    
	    q=even;
	    while(q)
	    {
	        printf("%d ",q->data);
	        q=q->next;
	    }
	    printf("\n");
	    
	}
	return 0;
}

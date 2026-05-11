#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;

void create(int);
void travers();
void deletion_at_begin();
int main(){
    int n;
        printf("Enter the numbers of nodes::");
        scanf("%d",&n);
    create(n);
    travers();
    printf("\n*--Linked list deletion operation--*\n");
    deletion_at_begin();
    travers();
}
void create(int n){
    struct node *newnode,*temp;
    head=(struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("\nMemory is not allocated!!");
        exit(0);
    }
    else{
        printf("\nEnter the data of node 1::");
        scanf("%d",&head->data);
        head->next=NULL;
        temp=head;
    }   
    for(int i=2;i<=n;i++)
    {
        if(head == NULL)
        {
        printf("\nMemory is not allocated!!");
        exit(0);
        }
        else{
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("\nEnter the data of node %d ::",i);
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            temp -> next=newnode;
            temp=newnode;
        }
    }
}
void travers(){
    struct node *ptr;
    ptr=head;
     if(ptr == NULL)
    {
        printf("\nList is empty!!");
        exit(0);
    }
    else
    {
    printf("\nlist is::");
        while(ptr != NULL){
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
    } 
}
void deletion_at_begin(){
    struct node *temp;
    temp=head;
    printf("\nDELETE node is %d",temp->data);
    head=temp->next;
    free(temp);
}
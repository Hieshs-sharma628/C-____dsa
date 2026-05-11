#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;

void create(int),travers(),deletion_at_end();
int main(){
    int n;
        printf("Enter the numbers of nodes::");
        scanf("%d",&n);
    create(n);
    travers();
    printf("\n*--Linked list deletion operation--*\n");
    deletion_at_end();
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
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
        printf("\nMemory is not allocated!!");
        exit(0);
        }
        else{
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
void deletion_at_end(){
    struct node *ptr,*temp;
    ptr=head;
    while(ptr->next != NULL){
        temp=ptr;
        ptr=ptr->next;
    }
    printf("\nDELETE node is %d",ptr->data);
    temp->next=NULL;
    free(ptr);
}
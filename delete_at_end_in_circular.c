#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*start,*newnode,*temp,*ptr;
void create_list(int n);
void travers();
void delete_at_end();
int main(){
    int n;
    printf("Enter the numbers of nodes::\n");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("Invalid inpurt!!!\n");
        exit(0);
    }
    else
    {
        create_list(n);
    }
    travers();
    delete_at_end();
    printf("\nAfter deletion at end::\n");
    travers();
}
void create_list(int n){
    start=(struct node *)malloc(sizeof(struct node));
    if(start == NULL)
    {
        printf("\nMemory is not allocates to it!!!!");
        exit(0);
    }
    else{
        printf("\nEnter the data of 1 node::");
        scanf("%d",&start->data);
        start->next=NULL;
        temp=start;
    }
    for(int i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
            printf("\nMemory is not allocates to it!!!!");
            exit(0);
        }
        else{
            printf("\nEnter the data of %d node::",i);
            scanf("%d",&newnode->data);
            newnode->next=start;
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void travers(){
    ptr=start;
    if(ptr == NULL)
    {
        printf("\nList is empty!!");
        exit(0);
    }
    else
    {
        do
        {
            printf("%d\n",ptr -> data);
            ptr = ptr -> next;
        }while(ptr != start);
    }
}
void delete_at_end(){
    struct node *prevnode;
    ptr=start;
    while(ptr->next != start)
    {
        prevnode=ptr;
        ptr=ptr->next;
    }
    if(ptr == start)
    {
        start=NULL;
        free(ptr);
    }
    else
    {
        prevnode->next=start;
        free(ptr);
    }
}
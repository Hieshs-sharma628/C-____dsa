#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;
void create(int n);
void travers();
void delete();
int main(){
    int n;
    printf("\nEnter the nubers of nodes::");
    scanf("%d",&n);
    create(n);
    travers();
    delete();
    travers();
    return 0;
}
void create(int n){
    struct node *temp,*newnode;
    head=(struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("\nMemory is not allocated!!!");
        exit(0);
    }
    else{
        printf("\nEnter the data of node 1::");
        scanf("%d",&head->data);
        head->next=NULL;
        temp=head;
    }
    for(int i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        if(head == NULL)
        {
        printf("\nMemory is not allocated!!!");
        exit(0);
        }
        else
        {
            printf("\nEnter the data of node %d ::",i);
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            temp->next=newnode;
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
        printf("\nList is ::\n");
        while(ptr != NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
            }
    }
}
void delete(){
    struct node *ptr,*temp,*prev;
    int k;
    printf("\nEnter the position for delete element::");
    scanf("%d",&k);
    if(head == NULL){
    printf("\nEmpty list!!!");
    exit(0);
    }
    else
    {
        ptr=head;
        for(int i=0;i<k;i++)
        {
            prev=temp;
            temp=ptr;
            ptr=ptr->next;
        }
        printf("\nValue to be deleted :: %d",temp-> data);
        prev-> next=temp->next;
        free(temp);
    }
}
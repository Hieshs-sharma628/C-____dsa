#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*start;
void create_list(int n);
void travers_list();
void insert_at_k();
int main(){
    int n;
    printf("\nEnter the numbers of node::");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("\nInvalid input!!!!\n");
        exit(0);
    }
    else{
        create_list(n);
    }
    insert_at_k();
    printf("\nList is :: \n");
    travers_list();
    return 0;
}
void create_list(int n){
    struct node *newnode,*temp;
    start=(struct node *)malloc(sizeof(struct node));
    if(start == NULL){
        printf("\nMemory allocation failed!!\n");
        exit(0);
    }
    else{
        printf("\nEnter the data of node 1::");
        scanf("%d",&start -> data);
        start -> next =NULL;
        temp = start;
    }
    for(int i=2;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("\nMemory allocation failed!!\n");
            exit(0);
        }
        else
        {
            printf("Enter the data of node %d::",i);
            scanf("%d",&newnode -> data);
            newnode -> next = NULL;
            temp -> next =newnode;
            temp = newnode;
        }
    }
}
void insert_at_k()
{
    struct node *newnode,*temp,*ptr;
    int k, i;
    printf("\nEnter the position to insert the new node::");
    scanf("%d",&k);

    if (k <= 0) {
        printf("\nInvalid position. Position must be greater than 0.\n");
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nMemory allocation failed!!\n");
        return;
    }

    printf("\nEnter the data to be inserted at position %d::", k);
    scanf("%d",&newnode -> data);

    if (k == 1) {
        newnode->next = start;
        start = newnode;
        return;
    }

    ptr = start;
    for(i = 1; i < k - 1 && ptr != NULL; i++) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nPosition %d is out of bounds!\n", k);
        free(newnode);
        return;
    }

    newnode->next = ptr->next;
    ptr->next = newnode;
}
void travers_list()
{
    struct node *ptr;
    ptr = start;
    if(ptr == NULL)
    {
        printf("\nList is empty!!");
        exit(0);
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d\n",ptr -> data);
            ptr = ptr -> next;
        }
    }
}
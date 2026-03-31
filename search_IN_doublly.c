#include<stdio.h>
#include<stdlib.h>
struct node  {
    int data;
    struct node *prev;
    struct node *next;
} *start,*newnode,*temp,*ptr;
void create_list(int n);
void travers_list();
int search(int);
int main(){
    int n;
    printf("\nEnter the numbers of node::");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("\nInvalid input !!!!");
        exit(0);
    }
    else
    {
        create_list(n);
    printf("\nlist is::\n");
    travers_list();
    int item,loc;
    printf("\nEnter the number to search::");
    scanf("%d",&item);
    loc=search(item);
    if(loc == 0)
    printf("\nElement Not found");
    else
    printf("\nElement found at position %d", loc);
    }
return 0;
}
//create a new node
void create_list(int n)
{
    
     start=(struct node *)malloc(sizeof(struct node ));
    if(start == NULL)
        {
            printf("No memory allocation possible!!");
            exit(0);
        }
    else 
        {
            printf("Enter the data of node 1::");
            scanf("%d",&start -> data);
            start ->prev =NULL;
            start ->next =NULL;
            temp=start;
        }
    for(int i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node ));
        if(newnode == NULL)
        {
            printf("No memory allocation possible!!");
            exit(0);
        }
        else
        {
            printf("\nEnter the data of nodes %d::",i);
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            newnode -> prev = temp;
            temp -> next = newnode;
            temp =newnode;
        }
    }
}
//traversal
void travers_list()
{
    ptr=start;
    if(ptr == NULL)
    {
        printf("\nList is empty!!");
        exit(0);
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
           
        }
    }
}
int search(int item)
{
    int k,loc;
    struct node *ptr;
    k=1;
    loc=0;
    ptr=start;
    while( ptr != NULL)
    {
        if(ptr->data == item)
        {
            loc = k;
            break;
        }
        else
        {
            k++;
            ptr=ptr->next;
        }
    }
    return loc;
}
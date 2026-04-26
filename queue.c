#include<stdio.h>
int queue[20],front,rare,max,item;
void ENQUEUE();
void DEQUEUE();
void display();
int main(){
    int choice;
    char ch;
    front=-1;
    rare=-1;
    printf("\nEnter the size of queue::");
    scanf("%d",&max);
    do{
        printf("\nSELECT an opreation to perform::");
        printf("\n1.ENQUEUE");
        printf("\n2.DEQUEUE");
        printf("\n3.DISPLAY");
        printf("\nEnter your choice::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                ENQUEUE();
                break;
            case 2:
                DEQUEUE();
                break;
            case 3:
                display();
                break;
            default:
                printf("\nInvalid input!!!!\n");
        }
        printf("\nDo you want to continue y/n::");
        scanf(" %c", &ch);
    }while(ch =='y' || ch=='Y');
    return 0;
}
void ENQUEUE(){
    if(rare == max){
        printf("\nOverflow\n");
    }
    else{
        printf("\nEnter the item to insert::");
        scanf("%d",&item);
        if(front == -1 && rare ==-1)
        {
        front=1;
        rare=1;
        }
        else
        {
            rare++;
        }   
        queue[rare]=item;
    }
}
void display(){
    if(front == -1)
        printf("\nQueue is empty!!!!!!!\n");
    else{
        printf("\nAll elements of queue is ::\n");
        for(int i=front;i<=rare;i++){
            printf("%d\n",queue[i]);
        }
    }
}
void DEQUEUE(){
    if(front == -1)
        printf("\nUNDERFLOW!!");
    else{
        item=queue[front];
        if(front == rare){
            front=-1;
            rare=-1;
        }
        else{
            front++;
        }
        printf("\nDEQUEUEED Element is %d",item);
    }
}

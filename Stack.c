#include<stdio.h>
int stack[20],top,max,item;
void push();
void pop();
void display();
int main(){
    int choice;
    char ch;
    top=-1;
    printf("\nEnter the size of STACK::");
    scanf("%d",&max);
    do{
        printf("\nSELECT an opreation to perform::");
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.DISPLAY");
        printf("\nEnter your choice::");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
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
void push(){
    if(top == max-1){
        printf("\nOverflow\n");
    }
    else{
        top++;
        printf("\nEnter the item to insert::");
        scanf("%d",&item);
        stack[top]=item;
    }
}
void display(){
    if(top == -1)
        printf("\nStack is empty!!!!!!!\n");
    else{
        printf("\nAll elements of stack is ::\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
void pop(){
    if(top == -1)
        printf("\nUNDERFLOW!!");
    else{
        item=stack[top];
        top--;
        printf("\nPOPED Element is %d",item);
    }
}

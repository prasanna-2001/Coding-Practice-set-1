#include<stdio.h>
#define   N 5
int stack[N];
int top=-1;
void push(){
    int x;
    if(top==N-1){
        printf("OVERFLOW CONDITION  NO MORE ELEMENTS CAN BE ADDED");
    }
    else{
        printf("enter the netxt element : \n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("under flow condition no elements can be popped");
    }
    else{
        item=stack[top];
        printf("the deleted element is %d", item);
        top--;
    }
}

void peek(){
    if(top==-1){
        printf("There is no element to display stack is empty.....");
    }
    else{
        printf("\n%d",stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("There is no element to display");
    }
    else{
        int i;
        for(i=top;i++;i--){
            printf("\n %d",stack[top]);
        }
    }
}

void main(){
    int ch = 0;
        int x;
        do{
            printf("\n Enter choice \n 1.Push \n 2.Pop \n 3.Peek \n 4.Display \n");
            scanf("%d",&ch);

            switch(ch){
                case 1 :
                    push();
                    break;
                case 2 :
                    pop();
                    break;
                case 3 :
                    peek();
                    break;
                case 4 :
                    display();
                    break;
                default :
                    printf("ENTER A VALID CHOICE");
            }

            printf("enter 0 if you want to continue or entr 1");
            scanf("%d",&x);
        }while(x=0);
}
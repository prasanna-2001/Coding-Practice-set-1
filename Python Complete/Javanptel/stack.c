#include<stdio.h>
#define N 5
int stack[N];
int top = -1;
void push(){
    int x;
    printf("\n Enter data: ");
    scanf("%d",&x);
    if(top==N-1){
        printf("\n Overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("Underflow condition");
    }
    else{
        item=stack[top];
        top--;
        printf("the item deleted is: %d",item);
    }
}
void peek(){
    if(top==-1){
        printf("the stack is empty");
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
// creating stack using the linked list
// in linkd=ed list we use to add or delete the numbers from head  ie top to reduce the complexity (timr) form O(n) to O(1)
#include<stdio.h>
#include<stdlib.h>


struct node{
        int data;
        struct node * next;
    };
 struct node * top = 0;
    
    //push
    void push(){
        int x;
        printf("enter the element to be added: ");
        scanf("%d",&x);
        struct node * new1;
        new1 = (struct node *)malloc(sizeof(struct node));
        new1->data = x;
        new1->next = top;
        top = new1;
    }
    //here we use dynamic mem alloc sow we dont have to chech overflow

    void display(){
        struct node * temp;
        temp = top;
        if(top==NULL){
            printf("underflow comdition no element present \n");
        }
        else{
            while(temp != NULL){
                printf("%d \n",temp->data);
                temp = temp->next;
            }
        }
    }

        //peeek
        void peek(){
            if(top==NULL){
                printf(" stack is empty\n");
            }
            else{
                printf("the topmost element is : %d \n",top->data);
            }
        }

        //pop
        void pop(){
            struct node * temp;
            temp = top;
            
            if(top==0){
                printf("the list is already empty can not delete anything \n ");
            }
            else{
                printf("the element %d will be removed \n ", top ->data);
                top = top->next;
                free(temp);
            }
        }

int main(){
    int t;
    int ch;

    while(t){
    printf("enter your choice :\n");
    printf(" 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY \n ");
    scanf("%d", &ch);
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
        case 4:
           display();
           break ;    
    }
    printf("oress 1 if you want to continue or press 0 to stop");
    scanf("%d",&t);

    }

}


///QUEUE USING LINKED LIST

#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
 
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
 
int count = 0;
 
void main()
{
    int no, ch, e;
 
    printf("\n 1 - Enque");
    printf("\n 2 - Deque");
    printf("\n 3 - Front element");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Display");
    printf("\n 7 - Queue size");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
/* Create an empty queue */
void create()
{
    front = rear = NULL;
}
 
/* Returns queue size */
void queuesize()
{
    printf("\n Queue size : %d", count);
}
 
/* Enqueing the queue */
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
 
/* Displaying the queue elements */
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
 
/* Dequeing the queue */
void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 
/* Returns the front element of queue */
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
 
/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node * next;
}*stnode;

void creation(int n);
void display();

int main(){
    int n;
    stnode = NULL;
    printf("\n input the totL NUMBER OF NODES IN THE CIRCULAR LINKLIST : \n");
    scanf("%d",&n);

    creation(n);
    display();
    return 0;
}

void creation(int n){
    int i, num;
    struct node *pre , *new1;

    if(n>=1){
        stnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data  for node 1  : ");
        scanf("%d", &num);
        stnode->num=num;
        stnode->next=NULL;
        pre = stnode;
        for(i=2; i<=n; i++){
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("enter the data for the node no %d : ",i);
            scanf("%d", &num);
            new1->num = num;
            new1->next=NULL;
            pre->next=new1;
            pre=new1;
        }
        pre->next=stnode;  //linkage of last to first so that the link will be a circlar list
    }
}
void display(){
    struct node * temp;
    int n = 1;

    if(stnode==NULL){
        printf("the circular link list is empty");
    }
    else{
        temp = stnode;
        printf("\n the elements of the circular linklist is as folllows \n");

        do{
            printf("node %d = %d\n\n",n,temp->num);
            temp = temp->next;
            n++;
        }while(temp != stnode);
    }
}
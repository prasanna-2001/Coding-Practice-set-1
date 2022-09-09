#include<stdio.h>
#include<stdlib.h>

int main(){
struct node 
{
    int data;
    struct node *next;

};
struct node *head, * new1, *temp;
head = 0;
int choice;
while(choice){
new1=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new1 -> data);
new1->next=0;
if(head==0){
    head = temp = new1;
}
else{
    temp->next = new1;
    temp = new1;
}
printf("1 for new node and 0 to stop \n");
scanf("%d",&choice);
}

//insertion at the beginneing

struct 
return 0 ;
}
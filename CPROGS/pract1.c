#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

typedef struct linked_list
{
    float bill;
    char name[20];
    struct linked_list *next;
}*sll;

sll getnode()
{
    sll new1;
    new1 = malloc(sizeof(struct linked_list));
    new1->next = NULL;
    return new1;
}
int main()
{
    int a,res,count,p;
    float bill1,sum;
    char name1[20];
    sll head,temp,new1;
    sll prevnode, currentnode, nextnode;
    head = NULL;

    do
    {
        printf("\n\n1. Creation\n2. Display\n3. Insertion\n4. Deletion\n5. Total collection\n6. Reverse List\n7. Exit");
        printf("\n\t\tEnter your choice:\t");
        scanf("%d",&a);
        
        switch(a)
        {
            case 1:   //Creation
                do
                {
                    if(head == NULL)
                    {
                        head = getnode();
                        printf("\nEnter the name of customer:\t");
                        scanf("%s",name1);
                        strcpy(head->name,name1);
                        printf("\nEnter the bill paid by the customer:\t");
                        scanf("%f",&bill1);
                        head->bill = bill1;
                        temp = head;     
                    }
                    else
                    {
                        new1 = getnode();
                        printf("\nEnter the name of customer:\t");
                        scanf("%s",name1);
                        strcpy(new1->name,name1);
                        printf("\nEnter the bill paid by the customer:\t");
                        scanf("%f",&bill1);
                        new1->bill = bill1;
                        temp->next = new1;
                        temp = new1;
                    }
                    printf("\nWant to add more customers:\n1. Yes\n2. No");
                    printf("\n\t\tEnter your choice:\t");
                    scanf("%d",&res);
                } while (res == 1);
                break;

            case 2:   //Display
                temp = head;
                while(temp != NULL)
                {
                    printf("\n%s",temp->name);
                    printf("\t\t%2f",temp->bill);
                    temp = temp->next;
                }
                break;

            case 3:  //Insertion
                temp = head;
                new1 = getnode();
                count = 1;
                printf("\nEnter the position to add customer:\t");
                scanf("%d",&p);
                while(count < p-1)
                {
                    temp = temp-> next;
                    count++;
                }
                if(p==1)
                {
                    new1->next = temp;
                    printf("\nEnter the name of customer:\t");
                    scanf("%s",name1);
                    strcpy(new1->name,name1);
                    printf("\nEnter the bill paid by the customer:\t");
                    scanf("%f",&bill1);
                    new1->bill = bill1;
                    head = new1;
                }
                else    
                {
                    new1->next = temp->next;
                    temp->next = new1;
                    printf("\nEnter the name:\t");
                    scanf("%s",name1);
                    strcpy(new1->name,name1);
                    printf("\nEnter the bill paid :\t");
                    scanf("%f",&bill1);
                    new1->bill = bill1;
                }
               break;

            case 4:   //Deletion
                temp = head;
                count = 1;
                printf("\nEnter the position to remove customer:\t");
                scanf("%d",&p);
                while(count < p-1)
                {
                    temp = temp-> next;
                    count++;
                }
                if(p==1)
                {
                    head = temp->next;
                    free(temp);
                }
                else
                {
                    if(temp->next == NULL)
                    {
                        printf("\nPostion does not exist.");
                    }
                    else
                    {
                        new1 =  temp->next;
                        temp->next =  temp->next->next;
                        free(new1);
                    }
                    
                }  
                break;

            case 5:   //Total bill paid by the customer
                temp = head;
                sum = 0;
                while(temp!=NULL)
                {
                    sum = sum + temp->bill;
                    temp = temp->next;
                }
                printf("\nTotal bill paid by the customers:\t%.2f",sum);
            break;
            
            case 6 : //reverse the list
                prevnode = 0;
                currentnode = nextnode = head;

                while(nextnode != 0){
                    nextnode = nextnode -> next;
                    currentnode->next = prevnode;
                    prevnode = currentnode;
                    currentnode = nextnode; 
                    }
                 head = prevnode;
            

        }
    } while (a<7);
    return 0;
} 
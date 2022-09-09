#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int data;
    char name[20];
    struct node *next;
}*sll;
sll getnode(){
    sll new1;
    new1 = malloc(sizeof(struct node));
    new1->next = NULL;
    return new1;
}

int main(){
    int ch;
    char res,res0, name[20];
    float bill_amt,sum;
    sll head, temp, new1;
    sll prevnd,currnd, nextnd;
    head = NULL;
    do{
        printf("\n\n1. Creation\n2. Display\n3. Insertion\n4. Deletion\n5. Total collection\n6. Reverse List\n7. Exit");
        printf("\n\t\tEnter your choice:\t");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                do{

                    if(head == NULL){
                        
                    }
                    printf("press y if you want to continueue or press n");
                    scanf("%d",&res0);
                }
        }
        
        printf("enter y if youwant to continue else enter n");
        scanf("%d",&res);
    }while(res==y);

}
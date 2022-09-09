#include <stdio.h>
#include <stdlib.h>
#define L 3
typedef struct skip_list
{
    int data;
    struct skip_list *next[L];
}*skl;

skl getnode()
{
    skl new1;
    int i;
    new1 = malloc(sizeof(struct skip_list));
    for(i=0;i<L;i++)
    {
        new1->next[i] = NULL;
    }
    return new1;
}
int main()
{
    skl head = NULL, new1, temp, prev;
    int i,j,ct,res1;
    char res;
    do
    {
        if(head == NULL)
        {
            head = getnode();
            printf("\nEnter data for head node:\t");
            scanf("%d",&head->data);
            temp = head;
        }
        else
        {
            new1 = getnode();
            printf("\nEnter data for new node:\t");
            scanf("%d",&new1->data);
            temp->next[0] = new1;
            temp = new1;
        }
    printf("\n\tWant to add further nodes in Skip List?\t");
    scanf(" %c",&res);
    }while(res == 'y');
//display
    temp = head;
    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next[0];
    }
//building express lane
    for(i = 1; i<L; i++)
    {
        printf("\nLevel %d: %d->",i, head->data);
        ct =1;
        temp = head->next[i-1];
        for(prev=head; temp!=NULL; temp=temp->next[i-1])
        {
            if(ct%L == 0)
            {
              prev->next[i] = temp;
              prev = temp;
              printf("%d->",prev->data);
            }
            ct++;
        }
    }
    
    return 0;
}
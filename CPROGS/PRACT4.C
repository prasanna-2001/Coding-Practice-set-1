#include <stdio.h>
#include <stdlib.h>
#define MAX 20
typedef struct binary_tree
{
    int data;
    struct binary_tree *left,*right;
}*Bt;
Bt Que[MAX];
Bt L;
Bt temp,grandparent=NULL,parent=NULL;
int front=0,x,rear=0;
void inorder(Bt);
void preorder(Bt);
void postorder(Bt);
void FindGrandParent(Bt ptr,int data,int c);
void Siblings(Bt ptr,int data);
Bt getnode()
{
 Bt new1;
 new1 = (binary_tree*)malloc(sizeof(struct  binary_tree));
 new1->left=NULL;
 new1->right=NULL;
 return new1;
}
Bt root;
int main()
{
  Bt temp,new1,ptr;
  int flag,ch1,esc,ht,data;
  char res,ch;
  do{
     printf("\n1.Create\n2.Display\n3.preorder\n4.inorder\n5.postorder\n6.Grandparent\n7.Siblings\n");
     printf("\nEnter your choice\n");
     scanf("%d",&ch1);
    switch(ch1)
    {
case 1:
   do{
   if(root==NULL)
   {
      root=getnode();
      printf("Enter data of root node:");
      scanf(" %d",&root->data);
   }
   else{
    temp = root;
    flag=0;
    new1=getnode();
    printf("Enter data of new node:");
    scanf("%d",&new1->data);
    do{
    printf("where to attach %d with respect to %d(l/r)",new1->data,temp->data);
    scanf(" %s",&ch);
    if(ch=='l')
    {
        if(temp->left==NULL)
        {
            temp->left=new1;
            flag =1;
        }
        else{
            temp=temp->left;
        }
    }
    else if (ch=='r')
    {
        if(temp->right==NULL)
        {
            temp->right =new1;
            flag=1;
        }
        else{
            temp=temp->right;
        }
    }
  }while(flag == 0);

   } printf("Want to add further nodes:");
  scanf(" %c",&res);
  }while(res=='y');
  break;

case 2:
// Display function & height of tree.
 Que[rear] = root;
 rear++;
 Que[rear]=L;
 rear++;
 while(front<rear-1)
{
    ptr = Que[front];
    front++;
    if(ptr!=L)
    {
        printf("%d\t",ptr->data);

        if(ptr->left!=NULL)
        {
            Que[rear]=ptr->left;
            rear++;
        }
        if(ptr->right!=NULL)
        {
            Que[rear]=ptr->right;
            rear++;
        }
    }
    else{
        printf("\n");
        Que[rear]=L;
        rear++;
        ht++;
    }
}
printf("\nHeight of tree is %d",ht+1);
break;
case 3:
{
 preorder(root);
}
break;
case 4:
{
  inorder(root);
  break;
}
case 5:
    {
        postorder(root);
    }
break;
case 6:
    {
        printf("Enter data whose Grandparent to find:");
        scanf("%d",&data);
        FindGrandParent(root,data,0);
        if(grandparent==NULL)
        {
            printf("Error No grand father found");
        }
        else{
            printf("Grand parent is:%d",grandparent->data);
        }
    }
    break;
case 7 :
    if(root==NULL)
    {
        printf("\nNo elemets in the tree\n");
    }
    else
    {
        parent=NULL;
        printf("\nEnter node to print siblings=");
        scanf("%d",&data);
        Siblings(root,data);
    }
    break;
 printf("\nEnter 0 to go to menu or 1 to exit:");
        scanf("%d",&esc);
        if(esc)
        {
            break;
        }
    }
  } while(ch1<=8);

    return 0;
}
void inorder(Bt ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d \t",ptr->data);
        inorder(ptr->right);
    }
}
void preorder(Bt ptr)
{
    if(ptr!=NULL)
    {
        printf("%d \t",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);

    }
}
void postorder(Bt ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d \t",ptr->data);
    }
}
void FindGrandParent(Bt ptr ,int data,int c)
{
    if(ptr==0)
    {
        return;
    }
    if(c==0)
    {
     temp = ptr;
     grandparent=NULL;
     parent=NULL;
    }
    else if(c==1){
            grandparent=NULL;
            parent=temp;
            temp=ptr;
    }
    else{
        grandparent=parent;
        parent=temp;
        temp=ptr;
    }
    if(ptr->data==data){
        return;
    }
    if(ptr->data>data)
    {
        FindGrandParent(ptr->left,data,c+1);
    }
    else if(ptr->data<data)
    {
        FindGrandParent(ptr->right,data,c+1);
    }

}
void Siblings(Bt ptr,int data)
{
    if(ptr!=NULL)
    {
        if(ptr->data==data)
        {
            if(parent==NULL)
            {
                printf("\nEntered node doesent have sibling\n");
            }
            else if(parent->left==NULL || parent->right==NULL)
            {
                printf("\nThis node doesnt have sibling\n");
            }
            else if(parent->left->data==data)
            {
                printf("\n Sibling is : %d",parent->right->data);
            }
            else{
                printf("\n Sibling is : %d",parent->left->data);
            }
            return;
        }
        parent=ptr;
        if(ptr->data>data)
        {
            Siblings(ptr->left,data);
        }
        else
        {
            Siblings(ptr->right,data);
        }
    }
}
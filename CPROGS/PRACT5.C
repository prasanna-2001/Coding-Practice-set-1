#include<stdio.h>
#include<stdlib.h>

typedef struct binary_search_tree{
    int data;
    struct binary_search_tree *left, *right;
}*bst;

bst root = NULL,temp;
int x;
bst getnode(){
    bst new1;
    new1 = (void*)malloc(sizeof(struct binary_search_tree));
    new1->left = NULL;
    new1->right = NULL;
    return new1;
}

void inorder(bst ptr)
      {
       if(ptr!=NULL)
    {

        inorder(ptr->left);
        printf("%d\t",ptr->data);
        inorder(ptr->right);

    }
      }

       void preorder(bst ptr)
      {
           if(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);

    }
    }
    void postorder(bst ptr)
      {
          if(ptr!=NULL)
    {

        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d\t",ptr->data);

    }
    }


 bst find_minimum(bst root)
{
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}


delete(bst root,int  x)
{//searching for the item to be deleted
    if(root==NULL)
        return NULL;
    if (x>root->data)
        root->right = delete(root->right, x);
    else if(x<root->data)
        root->left = delete(root->left, x);
    else
    {
        //No Children
          if(root->left==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->right==NULL)
        {
            free(root);
            return NULL;
        }

        //One Child
        else if(root->left==NULL || root->right==NULL)
        {
            struct node *temp;
            if(root->left==NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

        //Two Children
        else
        {
            temp = find_minimum(root->right);
            root->data = temp->data;
            root->right= delete(root->right, temp->data);
        }
    }
    return root;

}



Sibling(bst ptr,int y)
            {
                if(ptr==NULL||ptr->data==y)
                {
                    return NULL;
                }
                if(ptr->left!=NULL && ptr->left->data==y)
                {
                    return ptr->right;
                }
                if(ptr->right!=NULL && ptr->right->data==y)
                {
                    return ptr->left;
                }
                 temp=Sibling(ptr->left,y);
                if(temp!=NULL)
                {
                    return temp;
                }
                temp=Sibling(ptr->right,y);
                return temp;

            }


Parent(bst ptr,int x,int parent)
{
      if(ptr==NULL)
        return;
      if(ptr->data==x)
      {
        printf("\n%d is the parent of %d",parent,x);
      }
      else
      {
        Parent(ptr->left,x,ptr->data);
        Parent(ptr->right,x,ptr->data);
      }
}




int main(){

    int ch,r=0,f=0,ht,x,side,la,ra,y;
    char res;
    bst queue[100],new1, temp, ptr, L=0,q[200],tree,parent,value;
      printf("\n\t ;rasanna");
     do{
        printf("\n1.Creation\n2.Display\n3.Inorder\n4.Preorder\n5.Postorder\n6.Mirror\n7.Sibling\n8.Parent\n9.Deletion ");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                do{
                    if(root==NULL){
                        root=getnode();
                        printf("Enter the data for the root node:");
                        scanf("%d",&root->data);
                    }
                    else{
                        temp=root;
                        int flag=0;
                        new1= getnode();
                        printf("Enter the data for the new node:");
                        scanf("%d",&new1->data);
                        do{
                            if(new1->data < temp->data){

                                if(temp->left==NULL){
                                    temp->left=new1;
                                    flag=1;
                                }
                                else{
                                    temp=temp->left;
                                }
                            }
                            else{

                                if(temp->right==NULL){
                                    temp->right = new1;
                                    flag=1;
                                }
                                else{
                                    temp=temp->right;
                                }

                            }
                        }while(flag==0);

                    }
                    printf(" Do you want to add further node yes(y) or no(n):");
                    scanf(" %c",&res);
                }while(res=='y');
                break;

            case 2 ://Display
                q[r]=root;
                r++;
                q[r]=L;
                r++;
                while(f<r-1){
                    ptr = q[f];
                    f++;
                    if(ptr!=L){
                        printf("%d\t", ptr->data);
                        if(ptr->left!=NULL){
                            q[r]=ptr->left;
                            r++;
                        }
                        if(ptr->right!=NULL){
                            q[r]=ptr->right;
                            r++;
                        }
                    }
                    else{
                        printf("\n");
                        q[r]=L;
                        r++;
                    }
                }
                break;

            case 3://inorder traversal
                printf("\n\nInorder traversal:\t");
                inorder(root);
                 break;

            case 4: //preorder traversal
                 printf("\n\nPreorder traversal:\t");
                 preorder(root);
                 break;

            case 5://postorder traversal
                printf("\n\nPostorder traversal:\t");
                postorder(root);
                break;

            case 6: //Mirror

        printf("MIRROR OF A TREE");
        q[r]=root;
        r++;
        q[r]=L;
        r++;
        while(f<r-1)
        {
            ptr=q[f];
            f++;
            if(ptr!=L)
            {
                printf("%d\t",ptr->data);
                if(ptr->right!=NULL)
                {
                    q[r]=ptr->right;
                    r++;
                }
                if(ptr->left!=NULL)
                {
                    q[r]=ptr->left;
                    r++;
                }
            }
            else
            {
                printf("\n");
                q[r]=L;
                ht++;
                r++;
            }

        }
        break;

            case 7: //Sibling

                printf("\nEnter the data of node whose sibling you want to know:");
                scanf("%d",&y);
                bst sibling=Sibling(root,y);
                if(sibling!=NULL)
                {
                    printf("\nSibling of %d is %d",y,sibling->data);
                }
                else
                {
                    printf("\n%d does not have any sibling",y);
                }
                break;

           case 8: //Parent
               printf("\nEnter the data of node whose parent you want to know:");
                scanf("%d",&x);
                Parent(root,x,-1);

                break;

          case 9: //Deletion
            printf("Enter the node which you want to delete:");
            scanf("%d", &x);
            find_minimum(root);
     delete(root,x);
     printf("Successfully deleted");

}

    printf("\nDo you want to continue(y/n):");
    scanf(" %c",&res);
    }while(res=='y');

    while(ch<=9);
    return 0;
}
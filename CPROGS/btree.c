#include<stdio.h>
#include<stdlib.h>

typedef struct binary_tree
{
    int data;
    struct binary_tree * left, * right;
}* bt;

bt root, temp;
bt getnode(){
    bt new1;
    new1 = malloc(sizeof(struct binary_tree));
    new1->left = NULL;
    new1->right = NULL;
    return new1;
}

///creation of binary tree
bt root = NULL;

int main(){
    int flag;
    bt temp, new1;
    char res, ch;

    do{
        if(root==NULL){
            root=getnode();
            printf("Enter the datafor the root node : \n");
            scanf("%d",&root->data);  
        }
        else{
            temp  = root;
            flag = 0;
            new1 = getnode();
            printf("enter the data of new node \n");
            scanf("%d",&new1->data);

            do{
                printf("where to attach root %d wrt %d  \n entr l for left and r for right \n", new1->data,temp->data);
                scanf("%c",&ch);

                if(ch == 'l'){
                    if(temp->left == NULL){
                        temp->left - new1;
                        flag =1;
                    }
                    else{
                        temp = temp->left;
                    }
                }

                else if(ch=='r'){
                    if(temp->right == NULL){
                        temp->right - new1;
                        flag =1;
                    }
                    else{
                        temp = temp->right;
                    }

                }
            }while(flag == 0);


        }
        printf("do you want to add more node enter y for yes and n for no\n");
        scanf(" %c",&res);
    }while(res == 'y');
}
#include<stdio.h>
#include<stdlib.h>

typedef struct binary_search_tree{
    int data;
    struct binary_search_tree *left, *right;
}*bst;

bst root = NULL;

bst getnode(){
    bst new1;
    new1 = (void*)malloc(sizeof(struct binary_search_tree));
    new1->left = NULL;
    new1->right = NULL;
    return new1;
}

int main(){
    int ch,r=0,f=0,r2=0,f2=0,i,len=0;
    char res;
    bst new1, temp, ptr, L,q[200],a[200];

    do{
        printf("\n 1. creation\n 2.Display");
        printf("\nENTER YOUR CHOICE");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                do{
                    if(root==NULL){
                        root=getnode();
                        printf("enter the data for the root node");
                        scanf("%d",&root->data);
                    }
                    else{
                        temp=root;
                        int flag=0;
                        new1= getnode();
                        printf("Enter the data for thenew node");
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
                    printf(" do you want to add further node(y) or not(n)");
                    scanf(" %c",&res);
                }while(res=='y');
                break;

            case 2 :
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
                        ht++
                        r++;
                    }
                }
                break;
            case 3 :
                a[r2]=root;
                r2++;
                
                a[r2]=L;
                r2++;
                while(f2<r2-1){
                    ptr = a[f2];
                    f2++;
                    if(ptr!=L){
                        printf("%d\t", ptr->data);
                        if(ptr->right!=NULL){
                            a[r2]=ptr->right;
                            
                            r2++;
                        }
                        if(ptr->left!=NULL){
                            a[r2]=ptr->left;
                            
                            r2++;
                        }
                    }
                    else{
                        printf("\n");
                        q[r]=L;
                        r++;
                    }
                }
                break;
                
            
            default :
                exit(0);
            
        }

        printf("Do you want to continue");
        scanf(" %c",&res);
    }while(res=='y');
}



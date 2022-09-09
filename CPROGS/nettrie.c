#include <stdio.h>
#include <stdlib.h>
 

#define CHAR_SIZE 26
 
//node structure
struct Trie
{
    int isLeaf;             
    struct Trie* character[CHAR_SIZE];
};
 //getnode function
struct Trie* getnode()
{
    struct Trie* node = (struct Trie*)malloc(sizeof(struct Trie));
    node->isLeaf = 0;
 
    for (int i = 0; i < CHAR_SIZE; i++) {
        node->character[i] = NULL;
    }
 
    return node;
}
 
// Iterative function to insert a string into a Trie
void insert(struct Trie *head, char* str)
{
    // start from the root node
    struct Trie* curr = head;
    while (*str)
    {
        // create a new node if the path doesn't exist
        if (curr->character[*str - 'a'] == NULL) {
            curr->character[*str - 'a'] = getnode();
        }
 
        // go to the next node
        curr = curr->character[*str - 'a'];
 
        // move to the next character
        str++;
    }
 
    // mark the current node as a leaf
    curr->isLeaf = 1;
}
 
// Iterative function to search a string in a Trie. 
// It returns 1 if the string is found in the Trie; otherwise, it returns 0.
int search(struct Trie* head, char* str)
{
    // return 0 if Trie is empty
    if (head == NULL) {
        return 0;
    }
 
    struct Trie* curr = head;
    while (*str)
    {
        // go to the next node
        curr = curr->character[*str - 'a'];
 
        // if the string is invalid (reached end of a path in the Trie)
        if (curr == NULL) {
            return 0;
        }
 
        // move to the next character
        str++;
    }
 
    // return 1 if the current node is a leaf and the
    // end of the string is reached
    return curr->isLeaf;
}
 

 
// main
int main()
{
    struct Trie* head = getnode();
    int ch,i,presornot,flag=0;
    int x=1,rep=1,sf=1;
    char str[10],sstr[10];
    FILE *fp;
    char s[20000];
        
    while(rep!=0){
        printf("1.insert 2.search\n");
        printf("enter choice");
        scanf("%d",&ch);
    
        switch(ch){
        case 1 :
            while(x!=0){
                printf("Entr the string\n");
                scanf(" %[^\n]%*c", str);
                // for(i=0;i<10;i++){
                //     printf("%c",str[i]);
                // }
                insert(head,str);
                printf("press 1 for more or press 0");
                scanf(" %d",&x);
            }
            break;

        case 2:
            while(sf==1){

                // printf("enter the string to be searched..");
                // scanf(" %[^\n]%*c", sstr);
                // presornot = search(head, sstr);
                // if(presornot != 0){
                //     printf("the string is presemt");
                // }
                // else{
                //     printf("its not present");
                //}
                fp=fopen("textfortrie.txt","r");
                if(fp==NULL)
                {
                    puts("Cannot open file");
                    exit(1);
                }

                while(fscanf(fp,"%s",s)!=EOF)
                {
                    presornot = search(head,s);
                    if(presornot==1){
                        flag = 1;
                        break;
                    }
                    
                    //  printf("%s",s);
                }
                if(flag==1){
                        printf("the word is present\n");
                }
                else{
                    printf("the word is not present\n ");
                }

                
            }
            break;
        
        
        }
    }
    
    
    return 0;
}








 







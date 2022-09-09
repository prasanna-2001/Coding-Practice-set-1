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
 
// Iinsert
void insert(struct Trie *head, char* str)
{
    // root node
    struct Trie* curr = head;
    while (*str)
    {    
        if (curr->character[*str - 'a'] == NULL) {
            curr->character[*str - 'a'] = getnode();
        }
 
        // next node
        curr = curr->character[*str - 'a'];
 
        // move to the next character
        str++;
    }
 
    curr->isLeaf = 1;
}
 
int search(struct Trie* head, char* str)
{
    //base
    if (head == NULL) {
        return 0;
    }
 
    struct Trie* curr = head;
    while (*str)
    {
        // next node
        curr = curr->character[*str - 'a'];
 
        // if the string is invalid 
        if (curr == NULL) {
            return 0;
        }
        str++;
    }

    return curr->isLeaf;
}
  
// main
int main()
{
    struct Trie* head = getnode();
    int ch,i,presornot,flag=0;
    int x=1,rep=1,sf=1;
    char str[10],sstr[10];
    printf("\t\t***Prasanna Anjankar***\n");
    
    FILE *fp;
        
    while(rep!=0){
        printf("1.insert 2.search\n");
        printf("enter choice : ");
        scanf("%d",&ch);
    
        switch(ch){
        case 1 :
            while(x!=0){
                printf("\nEntr the string\n");
                scanf(" %[^\n]%*c", str);
                insert(head,str);
                printf("press 1 for more or press 0\n");
                scanf(" %d",&x);
            }
            break;

        case 2:         
                fp=fopen("textfortries.txt","r");
                if(fp==NULL)
                {
                    puts("Cannot open file\n");
                    exit(1);
                }

                while(fscanf(fp,"%s",str)!=EOF)
                {
                    presornot = search(head,str);
                    if(presornot==1){
                        printf("the word %s from the text file is present in trie\n",str);
                    }
                    else{
                        printf("the word %s from the text file is not present in trie\n ",str);
                    }
                    
                }
                
            break;  
        }
        printf("enter 1 to continue and 0 to exit :  ");
        scanf("%d",&rep);
    }

    return 0;
}












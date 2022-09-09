#include<stdio.h>
#include<string.h>
struct trienode{

    int end;
    struct trienode * child[26];
};
struct trienode * getnode(void){
    int i;
    struct trienode * tnode ; 
    tnode->end = 0;
    for(i=0;i<26;i++){
        tnode->child[i] = NULL;
    }
    return tnode;
}


void insert(struct trienode *head, char* str){
    struct trienode* curr = head;
    while(*str){
        if (curr->child[*str - 'a'] == NULL) {
            curr->child[*str - 'a'] = getnode();
        }
        curr = curr->child[*str - 'a'];
        str++;
    }
    curr->end = 0;
}
int main(){
    int ch;
    int x=1;
    char str[10];
    printf("1.insert 2.search\n");
    printf("enter choice");
    scanf("%d",&ch);
    struct trienode *head = getnode();
    switch(ch){
        case 1 :
            while(x=1){
                printf("Entr the string\n");
                gets(str);
                printf("press 1 for more or press 0");
            }
    }
}












// Returns 1 if a given Trie node has any children
int hasChildren(struct Trie* curr)
{
    for (int i = 0; i < CHAR_SIZE; i++)
    {
        if (curr->character[i]) {
            return 1;       // child found
        }
    }
 
    return 0;
}
 
// Recursive function to delete a string from a Trie
int deletion(struct Trie **curr, char* str)
{
    // return 0 if Trie is empty
    if (*curr == NULL) {
        return 0;
    }
 
    // if the end of the string is not reached
    if (*str)
    {
        // recur for the node corresponding to the next character in
        // the string and if it returns 1, delete the current node
        // (if it is non-leaf)
        if (*curr != NULL && (*curr)->character[*str - 'a'] != NULL &&
            deletion(&((*curr)->character[*str - 'a']), str + 1) &&
            (*curr)->isLeaf == 0)
        {
            if (!hasChildren(*curr))
            {
                free(*curr);
                (*curr) = NULL;
                return 1;
            }
            else {
                return 0;
            }
        }
    }
 
    // if the end of the string is reached
    if (*str == '\0' && (*curr)->isLeaf)
    {
        // if the current node is a leaf node and doesn't have any children
        if (!hasChildren(*curr))
        {
            free(*curr);    // delete the current node
            (*curr) = NULL;
            return 1;       // delete the non-leaf parent nodes
        }
 
        // if the current node is a leaf node and has children
        else {
            // mark the current node as a non-leaf node (DON'T DELETE IT)
            (*curr)->isLeaf = 0;
            return 0;       // don't delete its parent nodes
        }
    }
 
    return 0;
}
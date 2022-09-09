// iterative method to reverse link list.
// here we RE NOT Goiing to reverse actually the elements we are going tto reverse thelinks of the elemnts

struct node {
    int data;
    struct node * next ;
};
struct node * head;


void reverse(){
    struct node * prevnode; * currentnode ; * nextnode;
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
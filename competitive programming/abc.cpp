#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" => " << " ";
      ptr = ptr->next;
   }
}
int main() {
   int num,rtdigit,reminder;
   printf("enter the number which has to be converted into a linkedl list  : \t");
   scanf("%d",&num);
     while(num > 0){
     reminder = num % 10;
     insert(reminder);
     num = num / 10;
  }
   cout<<"The required linked list is: ";
   display();
   return 0;
}
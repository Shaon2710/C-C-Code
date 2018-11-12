#include<iostream>
using namespace std;

struct node{
  int value;
  struct node *next;
}*top;

class llist_stack{
public:
  llist_stack(){
    top = NULL;
  }
  void push(int x){
    struct node *p;
    p = new node;
    p-> value = x;
    p-> next = NULL;
    if(top!=NULL)
      p->next = top;

    top = p;
    cout<< "added a value"<< endl;
  }
  void pop(){
    struct node *temp;
    if(top == NULL)
      cout<< "Stuck is empty"<< endl;

    temp = top;
    top= top->next;
    delete top;
    cout<< "delete"<< endl;
  }
  void show(){
    struct node *ptr;
    ptr = top;
    while(ptr!=NULL){
      cout<< ptr->value<< "->";
      ptr = ptr->next;
    }
    cout<< "null"<< endl;
  }
};

int main(){
  llist_stack s;
  s.push(5);
  s.push(10);
  s.show();
  s.pop();
  s.show();
  s.push(7);
  s.push(3);
  s.show();
  s.pop();
  s.pop();
  s.pop();
  s.show();
  s.push(2);
  s.push(8);
  s.push(6);
  s.show();
  s.pop();
  s.pop();
  s.pop();
  s.show();

}

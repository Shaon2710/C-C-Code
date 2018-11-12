#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
    int info;
    struct node *next;
}*start;

class single_llist
{
    public:
     single_llist() /// costactor
        {
            start = NULL;
        }
node* create_node(int value)  /// cresting a node
{
    struct node *temp, *s;
    temp = new(struct node);
    if (temp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}
 void insert_last()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *s;
    temp = create_node(value);
    if (start==NULL)
        start = temp;
    else{
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    }
    cout<<"Element Inserted at last"<<endl;
}
void reverse()
{
    struct node *ptr1, *ptr2, *ptr3;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if (start->next == NULL)
    {
        return;
    }
    ptr1 = start;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
    }
    start = ptr2;
}

void display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

};
main()
{
         single_llist sl;
         int i;
            start = NULL;
            cout<<"Inserting 5 Nodes at the end: "<<endl;
            for(i=0;i<5;i++){
            sl.insert_last();
            cout<<endl;
            }
            cout<<"Reverse elements of Link List"<<endl;
            //sl.reverse();
            cout<<endl;
            cout<<"Display elements of link list"<<endl;
            sl.display();
            cout<<endl;
}

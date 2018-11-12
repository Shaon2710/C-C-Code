#include<iostream>

using namespace std;

struct node{
    int info;
    struct node *next;
}*start;

class llist{
public:
    llist(){
        start = NULL;
    }

    node *create_node(int value){
        struct node *temp;
        temp = new (struct node);
        if(temp == NULL){
            cout<< " No node theare"<< endl;
            return 0;
        }
        else{
            temp-> info = value;
            temp-> next = NULL;
            return temp;
        }
    }

    void begine(){
        int v;
        cout<< "input value"<< endl;
        cin>> v;
        struct node *temp, *p;
        temp = create_node(v);
        if(start == NULL){
            start = temp;
            start-> next = NULL;
        }
        else{
            p = start;
            start = temp;
            start-> next = p;
        }
        cout<< "element insert"<< endl;
    }
    void last(){
        int v;
        cout<< " input the value"<< endl;
        cin>> v;
        struct node *temp, *s;
        temp = create_node(v);
        if(start == NULL){
            start = temp;
            start-> next = NULL;
        }
        else{
            s = start;
            while(s->next != NULL){
                s=s->next;
            }
            temp->next = NULL;
            s-> next = temp;
        }
        cout << "element insert"<< endl;
    }
    void add_p(){
        int v,p, counter = 0, i;
        cout << "input value"<< endl;
        cin>> v;
        cout<< "input position"<< endl;
        cin>> p;
        struct node *temp, *ptr, *s;
        temp = create_node(v);
        s = start;
        while(s->next != NULL){
            s = s->next;
            counter++;
        }
        if(p==1){
            if(start == NULL){
                start = temp;
                start-> next = NULL;
            }
            else{
                ptr = start;
                start = temp;
                start-> next = ptr;
            }
        }
        else if(p>1 && p<counter){
            s = start;
            for(i=1;i<p;i++){
                ptr = s;
                s = s->next;
            }
            ptr -> next = temp;
            temp -> next = s;
        }
        else
            cout<< " input is out of renge"<< endl;

        cout<< "value insert"<< endl;
    }
    void delete_p(){
        int p, i, counter=0;
        if(start == NULL){
            cout<< " list is empty"<< endl;
            return ;
        }
        cout<< "enter the position"<< endl;
        cin>> p;
        struct node *s, *ptr;
        s = start;
        if(p==1){
            start = s->next;
        }
        else{
            while(s != NULL){
                s= s->next;
                counter++;
            }
        }
    }


};

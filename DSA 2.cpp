#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class linked_list{
private:
    node *head,*tail;
public:
    linked_list(){
        head = NULL;
        tail = NULL;
    }
    void insertStart(int n){
        node *ptr = new node;
        ptr->data = n;
        ptr->next = head;
        if(tail == NULL)
        {
            head = ptr;
            tail = ptr;
            ptr = NULL; 
            delete ptr;
        }
        else
        {
            head = ptr;
            ptr = NULL;
            delete ptr;
        }
    }
    void print(){
    for (node * i= head ; i!= tail ;){
        cout<< i -> data<<"\t";
        i = i->next;
    }
    cout<< tail ->data<<"\t";
}

};

int main()
{
    linked_list a;
    a.insertStart(6);
    a.insertStart(7);
    a.insertStart(9);
    a.insertStart(8);
    a.print();
    
    return 0;}
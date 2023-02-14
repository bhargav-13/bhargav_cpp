#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
}; 

void display(node* &head)
{
   if(head == NULL){
    cout << "list is empty" << endl;
    return ;
   }
   node* temp = head;
   while(temp != NULL){
    cout << temp -> data << endl;
    temp = temp -> next;
   }
}



int main(int argc, char const *argv[])
{
        node* n1 = new node(10);
        node* n2 = new node(20);
        node* head  = n1;
        display(head);
}

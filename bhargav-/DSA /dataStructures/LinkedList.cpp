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
    cout << temp -> data << " ";
    temp = temp -> next;
   }
   cout << endl;
}

void insertbyTail(node* &tail, int data){
    node *temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

void insert(node* &head, int pos, int data){
    node* temp = new node(data);
    if(pos == 1){
        temp -> next = head;
        head = temp;
    }
    else{
    for(int i=0; i<pos-1; i++){
        head = head -> next;
        temp -> next = head -> next;
        head -> next = temp; 
        }
    }

}



int main(int argc, char const *argv[])
{
        node* n1 = new node(10);
        node* n2 = new node(20);
        node* n3 = new node(30);
        node* head  = n1;
        n1 -> next = n2;
        n2 -> next = n3;
        insert(head, 3, 66);
        display(head);
}

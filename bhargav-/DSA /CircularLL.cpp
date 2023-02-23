#include<bits/stdc++.h>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this ->next = NULL;
    }
};

void display(node* &tail)
{
   if(tail == NULL){
    cout << "list is empty" << endl;
    return ;
   }
   node* temp = tail;
   cout << "[ ";
   do{
    cout << tail->data << " -> " << flush;
    this_thread::sleep_for(chrono::milliseconds(300));
    tail = tail->next;
   }while(tail != temp);
   cout << ">]" << endl;
}

void insertatPosition(node* &tail, int pos, int data){

    if(tail == NULL){
        node* n = new node(data);   
        tail = n;
        n ->next = n;
    }
    else{
        node* curr = tail;

        while(curr->data != pos) {
          curr = curr -> next;
        }
        
        node* temp = new node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
    }


int main(int argc, char const *argv[])
{
    node* tail = NULL;
    
    insertatPosition(tail, 0, 3);
    insertatPosition(tail, 3, 6);
    insertatPosition(tail, 3, 4);
    insertatPosition(tail, 4, 5);

    display(tail);

    return 0;
}

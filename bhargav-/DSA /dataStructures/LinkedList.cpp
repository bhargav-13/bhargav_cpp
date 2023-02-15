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
   cout << "[ ";
   while(temp != NULL){
    cout << temp -> data << " -> " << flush;
    this_thread::sleep_for(chrono::milliseconds(500));
    temp = temp -> next;
   }
   cout << "NULL ]" << endl;
}

void insertbyTail(node* &tail, int data){
    node *temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

void insert(node* &head,node* &tail, int pos, int data){
    node* temp = head;
    int count = 1;
    if(pos == 0){
        node* nodetoins = new node(data);
        nodetoins -> next = head;
        head = nodetoins;
    }

        while(count<pos-1)
        {
          temp = temp -> next;
          count++;
        }

     if(temp -> next == NULL)
    {
        //cout << "inside tail" << endl;
        insertbyTail(tail,data);
        }
    else
    {
        node* nodetoins = new node(data);
        nodetoins -> next = temp -> next;
        temp -> next = nodetoins;
    }

}



int main(int argc, char const *argv[])
{
        node* n1 = new node(10);

        node* head  = n1;
        node* tail  = n1;

        insert(head,tail,2, 22);
        insert(head,tail,3, 88);
        insert(head,tail,4, 13);
        insert(head,tail,5, 6);
        insert(head,tail,0, 55);
        insert(head,tail,3, 155);
        
        


        

        display(head);
}

#include<bits/stdc++.h>
using namespace std;

class myarray{
    public:
    int *A;
    int size;
    int length;
};

void display(myarray arr){
    cout << "elements are";
    for(int i=0;i<arr.length;i++){
        cout << " " << arr.A[i];
    }
    cout << endl << endl;
}

void append(myarray *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(myarray *arr,int index, int x){
    if(index>=0 && index <=arr->length){
        for(int i=arr->length;i>index-1;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->length++;
        arr->A[index-1]=x;
    }
}

void Delete(myarray *arr, int index){
    if(index>=0 && index <arr->length){
        arr->A[index-1]={0};
        for(int i=(index-1);i<arr->length;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
        

}

int main(int argc, char const *argv[])
{
    myarray a; 
    int n;
    cout << "enter size:";
    cin >> a.size;

    a.A=new int[a.size];
    a.length = 0;
    cout << endl << endl;

     cout << "enter number of elements:";

     
     cin >> n;

     a.length=n;

     cout << "enter elements:";
     for(int i=0;i<n;i++){
        cin >> a.A[i];
     }
     cout << endl << endl;


    //  append(&a,4);
    //  insert(&a,3,13);
     Delete(&a,2);
     display(a);

    

    return 0;
}

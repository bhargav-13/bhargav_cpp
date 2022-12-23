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

     display(a);

    

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void Selsort(int arr[], int n){
    // cout << arr[0] << endl;
    // cout << n << endl;
    
    // cout << minelm << endl;
    for(int i=0; i<n-1; i++)
    {
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                
                minindex = j;
            }
            // cout << arr[j] << endl;
        }
        swap (arr[minindex], arr[i]);
        
    }

    
}

int main(int argc, char const *argv[])
{
    int arr[] = {5,8,15,2,6,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    Selsort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}

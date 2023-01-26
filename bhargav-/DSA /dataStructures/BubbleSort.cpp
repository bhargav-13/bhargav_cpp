#include<bits/stdc++.h>
using namespace std;

void Bubsort(int arr[], int n){
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main(int argc, char const *argv[])
{
    int arr[] = {5,8,15,2,6,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    Bubsort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; return 0; }
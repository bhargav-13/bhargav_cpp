#include <bits/stdc++.h>

using namespace std;
 
template <class T>
void Print(T& vec, int n, string s){
    cout << s << ": [" << flush;
    for (int i=0; i<n; i++){
        cout << vec[i] << flush;
        
        if (i < n-1){
            cout << ", " << flush;
            this_thread::sleep_for(chrono::milliseconds(100));
        }
    }
    cout << "]" << endl;
}
 
void InsertionSort(int A[], int n){
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}
 
int main() {
 
    int A[] = {19, 17, 15, 13, 11, 9, 7, 5, 3, 1};
    int size = sizeof(A)/sizeof(A[0]);
    Print(A,size , "       A");
 
    InsertionSort(A, sizeof(A)/sizeof(A[0]));
    Print(A, size, "Sorted A");
 
    return 0;
}
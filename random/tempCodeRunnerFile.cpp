#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int x=0,n,m;
        int arr[n];
    cin >> n;
    cin >> m;
    for(int i=0; i<n; i++)
    {
      cin >> arr[i];    
    }
    
    for(int i=0; i<n; i++)
    {
        
        x+=arr[i];
    }
    cout << x-arr[m-1] << endl;
    }
}
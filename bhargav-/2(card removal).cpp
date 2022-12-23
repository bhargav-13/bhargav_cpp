/*#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        unique(arr,arr+n);
        
        for(int i=0;i<n;i++){
            cout << arr[i] << endl;
        }

    }
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t{};
    cin>>t;
    while(t--){
        int n{};
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        
        sort(a, a+n);
        int largest = INT_MIN;
        int count = 1;
        for(int i=0; i<n; ++i){
            if(i==n-1 && a[i]==a[i-1]){
                if(largest < count)
                    largest = count;
            }
            else if(a[i]==a[i+1])
                count++;
            else{
            if(largest < count)
                largest = count;
                count = 1;
            }
        }
        cout<<n-largest<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    

    while(t--){
        int n,P;cin >> n >> P;
        int arr[n];
        int w,b,p;
        int count=0;

        for(int i=0;i<n;i++){
            cin >> w >> b >> p;
            int ans=w*b;
            
            if(p<=P && ans>count){
                count = ans;
            }
        }
        if(count !=0){
        cout << count << endl;
        }
        else{
            cout << "no tablet" << endl;
        }  
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        int count;
        int x=0;

        // for(int i=0;i<n;i++){
        //     cin >> c[i];
        // }
        cin >> s;
        for(int i=0;i<n;i++){
            count =0;
            for(int j=0;j<n;j++){
                if(s[i]==s[j]){
                    //cout << s[i]<<endl <<s[j]<<endl;;
                    count++;
                //cout << count << endl;
            }
                
            }
        if(count%2!=0){
            x++;
            break;
            }
        }

    if(x!=0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while(t--){
        int w1,w2,x1,x2,m,a1,a2;

        cin >> w1>>w2  >> x1 >> x2 >> m;

        a1=x1*m;
        a2=x2*m;
        int b1=w1+a1;
        int b2=w1+a2;
        // cout << b1 << " " << b2 <<endl;

        if(b1== w2 || (b1<w2 && b2>w2) || b2 == w2){
            cout << '1' << endl;
        }
        else {
            cout << '0' << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void sumofnn(int n){
    int count =0;
       for(int i=0;i<n;i++){
        count+=i;
       }
       cout << count << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    sumofnn(n);
    return 0;
}

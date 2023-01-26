#include<bits/stdc++.h>
using namespace std;

class arithmetic{
    int a,b;
    char ch;
    public:

    void getData();
    void result();
};

void arithmetic :: getData(){
    cout << "enter symbol:";
    cin >> ch;
    cout << "1st integer:";cin >> a;
     cout << "2nd integer:";cin >> b;
}

void arithmetic :: result(){
    if(ch=='+'){
        cout << "result is="<< a+b << endl;
    }
    if(ch=='-'){
        cout << "result is="<< a-b << endl;
    }
    if(ch=='*'){
        cout << "result is="<< a*b << endl;
    }
    if(ch=='/'){
        cout << "result is="<< a/b << endl;
    }
}

int main(int argc, char const *argv[])
{
    arithmetic a1,a2;
    a1.getData();
    a1.result();
    a2.getData();
    a2.result();
    return 0;
}
    
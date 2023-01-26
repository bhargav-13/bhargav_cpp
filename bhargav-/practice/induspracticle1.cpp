#include<bits/stdc++.h>
using namespace std;

class stringcode{
    string str1,str2;
    public:

    void strlength(string str1,string str2);
    void strcmp(string str1,string str2);
    void stringrev(string str1,string str2);
};



void stringcode::strlength(string str1,string str2){

    cout<< "length of 1st string:" << str1.length() << endl << "length of 1st string:" << str2.length() << endl;
}

void stringcode :: strcmp(string str1,string str2){
    if((str1.compare(str2)) < 0)
        cout << str1 << " is smaller than " << str2 << endl;
 
    if((str1.compare(str2)) == 0)
        cout << str1 << " is equal to " << str2 << endl;
    else
        cout << "Strings didn't match " << endl;
}

void stringcode :: stringrev(string str1,string str2){
    {
    int n = str1.length();

    for (int i = 0; i < n / 2; i++)
        swap(str1[i], str1[n - i - 1]);
}

 {
    int n = str2.length();

    for (int i = 0; i < n / 2; i++)
        swap(str2[i], str2[n - i - 1]);
}
cout << "reverse of 1st string is:" << str1 << endl;
cout << "reverse of 2nd string is:" << str2 << endl;
}

int main(int argc, char const *argv[])
{
    stringcode s1;
    string str1,str2;
    cout << "enter 1st string:"; cin >> str1;
    cout << "enter 2nd string:"; cin >> str2;
    s1.strlength(str1,str2);
    s1.strcmp(str1,str2);
    s1.stringrev(str1, str2);
    return 0;
}

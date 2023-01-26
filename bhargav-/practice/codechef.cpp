#include <iostream>
using namespace std;

int main()
{
int a,b;
cout<< ”Enter the value of a an b”;
cin>>a>>b;
try
{
if(b != 0)
cout<<”The result(a/b)=”<<a/b;
else
throw(b);
}
catch(int x)
{
cout<<”Exception caught b=”<<x;
}
return 0;
}
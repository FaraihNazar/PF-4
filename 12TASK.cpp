#include <iostream>
using namespace std;
void name( string x );
main()
{
string a;
while(true){
cout<<"Enter your name: ";
cin>>a;
name(a);
}
}
void name( string x )
{
cout<<"Name: "<<x<<endl;
}


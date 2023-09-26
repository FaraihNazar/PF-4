#include <iostream>
using namespace std;
void addition(int a,int b);
void subtraction(int c,int d);
void multiplication(int e,int f);
void division (float x,float y);
main()

{
float num1,num2;
char op;
while(true){
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
if ( op=='+'){
    addition(num1,num2);
}
if ( op=='-'){
    subtraction(num1,num2);
}
if ( op=='*'){
  multiplication(num1,num2);
}
if ( op=='/'){
  division (num1,num2);
}
}
}
void addition(int a,int b)
{
cout<<"Addition: "<<a+b<<endl;
}
void subtraction(int c,int d){
cout<<"Subtraction: "<<c-d<<endl;
}
void multiplication(int e,int f){
cout<<"Multiplication: "<<e*f<<endl;
}
void division (float x,float y)
{
cout<<"Division: "<<x/y<<endl;
}

























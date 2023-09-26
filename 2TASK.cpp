#include <iostream>
using namespace std;
void inchesToFeet(float x);
main(){
float inches;
cout<<"Enter the measurement in inches: ";
cin>>inches;
inchesToFeet(inches);
}
void inchesToFeet(float x)
{

float foot=x/12;
cout<<"Equivalent in feet: "<<foot;
}
#include <iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
int d;
cout<<"Enter the distance: ";
cin>>d;
calculateFuel(d);
}
void calculateFuel(float distance)
{
float fuel=distance*10;
if (fuel>=100)
{
cout<<"Fuel needed: "<<fuel;
}
if (fuel<100)
{
cout<<"Fuel needed: 100";
}
}
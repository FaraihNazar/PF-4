#include <iostream>
using namespace std;
void calculatePayableAmount( string day, float amount);
main()
{
string D;
float money;
while(true)
{
cout<<"Enter the day of purchase: ";
cin>>D;
cout<<"Enter the total purchase amount: $";
cin>>money;
calculatePayableAmount( D, money);
}
}
void calculatePayableAmount( string day, float amount)
{ 
float payable_amount;
if (day=="Sunday")
{
 payable_amount=amount-amount*0.1;
 cout<<"Payable Amount: $"<<payable_amount<<endl;
}
if (day!="Sunday")
{
payable_amount=amount-amount*0.05;
cout<<"Payable Amount: $"<<payable_amount<<endl;
}
}

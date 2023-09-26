#include <iostream>
using namespace std;
void Score(int marks);
main()
{
int test_score;
cout<<"Enter your score: ";
cin>>test_score;
Score(test_score);
}
void Score(int marks)
{
if (marks >50)
{
cout<<"Pass";
}
if (marks <= 50)
{
cout<<"Fail";
}
}


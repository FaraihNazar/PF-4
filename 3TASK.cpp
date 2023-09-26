#include <iostream>
using namespace std;
void howManyStickers(int a);
main()
{
     int side_length;
     cout<<"Enter the side length of the Rubik's Cube: ";
     cin>>side_length;
     howManyStickers(side_length);
}
void howManyStickers(int a)
{
int no_of_stickers=6*a*a;
cout<<"Number of stickers needed: "<<no_of_stickers;
}
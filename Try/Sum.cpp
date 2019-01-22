#include <windows.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
   int y;
   cout<<“Leap year:»<<endl;
   for (y=0; y<=2600; y++)
   {
      if (y%400=0) 
         {
         cout<<y;
         }
      else if (y%100=0) else if (y%4=0) {
         cout<<y;
         }
   }
   cout<<“That’s all!”;
	getch();
	return 0;
}

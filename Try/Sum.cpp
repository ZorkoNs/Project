#include <windows.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{  int y,a;
	a=0;
   cout<<"Leap year:"<<endl;
   for (y=0; y<=2600; y++)
   {
      if (y%400==0) {a++;
					cout<<y<<" ";
				}
      else if (y%100==0) {} else if (y%4==0) {a++;
												cout<<y<<" ";
												}
      //~ if((y%100!=0&&y%4==0)||y%400==0)  {a++;  cout<<y<<" ";} //сокращённое написание
   }
   
   cout<<"That's all! Iteration ="<<a;
	getch();
	return 0;
}

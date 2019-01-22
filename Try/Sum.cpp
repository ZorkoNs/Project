#include <windows.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{ int a;
	char i;
	a=getch();
	i=a;
	cout<<"You press key = "<<a<<" is '"<<i<<"'";	
	getch();
	return 0;
}

#include <windows.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main (void) 
{ 
char w[100];
for(int i=0;i<100;i++) w[i]=0;
//~ cout<<"Write text:  ";
//~ for (int i=0; i<10; i++)
	//~ {
	cin.getline(w,100);
	//~ system("cls");
	//~ for (int z=0; z<i; z++){
	//~ cout<<"*";}
	//~ }
	cout<<endl;
	cout<<"Your password is "<<w;
return(0);
}

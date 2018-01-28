#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

struct bookType
{
	string title, author[4];
	double isbn, price, copies;

};
int fun(bookType a ,string b ,int c)
{
	string n;
	cout << b <<c<< " title; ";
	cin >>a.title;
	cout <<b <<" authors; "<<endl;
	for(int j = 0;j<4;j++)
	{	
	
		cin >> a.author[j];
	} 
	cout <<b<<c<< " ISBN; ";
	cin >> a.isbn;
	cout <<b<<c<< " Price; ";
	cin >> a.price;
	cout << b<<c<< " no. of copies; ";
	cin >> a.copies;
	return 0;
}

int main()
{	bookType array[5],z;
	for(int i = 0; i<5; i++)
	{		
		z = array[i];
		fun(z ,"book ",i+1);
	}
	return 0;
}
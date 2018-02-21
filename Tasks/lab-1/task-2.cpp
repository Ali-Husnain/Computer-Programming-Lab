#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

struct vehicle
{	
	string name, color, parts[5];
	float price;
};

vehicle ent(vehicle v1)
{
	cout << "vehicle  name; ";
	cin >> v1.name;
	cout << "vehicle  color; ";
	cin >> v1.color;
	for(int a = 0; a<5; a++)
	{
		cout << "vehicle  part; "<< a << " ";
		cin >> v1.parts[a];
	}
	cout << "vehicle  price; ";
	cin >> v1.price;
	return v1;

}

int main()
{
	vehicle v , v0 ,v2,x,y,z;
	string w;
	cout << "before swaping..."<<endl;
	x = ent(v);
	y = ent(v0);
	cout << x.name <<" "<< x.color<<" "<<x.price<<endl;
	for(int k = 0; k<5; k++)
	{
		w = x.parts[k];
		cout << w<<endl;
	}
	cout << y.name <<" "<< y.color<<" "<<y.price<<endl;
	for(int l = 0; l<5; l++)
	{
		w = y.parts[l];
		cout << w<<endl;
	}
	v2 = x;
	z = y;
	x = y;
	y = v2 ;
	cout << "after swaped "<<endl;
	cout << x.name <<" "<< x.color<<" "<<x.price<<endl;
	for(int i = 0; i<5; i++)
	{
		w = x.parts[i];
		cout << w<<endl;
	}


	cout << y.name <<" "<< y.color<<" "<<y.price<<endl;
	for(int j = 0; j<5; j++)
	{
		w = y.parts[j];
		cout << w<<endl;
	}



	
	return 0;
}
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

struct honda
{
	int model,plate;
	vehicle car;
};

vehicle ent(vehicle v1 ,string z)
{
	cout << z << " name; ";
	cin >> v1.name;
	cout << z << " color; ";
	cin >> v1.color;
	for(int a = 0; a<5; a++)
	{
		cout <<z<< " part; "<< a << " ";
		cin >> v1.parts[a];
	}
	cout <<z<< " price; ";
	cin >> v1.price;
	return v1;

}



int main()
{
	vehicle c1,c2;
	honda h1,h2;
	string z = "First car ",y = "Second car ";
	cout << z << "model_no; ";
	cin >> h1.model;
	cout << z << "plate_no; ";
	cin >> h1.plate;
	ent(c1,z);
	cout << y << "model_no; ";
	cin >> h2.model;
	cout << y << "plate_no; ";
	cin >> h2.plate;
	ent(c2,y);

	return 0;
}
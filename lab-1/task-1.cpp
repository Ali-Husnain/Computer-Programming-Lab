#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;


struct point
{
	float x;
	float y;
	
};
float dist(point c, point d)
{
	float dis;
	 dis = sqrt(pow((d.x - c.x),2) + pow((d.y-c.y),2));
	 cout << "Distance = " << dis<<endl;
	 
	 return 0;
}


int main()
{
	point a ,b;
	cout << "x = ";
	cin>> a.x;
	cout<< "y = ";
	cin>> a.y;
	cout<< "x2 = ";
	cin >> b.x;
	cout << "y2 = ";
	cin >> b.y;
	dist(a,b);
	return 0;
}
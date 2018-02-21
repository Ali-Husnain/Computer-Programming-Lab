#include <iostream>
using namespace std;

int rotate(int &a,int &b,int &c, int &d, int &e)
{
	int p;
	p = a;
	a = b;
	b = c;
	c = d;
	d = e;
	e = p;
	return 0;
}
int main()
{
	int a,b,c,d,e;
	cout<<"Enter 5 integers..."<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cout<<"Before Rotation..."<<endl;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl;
	rotate(a,b,c,d,e);
	cout<<"After Rotation..."<<endl;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl;
	return 0;
}
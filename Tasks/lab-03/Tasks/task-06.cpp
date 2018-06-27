#include <iostream>
using namespace std;

////This was an assignment of first semester.
int fib(int n)
{
	int a = 0, b = 1,m; 
	for(int i = 0; i<=n;i++)
	{
		m = a+b;
		a=b;
		b=m;
		cout<<a<<" ";
	}
	cout<<endl;
	return a;
}
int main()
{
	int x;
	cout<<"Enter nth position for fib: ";
	cin>>x;
	fib(x);
	return 0;
}
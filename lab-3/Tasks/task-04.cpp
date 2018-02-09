#include <iostream>
using namespace std;

int pentagonal(int n)
{
	int x;
	for(int i = 1; i<=n;i++)
	{
		x = i*(3*i-1)/2;
		cout<< x<<" ";
	}
	cout<<endl;
	return 0;
}
int main()
{
	int y;
	cout<<"Enter a number for pentagonal sequence to find sequence on that position; ";
	cin>>y;
	pentagonal(y);
	return 0;
}
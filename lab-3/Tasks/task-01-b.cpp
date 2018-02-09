#include <iostream>
using namespace std;

int integerNumberLength(int num)
{
	static int count = 0;
	int y = num/10;
	if(y == 0)
	{
		count++;
		cout<<"length of integer = "<<count<<endl;
		return count;
	}
	else
	{
		count++;
		return integerNumberLength(y);
	}
}
int main()
{
	int x;
	cout<<"Enter integer to find length; ";
	cin>>x;
	integerNumberLength(x);
	return 0;
}
#include <iostream>
using namespace std;

bool isPrime(int p)
{
	int x;
	if(p<=1)
		return false;
	if(p>1)
	{
		for(int i = 2; i<p; i++)
		{
			x = p%i;
				while(x == 0)
				{
					return false;
				}
		}
	}
	return true;
}

void fun()
{
	bool x; 
	cout<<"Prime numbers: ";
	for(int j = 0; j<100;j++)
	{
		x = isPrime(j);
		if(x == true)
			cout<<j<<" ";
	}
	cout<<endl;
	return;
}

int main()
{
	fun();
	return 0;
}
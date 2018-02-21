#include <iostream>
#include <math.h>
using namespace std;

int integerNumberLength(int num)
{
	static int count = 0;
	int y = num/10;
	if(y == 0)
	{
		count++;
		//cout<<"length of integer = "<<count<<endl;
		return count;
	}
	else
	{
		count++;
		return integerNumberLength(y);
	}
}
int palindrome(int num1)
{
	int a,b,x,y;
	a = integerNumberLength(num1);
	b = a/2;
	for(int i = 1; i<=b; i++)
	{
		x = a/pow(10,a);
		y = a/pow(10,i);
		if(x == y)
			continue;
		else
		{
			cout<< num1<<" is not a palindrome number."<<endl;
			return 0;
		}
		
	}
	cout<<num1<<" is a palindrome number."<<endl;
	return 0;
}
int main()
{
	int z;
	cout <<"Enter a number to check palindrome; ";
	cin>>z;
	palindrome(z);
	return 0;
}
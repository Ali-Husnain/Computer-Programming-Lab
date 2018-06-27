#include <iostream>
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
int reverseNum(int num)
{
	int a,s=0 ,d;
	d = integerNumberLength(num);
	for(int i = 0; i<d; i++)
	{
		a = num % 10;
		s = (10*s)+a;
		num /= 10;
	}
	cout<<s<<endl;
	return s;
}
int main()
{
	int x;
	cout<<"Enter a number to reverse it; ";
	cin>>x;
	reverseNum(x);

	return 0;
}
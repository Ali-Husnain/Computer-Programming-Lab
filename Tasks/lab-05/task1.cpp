#include <iostream>
#include <algorithm>
using namespace std;

class practise
{
private: 
	int setNum[32];
public:
	int set(int in, int pos )
	{
		if(pos>=0 && pos<= 31)
		{
			setNum[pos] = in;
			// cout<<setNum[pos]<<endl;
		}
		return setNum[pos];
	}
	int clear( int pos)
	{
		if(pos>=0 && pos<= 31)
		{
			setNum[pos] = 9191;
		}
		return setNum[pos];
	}
	void test( int in)
	{
		for(int i = 0; i<32; i++)
		{
			if(setNum[i] == in)
			{
				cout<<in<<" is at "<<i<<" position."<<endl;
			}
		}
	}
	practise()
	{
		cout<<"constructor has been called"<<endl;
		for(int i = 0; i<32; i++)
		{

			setNum[i] = 0;
		}
	}
	practise(int array[])
	{
		cout<<"constructor with parameter has been called"<<endl;
		for(int i = 0; i<32; i++)
		{
			setNum[i] = array[i];
		}
	}
	~practise()
	{
		cout<<"Distrutor has been called"<<endl;
	}
	
};

int main()
{
	int ary[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	practise p(ary);
	cout<<p.set(9999,9)<<'\n';
	cout<<p.clear(14)<<'\n';
	p.test(5);
	

	return 0;
}
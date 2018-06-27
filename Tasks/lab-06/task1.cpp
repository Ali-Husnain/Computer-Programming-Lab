#include <iostream>

using namespace std;

class swimmingPool
{
private: 
	float lenght, width ,depth, rateIn, rateout;
public:
	void data()
	{
		cout<<"input values feets..."<<endl;
		cout<<"lenght: ";
		cin>> lenght;
		cout<<"width: ";
		cin>> width;
		cout<<"depth: ";
		cin>>depth;
	}
	float water()
	{
		float vol,gal;
		vol = lenght*width*depth;
		gal = 5.0 * vol;
		cout<<"Water: "<<gal<<" gallons."<<endl;
		return gal;
	}
	void filling()
	{
		float gal = water();
		int n,vol2;
		cout<<"TELL ME\n";
		cout<<"1. is pool partial filled\n";
		cout<<"2. is pool fully filled\n";
		cin>>n;
		if(n == 1)
		{
			cout<<"How much it is filled(in gallons)\n";
			cin>>vol2;
			if(vol2 <= gal)
			{
				gal = gal - vol2;
				rateIn = gal / 30.0;
				cout<< "Rate of filling: "<<rateIn<<" minutes"<<endl;
			}
			else
			{
				cout<<"invalid volume of pool: more than it's capacity\n";
			}
		}
		if(n==2)
		{
			rateIn = gal / 30.0;
			cout<< "Rate of filling: "<<rateIn<<" minutes"<<endl;
		}
		if(n>2)
		{
			cout<<"wrong choice\n";
		}
	}
	void draining()
	{
		float gal = water();
		int n,vol2;
		cout<<"TELL ME\n";
		cout<<"1. is pool partial filled\n";
		cout<<"2. is pool fully filled\n";
		cin>>n;
		if(n == 1)
		{
			cout<<"How much it is filled(in gallons)\n";
			cin>>vol2;
			if(vol2 <= gal)
			{
				gal = gal - vol2;
				rateIn = gal / 30.0;
				cout<< "Rate of draining: "<<rateIn<<" minutes"<<endl;
			}
			else
			{
				cout<<"invalid volume of pool: more than it's capacity\n";
			}
		}

		if(n==2)
		{
			rateIn = gal / 30.0;
			cout<< "Rate of draining: "<<rateIn<<" minutes"<<endl;
		}
	}
	void print()
	{
		cout<<"lenght: "<<lenght<<endl;
		cout<<"width: "<<width<<endl;
		cout<<"depth: "<<depth<<endl;
		cout<<"rate of filling: "<<rateIn<<endl;
		cout<<"rate of draining: "<<rateout<<endl;
	}
	void partialFill()
	{
		float gal = water();
		draining();
		filling();
	}
	swimmingPool()
	{
		lenght = 0;
		width = 0;
		depth = 0;
		rateIn = 0;
		rateout = 0;
	}

	swimmingPool(int len, int wid ,int dep)
	{
		lenght = len;
		width = wid;
		depth = dep;
		partialFill();
	}
	~swimmingPool(){
		cout<<"destructor"<<endl;
	}
	
};
int main()
{
	swimmingPool p1;
	p1.data();
	p1.filling();
	// p1.draining();
	// p2.print();
	return 0;
}
#include <iostream>

using namespace std;

class Distance
{
	private:
		int feet; float inches;
	public:
		Distance(): feet(0), inches(0.0)
		{ }
		Distance(int ft, int in): feet(ft), inches(in)
		{ }
		void getdist()
		{
			cout<<"feet: ";cin>>feet;
			cout<<"inches: ";cin>>inches;
		}
		void showdist() const
		{
			cout<<"("<<feet<<","<<inches<<")"<<endl;
		}
		Distance addDst( const Distance& ) const;
		~Distance()
		{ }
};
Distance Distance :: addDst(const Distance& d) const
{
	Distance temp;
	temp.inches = inches + d.inches ;
	temp.feet = feet + d.feet;
	return temp; 
}

int main()
{
	Distance d1,d2,d3;
	d1.getdist();
	d2.getdist();
	d3 = d1.addDst(d2);
	d3.showdist();

	return 0;
}
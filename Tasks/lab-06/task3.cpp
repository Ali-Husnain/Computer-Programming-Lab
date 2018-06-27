#include <iostream>

using namespace std;

class date
{
private:
	int day, month ,year;
public:

	void inputdate()
	{
		cout<<"Day: ";
		cin>>day;
		if(day<1 || day > 31)
			cout<<"wrong day\n";
		cout<<"month: ";
		cin>> month;
		if(month<=0 || month >12)
			cout<<"wrong month\n";

		cout<<"year: ";
		cin>>year;
		if(year)
	}
	void display()
	{
		cout<<day<<"/";
		cout<<month<<"/";
		cout<<year<<endl;
	}
	date()
	 {
	 	day = 0;
	 	month = 0;
	 	year = 0;
	 }
	~date()
	{
		cout<<" "<<endl;
	}
	
};
int main()
{
	date d1;
	d1.inputdate();
	d1.display();

	return 0;
}
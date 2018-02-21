#include <iostream>
#include <string>
using namespace std;

struct nameType
{
	string firstName , lastName, middleName;
	void initialize()
	{
		firstName = "__First Name__";
		lastName = "__Last Name__";
		middleName = "Middle Name";
	}
	void setValues(string f, string m, string l)
	{
		firstName = f;
		middleName = m;
		lastName = l;
	}
	void printName()
	{
		cout<<firstName;
		cout<<" "<<middleName;
		cout<<" "<<lastName<<endl;
	}
};

struct addressType
{
	string address1, address2, city,state,zipcode;
	void initialize()
	{
		address1 = "_address1_";
		address2 = "_address2_";
		city = "_city_";
		zipcode = "_zipcode_";
	}
	void setAddresses(string add, string add2)
	{
		address1 = add;
		address2 = add2;
	}
	void setCity(string ci)
	{
		city = ci;
	}
	void setState(string sta)
	{
		state = sta;
	}
	void setZipcode(string zi)
	{
		zipcode = zi;
	}
	void printAddress()
	{
		cout<<"Addresses: ";
		cout<<"1. "<<address1<<endl;
		cout<<"                  "<<"2. "<<address2<<endl;
	}
};
struct Student
{
	int  id;
	nameType Name;
	addressType Address;
};
int main()
{
	nameType s1;
	s1.initialize();
	// s1.setValues(s1.firstName,s1.middleName, s1.lastName);
	// s1.printName();
	addressType info;
	info.initialize();
	// info.setAddresses(info.address1,info.address2);
	// info.setCity();
	// info.setState();
	// info.setZipcode();
	// info.printAddress();
	int x;
	cout<<"How many students do you want to admit(studentsArray): ";
	cin>>x;
	Student array[x];
	string f,m,l,ad,ad2,c,s,z;
	for(int i = 0;i<x;i++)
	{
		cout<<"Record of Student "<<i+1<<":"<<endl;
		cout<<"	Student ID: ";
		cin>> array[i].id;
		cin.ignore();
		cout<<"	First Name: ";
		getline(cin ,f);
		cout<<"	Middle Name: ";
		getline(cin , m);
		cout<<"	Last Name: ";
		getline(cin , l);
		array[i].Name.setValues(f, m, l);
		cout<<"	Address 1: ";
		getline(cin ,ad);
		cout<<"	Address 2: ";
		getline(cin , ad2);
		array[i].Address.setAddresses(ad, ad2);
		cout<<"	City: ";
		getline(cin ,c);
		cout<<"	State: ";
		getline(cin , s);
		cout<<"	Zipcode: ";
		getline(cin , z);
		cout<<endl;
		array[i].Address.setCity(c);
		array[i].Address.setState(s);
		array[i].Address.setZipcode(z);
	}
	for(int i =0;i<x; i++)
	{
		cout<<"Student "<<i+1<<" information."<<endl;
		cout<<"       "<<"       ID: "<<array[i].id<<endl;
		cout<<"       "<<"     Name: ";array[i].Name.printName();
		cout<<"       "<<"     City: "<<array[i].Address.city;
		cout<<endl;
		cout<<"       "<<"     State: "<<array[i].Address.state;
		cout<<endl;
		cout<<"       "<<"     Zipcode: "<<array[i].Address.zipcode;
		cout<<endl;
		cout<<"       ";array[i].Address.printAddress();cout<<endl;
	} 
	return 0;
}
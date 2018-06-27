#include <iostream>
#include <string>

using namespace std;

class father
{
protected:
	string name, eye,hair;
public:
	void setValue()
	{
		cout<<"Name: ";
		getline(cin,name);
		cout<<"Hair color: ";
		getline(cin ,hair);
		cout<<"Eye color: ";
		getline(cin, eye);
	}
	void printValue()
	{
		cout<<name<<" "<<eye<<" "<<hair<<"\n";
	}
	father(string n = "name", string e="eye",string h= "hair" )
	{
		name = n;
		eye = e;
		hair = h;
	}
	~father()
	{}
	
};

class mother
{
protected:
	string name, eye,hair;
public:
	void setValue()
	{
		cout<<"Name: ";
		getline(cin,name);
		cout<<"Hair color: ";
		getline(cin ,hair);
		cout<<"Eye color: ";
		getline(cin, eye);
	}
	void printValue()
	{
		cout<<name<<" "<<eye<<" "<<hair<<"\n";
	}

	 mother(string n="name", string e="eye",string h="hair")
	 {
	 	name = n;
	 	eye = e;
	 	hair = h;
	 }
	~mother()
	{

	}
	
};

class Myself: public father
{
protected:
	int age;
	string education;
public:
	void setAgeEd(int x,string s)
	{
		age = x;
		education = s;
	}
	void printAgeEd()
	{
		cout<<age<<" "<<education<<endl;
	}
	Myself(string n, string e, string h,int ag = 5,string ed = "lap"): father(n,e,h)
	{
		age=ag;
		education = ed;
	}
	~Myself()
	{
	}
	
};

class Mysister: public father, public mother
{
private:
	int age;
	string education;
public:
	void setAgeEd(int x,string s)
	{
		age = x;
		education = s;
	}
	void printAgeEd()
	{
		cout<<age<<" "<<education<<endl;
	}
	Mysister()
	{}
	~Mysister()
	{
		mother::printValue();
		printAgeEd();
	}
	
};

int main()
{
	Mysister sis;
	sis.mother::setValue();
	sis.setAgeEd(20,"undergraduation");

	return 0;
}
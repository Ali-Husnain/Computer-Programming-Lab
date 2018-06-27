#include <iostream>
#include <string>

using namespace std;

class vehicle
{
protected:
	int tires,size,seats;
public:

	 void setTire(int x)
	 {
	 	tires = x;
	 }
	 int gettire()
	 {
	 	return tires;
	 }
	 void printTire()
	 {
	 	cout<<"Tires = "<<tires<<endl;
	 }
	 void setsize(int x)
	 {
	 	size = x;
	 }
	 int getsize()
	 {
	 	return size;
	 }
	 void printSize()
	 {
	 	cout<<"Size = "<<size<<endl;
	 }
	 void setSeats(int x)
	 {
	 	seats = x;
	 }
	 int getseats()
	 {
	 	return seats;
	 }
	 void printseats()
	 {
	 	cout<<"Seats = "<<seats<<endl;
	 }
	 vehicle(int t = 2, int s = 1, int st = 1)
	 {
	 	tires = t;
	 	size = s;
	 	seats = st;
	 }
	~vehicle()
	{}
	
};
class car :public vehicle
{
protected:
	string color;
public:
	 void setcolor(string x)
	 {
	 	color = x;
	 }
	 string getcolor()
	 {
	 	return color;
	 }
	 void printColor()
	 {
	 	cout<<"Colour = "<<color<<endl;
	 }
	car(int a = 2,int s = 1,int d = 1,string colr = "color") : vehicle(a,s,d)
	{
		color =  colr;
	}
	~car()
	{}
	
};
class vitz : public car
{
private:
	int model, num_plate;
public:
	 void setmodel(int x)
	 {
	 	model = x;
	 }
	 int getmodel()
	 {
	 	return model;
	 }
	 void printmodel()
	 {
	 	cout<<"Model = "<<model<<endl;
	 }
	 void setPlate(int x)
	 {
	 	num_plate = x;
	 }	 void setTire(int x)
	 {
	 	tires = x;
	 }
	 int gettire()
	 {
	 	return tires;
	 }
	 void printTire()
	 {
	 	cout<<"Tires = "<<tires<<endl;
	 }
	 int getPlate()
	 {
	 	return num_plate;
	 }
	 void printPlate()
	 {
	 	cout<<"Plate Number = "<<num_plate<<endl;
	 }
	 void printAll()
	 {
	 	cout<<tires<<" "<<size<<" "<<seats<<"\n"<<color<<" "<<model<<" "<<num_plate<<endl;
	 	///////we can call the function for print
	 }
	vitz(int a=2,int s=1,int d=1,string f="color" ,int mdl = 000, int npl = 0): car(a,s,d,f)
	{
		model = mdl;
		num_plate = npl;
	}
	~vitz()
	{
		cout<<"\nThank you!\n";
	}
	
};
int main()
{
	vitz v;
	v.printAll();
	v.setTire(4);
	v.setsize(50);
	v.setSeats(5);
	v.setcolor("Silver");
	v.setmodel(2017);
	v.setPlate(1007);
	v.printAll();

	return 0;
}
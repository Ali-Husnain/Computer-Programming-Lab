#include <bits/stdc++.h>

using namespace std;

#define size 7

class wDays
{
private:
	string *array[size];
public:
	wDays(){
		for(int i =0; i<size; i++)
		{
			array[i] = new string;
		}
	}
	void setDays()
	{
		for(int i = 0; i<size; i++)
		{
			*array[i] = "monday   ";
		}
	}
	
	// wDays(const wDays &obj)
	// {
	// 	//////copy constructor: allocating the memory
	// 	// array = new string [size];
	// 	// array = obj.array;
	// 	for(int i =0; i<size; i++)
	// 	{
	// 		array[i] = new string;
	// 	}
	// 	for(int i =0; i<size; i++)
	// 	{
	// 		array[i] =  obj.array[i];
	// 	}
	// }
	~wDays()
	{
		for(int i =0; i<size; i++)
		{
			cout<<*array[i];
		}
		for(int i =0; i<size; i++)
		{
			delete array[i];
		}
		cout<<"\n\ndelete array\n";
		// delete [] array;
	}

};
int main() {
	wDays d;
	d.setDays();

   return 0;
}

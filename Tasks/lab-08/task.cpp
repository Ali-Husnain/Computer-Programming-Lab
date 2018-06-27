#include <iostream>

using namespace std;

#define size 10

class LIST
{
private:
	int arr[size];
public:
	void initialize(int a)
	 {
	 	for(int i = 0; i<size; i++)
	 	{
	 		arr[i] = a;
	 	}
	 }
	void print()
	{
		for(int j =0; j<size; j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	LIST operator+(LIST l)
	{
		LIST l3;
		for(int i = 0; i<size; i++)
		{
		 l3.arr[i] = arr[i] + l.arr[i];
		}
		return l3;
	}
	LIST operator-(LIST l)
	{
		LIST l3;
		for(int i = 0; i<size; i++)
		{
		 l3.arr[i] = arr[i] - l.arr[i];
		}
		return l3;
	}
	LIST operator*(LIST l)
	{
		LIST l3;
		for(int i = 0; i<size; i++)
		{
		 l3.arr[i] = arr[i] * l.arr[i];
		}
		return l3;
	}
	bool operator ==(LIST l)
	{
		for(int i = 0; i<size; i++)
		{
		 if(arr[i] == l.arr[i])
		 {
		 	if(i==size-1)
		 	{
		 		return true;
		 	}
		 	else continue;
		 }
		 else return false;
		}
	}
	LIST operator ++() 
	{
		for(int i = 0; i<size; i++)
		{
		  ++arr[i];
		}
	}
	LIST operator ++(int)
	{
		for(int i = 0; i<size; i++)
		{
		  arr[i]++;
		}
	}

	 LIST(int a = 0)
	 {
	 	for(int i = 0; i<size; i++)
	 	{
	 		arr[i] = a;
	 	}
	 }
	~LIST()
	{  }
	
};

int main()
{
	LIST l0(5),l1(5),l4;
	// l4 = l0 * l1;
	++l0;
	l0.print();

	return 0;
}
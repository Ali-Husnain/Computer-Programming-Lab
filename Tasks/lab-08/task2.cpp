#include <iostream>

using namespace std;

#define size 4

class  MATRIX
{
private:
	int arr[size][size]; 
public:
	void print()
	 {
	 	for(int i =0; i<size; i++)
	 		for(int j = 0; j<size; j++)
	 		{
	 			cout<<arr[i][j]<<" ";
	 		}
	 		cout<<endl;
	 }
	MATRIX operator + (MATRIX m)
	{
		MATRIX m0;
		for(int i = 0; i<size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				m0.arr[i][j] = arr[i][j] + m.arr[i][j];		/* code */
			}
		 
		}
		return m0;
	}
	MATRIX operator %(const MATRIX m) const
	{
		MATRIX m0;
		int a ,b;
		for(int i = 0; i<size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				a = arr[i][j];
				b =  m.arr[i][j];
				m0.arr[i][j] = a % b;		/* code */
			}
		 
		}
		// for(int i = 0; i<size; i++)
		// {
		// 	for (int j = 0; j < size; j++)
		// 	{
		// 		cout<<m0.arr[i][j]<<" ";		/* code */
		// 	}
		 
		// }

		return m0;
	}
	bool operator >=(MATRIX m)
	{
		for(int i = 0; i<size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if(arr[i][j] >= m.arr[i][j])
				{
					if(i<size-1)
					{
						cout<<"True"<<endl;
						return true;
					}
				}
			}
		 
		}
		cout<<"False"<<endl;
		return false;
	}
	bool operator <=(MATRIX m)
	{ 
		for(int i = 0; i<size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if(arr[i][j] <= m.arr[i][j])
				{
					if(i<size-1)
					{
						cout<<"True"<<endl;
					 return true;
					}
				}
			}
		 
		}
		cout<<"False"<<endl;
		return false;
	}
	void initialize(int a = 0)
	 {
	 	for(int i =0; i<size; i++)
	 		for(int j = 0; j<size; j++)
	 			arr[i][j] = a;
	 }
	 MATRIX(int a = 0)
	 {
	 	for(int i =0; i<size; i++)
	 		for(int j = 0; j<size; j++)
	 			arr[i][j] = a;
	 }
	~ MATRIX()
	{ }
	
};

int main()
{
	MATRIX m1(4),m2(5),m3;
	// m3 = m1 % m2;
	m1<=m2;
	// m3.print();
	return 0;
}
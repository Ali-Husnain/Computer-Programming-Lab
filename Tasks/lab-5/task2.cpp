#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define size 5

class DArray
{
private:
	int array[size][size];
public:
	void print()
	{
		for(int i = 0;i<5; i++)
		{
			for(int j = 0; j<5; j++)
			{
				cout<<array[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void transpose()
	{
		cout<<"Transpose..."<<endl;
		int array1[size][size];
		for(int i =0; i<5; i++)
			for(int j=0; j<5;j++)
				array1[i][j] = array[j][i];
		for(int i =0; i<5; i++)
		{
			for(int j=0; j<5;j++)
			{
				cout<<array1[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void isSymmetry(int ary[size][size])
	{
		int array1[size][size],o=0;
		for(int i =0; i<5; i++)
			for(int j=0; j<5;j++)
				array1[i][j] = ary[j][i];
		for(int i =0; i<5; i++)
		{
			for(int j=0; j<5;j++)
			{
				if(array1[i][j] != ary[i][j])
				{
					o++;
					break;
				}

			}
			if(o == 1)
			{
				break;
			}
		}
		if(o == 0)
			cout<< "It is symmetry."<<endl;
		else
			cout<<"It is not symmetry."<<endl;
	}
	DArray multiply(DArray a, DArray b)
	{	
		int x ,y,z = 0;
		for(int i =0 ; i<size ; i++)
		{
			for(int j =0; j<size; j++)
			{
				x = a[i][j];
				y = b[j][i];];
				z += (x*y);
				array[i][j] = z; 
			}
		}

		return array;
	}
	DArray get()
	{
		return array;
	}
	DArray()
	{
		cout<<"constructor"<<endl;
		array[size][size] = rand();		
	}
	~DArray()
	{
		cout<<"Distrutor"<<endl;
	}
};


int main()
{
	int ary1[size][size] = {{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};
	int ary2[size][size] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	// DArray p;
	DArray obj1,p,obj2;
	p.multiply(obj1.get(), obj2.get());
	p.print();
	// p.transpose();
	// p.isSymmetry(ary1);

	return 0;
}
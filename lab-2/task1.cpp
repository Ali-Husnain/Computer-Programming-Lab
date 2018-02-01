#include <iostream>

using namespace std;
int mini(double e[],int f)
{
	int min = 0,xx;
	double min1[f-1];
	for(int x = 0; x<f; x++)
	{	
		xx = x+1;
		if(*(e+x)<*(e+xx))
			*(min1+x) = *(e+x);
		else
		{
			*(min1+x) = *(e+xx);
		}
		if(x == f-1)
		{
			cout<<"2nd Min = "<<min1[1]<<endl;
		}
	}
	return 0;
}
int max(int a[],int b)
{
	int integer=0,mm;
	for(int m = 0; m<b; m++)
	{	
		mm = m+1;
		if(*(a+m)>*(a+mm))
			integer = *(a+m);
		else
		{
			integer = *(a+mm);
		}
	}
	cout<< "Max = "<<integer<<endl;
	return integer;
}
int upperCase(char c[],int d)
{
	char array[d];
	for(int o= 0; o<d; o++)
	{
		if(*(c+o)>='a' && *(c+o)<='z')
		{
			*(array+o) = *(c+o)-32; 
		}
	}
	cout<<"upperCase: ";
	for(int p = 0; p<d; p++)
	{
		cout<<*(array+p);
	}
	cout<<endl;
	return 0;
}

int main()
{	

	int n = 5, x[n],w[n],v[n],sum[n];
	double y[n];
	char z[n];
	for(int i = 0; i<n; i++)
		{
			cout<< "integer: ";
			cin>>*(x+i);
			cout<<"double: ";
			cin>>*(y+i);
			cout<< "char: ";
			cin >>*(z+i);
			cout<<endl;
		}
		
	cout<<"integer; ";
	for(int j = 0; j<n;j++)
	{
		cout<< *(x+j)<<",";
	}	
	cout<<endl;
	cout<< "Double = ";
	for(int k = 0; k<n;k++)
	{
		cout<< *(y+k)<<",";
	}
	cout<<endl;
	cout<<"Char = ";
	for(int l = 0; l<n;l++)
	{
		cout<< *(z+l)<<",";
	}	
	cout<<endl;
	mini(y ,n);
	max(x,n);
	upperCase(z ,n);
	cout<<"integer1(array) for sum: "<<endl;
	for(int ii = 0; ii<n; ii++)
	{
			cin>>*(w+ii);
	}
	cout<<"integer2(array) for sum: "<<endl;
	for(int jj = 0; jj<n; jj++)

	{
		
		cin>>*(v+jj);
	}
	for(int aa =0 ; aa<n; aa++)
	{
		*(sum+aa) = *(w+aa) + *(v+aa);
	}
	cout<< "Sum of integer1 & integer2; "<<endl;
	for(int bb = 0;bb<n; bb++)
	{
		cout<<*(sum+bb)<<" ";
	}
	cout<<endl;
	return 0;
} 
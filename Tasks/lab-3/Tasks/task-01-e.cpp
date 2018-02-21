#include <iostream>
using namespace std;

int maximum(int num1 ,int num2, int num3 ,int num4)
{
    int max=0,a = num1,s=num2,d=num3,f= num4;
    int array[] = {a,s,d,f};
    for(int i = 0; i<3; i++)
    {
    	if(array[i]>array[i+1])
    		max = array[i];
    	else
    		max = array[i+1];
    }
    //cout<<max<<endl;
    return max;
}
int integerNumberLength(int num)
{
	static int count = 0;
	int y = num/10;
	if(y == 0)
	{
		count++;
	//	cout<<"length of integer = "<<count<<endl;
		return count;
	}
	else
	{
		count++;
		return integerNumberLength(y);
	}
}
void largestNumberlength(int num1,int num2,int num3,int num4)
{
	int a,x;
	x = maximum(num1,num2,num3,num4);
	a = integerNumberLength(x);
	cout<<x<<" is the highest length number which has length "<<a<<endl;
	return;
}
int main()
{
	largestNumberlength(245,3456,506657,23454);
	return 0;
}
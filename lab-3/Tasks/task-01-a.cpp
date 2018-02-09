#include <iostream>
using namespace std;

int maximum(int num1 ,int num2, int num3 ,int num4, int num5)
{
    int max=0,a = num1,s=num2,d=num3,f= num4,g=num5;
    int array[] = {a,s,d,f,g};
    for(int i = 0; i<4; i++)
    {
    	if(array[i]>array[i+1])
    		max = array[i];
    	else
    		max = array[i+1];
    }
    cout<<max<<endl;
    return max;
}
int main()
{
    maximum(1,2,3,4,5);
    return 0;
}
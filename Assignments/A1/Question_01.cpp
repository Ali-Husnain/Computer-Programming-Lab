#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
# define n 5

int out(float arr[],int x)
{
	for(int i = 0; i<x; i++)
	{
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	return 0;
}
int frequency(float testArray[])
{
	int count;
    cout<< "Frequency of each number:"<<endl;
    for(int i = 0; i<n*3; i++)
    {
        count = 0;
        for(int j = 0; j<n*3; j++)
        {
            if(*(testArray+i) == *(testArray+j))
            {
                count++;
            }
        }
        cout<<*(testArray+i)<<" >>> "<<count -1<<endl;
    }
    return 0;
}
int searchValue(float testArray[])
{
	float x ,count = 0;
	cout <<"Enter a number to search in testArray: ";
	cin>>x;
	for(int i = 0; i<n*3; i++)
	{
		if(*(testArray+i) == x)
		{
			count++;
			cout<< x <<" is on "<<i<<" index."<<endl;
		}
	}
	if(count == 0)
	{
		cout<< x <<" is not in testArray."<<endl;
	}
	return 0;
}

int copyArray(float array1[], float array2[], float array3[],float testArray[])
{
	copy(array1,testArray,testArray);
	copy(array2,testArray+10,testArray+5);
	copy(array3,testArray+15,testArray+10);
	out(testArray);
	return 0;
}
int min_max(float testArray[])
{
	sort(testArray, testArray+15);
	int min ,max;
	out(testArray);
	cout<<"3rd minimum number in testArray: "<<testArray[2]<<endl;
	cout<<"5th maximum number in testArray: "<<testArray[10]<<endl;
	return 0;
}
int swapFun(float testArray[])
{
	for(int i = 0; i<5; i+=3)
	{
		swap(testArray[i], testArray[i+1]);
		swap(testArray[i+1],testArray[i+2]);
	}
	out(testArray);
	return 0;
}


int com_rep(float array1[], float array2[], float array3[])
{
	int count =0;
	for(int i=0;i<n;i++)
	{
		for(int j =0; j<n;j++)
		{
			if(array1[i]==array2[j])
			{
				count++;
			}
		}
	}
	int m = count;
	float ary1[count];
	count = 0;
	for(int i=0;i<n;i++)
	{
		for(int j =0; j<n;j++)
		{
			if(array1[i]==array2[j])
			{
				ary1[count] = array1[i];
				count++;
				continue;
			}
		}
	}
	count = 0;
	for(int i=0;i<m;i++)
	{
		for(int j =0; j<n;j++)
		{
			if(ary1[i]==array3[j])
			{
				count++;
			}
		}
	}
	float ary2[count];
	count = 0;
	for(int i=0;i<m;i++)
	{
		for(int j =0; j<n;j++)
		{
			if(*(ary1+i)==*(array3+j))
			{
				*(ary2+count) = *(ary1+i);
				count++;
				continue;
			}
		}
	}
	int e = 0;
	float ary3[count];
	for(int i=0;i<count;i++)
	{
		for(int j =0; j<m;j++)
		{
			if(*(ary2+i)== *(ary1+j))
			{
				*(ary3+count) = *(ary2+i);
				e++;
			}
		}
	}
	if(e == 0)
	{
		cout<<"There is no element common in all 3 arrays."<<endl;
	}
	else
	{
		cout<<"Common elements in 3 arrays: ";
		for(int i = 0; i<count; i++)
		{
			cout<<*(ary3+i)<<",";
		}
		cout<<endl;
	}
    float arry[n];
    for(int i = 0; i<n; i++)
	{
		*(arry+i) = 0;
	}
    for(int i = 0; i<n; i++)
    {
        count = 0;
        for(int j = i+1; j<n; j++)
        {
            if(*(array1+i) == *(array1+j))
            {
                *(array1 +j ) = 0;
                *(arry +i) = *(array1 +i);
            }
        }

    }
    e = 0;
    for(int i = 0; i<n; i++)
    {
    	if( arry[i] != 0)
    	{
    		cout<< "Repeated number "<<*(arry+i)<<" in array_1"<<endl;
    		e++;
    	}
    }
   	if(e == 0)
    {
   		cout<<"There is no repeated number in array."<<endl;
    }
	return 0;
}
int powerSet(float testArray[] ,int x)
{

	int size = pow(2,x);
	int count = 0,a=x;
	cout<<"{ {} ,";
	for(int i = 1; i<=size-1; i++)
	{
		for(int k = 0; k<x; k++)
		{
			cout<<" {";
			for(int j = 0; j<=count; j++)
			{				
				if(j == count)
				{
					cout<<testArray[j];	
				}
				else
				{
					cout<<testArray[j]<<",";
				}
			}
			cout<<"} "<<",";
			
		}
		// size-=2;
		count++;
		x--;
	
		// if(i == size-1)
		// {
		// 	cout<<" {";
		// 	for (int y = 0; y < a; y++)
		// 	{
		// 		if(y == a-1)
		// 		{
		// 			cout<<testArray[y];	
		// 		}
		// 		else
		// 		{
		// 			cout<<testArray[y]<<",";
		// 		}
		// 	}
		// 	cout<<"} ";
		// }
	}


	cout<<"}"<<endl;
	return 0;
}
int main()
{
	// float *testArray = new float[15]; 
	// float testArray[] = {1,1,9,2};
	// out(testArray);
	// for(int i = 0; i<15; i++)
	// {
	// 	*(testArray+i) = i + 2;
	// }

	float *array1 = new float[n],*array2 = new float[n],*array3 = new float[n],*testArray = new float[15];
	cout<<"Enter value in array1"<<endl;
	for(int i = 0; i<n; i++)
	{
		cin>>*(array1+i);
	}
	cout<<"Enter value in array2"<<endl;
	for(int i = 0; i<n; i++)
	{
		cin>>*(array2+i);
	}
	cout<<"Enter value in array3"<<endl;
	for(int i = 0; i<n; i++)
	{
		cin>>*(array3+i);
	}
	for(int i = 0; i<n*3; i++)
	{
		*(testArray+i) = 0;
	}
	copyArray(array1,array2,array3,testArray);
	
   //  searchValue(testArray);
   // frequency(testArray);
	// min_max(testArray);
	// swapFun(testArray);
	// com_rep(array1,array2,array3);

	return 0;
}
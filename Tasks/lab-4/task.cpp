#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int max(int array [] , int size)
{
	static int m = 0; 
	if(size == 0)
	{
		return m;
	}
	else
	{
		if(m == 0)
		{
			if(array[0] > array[size-1])
			{
				m = array[0];
				return max(array ,size-1);
			}
			else
			{
				m = array[size-1];
				return max(array ,size-1);		
			}
		}
		else
		{
			if(m > array[size-1])
			{
				return max(array ,size-1);
			}
			else
			{
				m = array[size-1];
				return max(array ,size-1);
			}
		}
	}
}
int wordCount(string s,int size)
{
	static int Count = 1 ;
	if(size == 0)
	{
		return Count++;
	}
	else
	{
		if(s[size-1] == ' ')
		{
			Count++;
			return wordCount(s , size-1);
		}
		else
		{
			return wordCount(s,size-1);
		}
	}
}
int vowel(string s, int size)
{
	static int count = 0;
	if(size == 0)
	{
		return count;
	}
	else
	{
		if(s[size-1] == 'A' || s[size-1] == 'E' ||s[size-1] == 'I' || s[size-1] == 'O' || s[size-1] == 'U' || s[size-1] == 'a' ||s[size-1] == 'e' || s[size-1] == 'i' || s[size-1] == 'o' || s[size-1] == 'u')
		{
			count+=1;
			return vowel(s , size-1);
		}
		else{
			return vowel(s,size-1);
		}
	}

}
int search(int ar[], int size, int ele)
{
	if(ar[size-1] == ele)
	{
		return size-1;
	}
	else
	{
		return search(ar, size-1,ele);
	}
}
int replace(int ar[], int size, int ele, int rep)
{
	if(ar[size-1] == ele)
	{
		 ar[size-1] = rep;
		 return 0;
	}
	else
	{
		return replace(ar, size-1,ele,rep);
	}
}

int main()
{
	string str = "ali husnain";
	int l = str.length();
	// cout<<wordCount(str,l)<<endl;
	// cout<<vowel(str ,l)<<endl;
	// int max1;
	int array1[] = {1,2,3,4,5};
	// cout<<max(array1 , 5)<<endl;
	// int x;
	// cout<<"Which element do you want to search: ";
	// cin>>x;
	// cout<<x<<" is at "<<search(array1 ,5,x)<<" index of array."<<endl;
	cout<<replace(array1 ,5,2,10);
	cout<<array1[1];
	return 0;
}
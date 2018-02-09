#include <iostream>
#include <string>
using namespace std;

int lowerCase(string ch)
{
	for(int i = 0; i<ch.length();i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
			ch[i] = ch[i] +32;
	}
	for(int i = 0;i<ch.length();i++)
		{cout<<ch[i];}
	return 0;
}
int main()
{
	string str;
	cout<<"Enter a line to convert lower case; ";
	getline(cin ,str);
	lowerCase(str);
	return 0;
}
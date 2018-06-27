#include<iostream>
// #include <bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;

int main()
{

// method-1;  without using open() function

// ofstream out("input.txt");
// out <<"my first file\n";
// for(int i = 0; i<4; i++)
// {
// 	string str;
// 	cin>>str;
// 	out<<str<<endl;
// }
// ifstream in("input.txt");
// if(in.is_open())
// {
// 	cout<<"successfully opened\n";
// }
// else
// {
// 	cout<<"Error open\n";
// }
// for(int i = 0; i<5; i++)
// {
// 	string str;
// 	in>>str;
// 	cout<<str<<endl;
// }
// string str, st[6];
// ifstream in;
// in.open("input.txt");
// int i = 0;
// while(getline(in,str))
// {
	// cout<<str<<" ";
	// st[i] = str;
	// i+=1;
// }
// i= 0;
// while(i<6)
// {
// 	cout<<st[i];
// 	i+=1;
// }
// cout<<endl;
// in.close();

char ch;
int x,y;
double db;
string str;
cout<<"File name: ";
cin>>str;
ifstream in;
in.open(str);
while(!in.eof())
{
	in>>x>>y>>str>>ch>>db;
}
cout<<x<<"  "<<y<<"  "<<str<<"  "<<ch<<"  "<<db<<"  "<<endl;
in.close();


// method-2; using open() function
//ofstream out;
//out.open("input.txt");
//out.close();


// system("pause");
return 0;
}

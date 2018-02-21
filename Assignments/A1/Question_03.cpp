#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <math.h>

using namespace std;

struct Employee_Struct
{
	string firstName ,lastName, fatherName,bloodGroup,factoryName, department,emailAddress,homeAddress;
	int empNumber, empAge, phoneNumber, salaries[5];

	int data()
	{
		cout<<" ______________________________________________________________________________________________________________________________"<<endl;
		printf("| %-10s | %-10s | %-10s | ", "First_Name","Last_Name","Father_Name");
		printf("%-4s | %-4s| %-4s | %-5s | ", "E_N","B_G","Age","Fac_N");
		printf("%-8s| %-6s| %-5s | %-4s |","Department","Phone","Email","HA");
		printf(" %-4s| %-4s| %-4s| %-4s|\n", "s1","s2","s3","s4");
		cout<<"|____________|____________|_____________|______|_____|______|_______|___________|_______|_______|______|_____|_____|_____|_____|"<<endl;
		return 0;
	} 
	int showData()
	{
		int uu = 0;
		printf("| %-10s | %-10s | %-11s | ", firstName.c_str(),lastName.c_str(),fatherName.c_str());
		printf("%-4d | %-4s| %-4d | %-5s | ", empNumber,bloodGroup.c_str(),empAge,factoryName.c_str());
		printf(" %-8s | %-6d| %-5s | %-4s |",department.c_str(),phoneNumber,emailAddress.c_str(),homeAddress.c_str());
		for(int z = 0; z<4; z++)
		{
			uu  = salaries[z];
			// printf(" %-3d|", uu);
			cout<<" "<<uu<<"k"<<" |";
		}
		cout<<endl;
		// cout<<"|____________|____________|_____________|______|_____|______||_______|___________|_______|_______|______|_____|_____|_____|_____|"<<endl;
		return 0;
	}

}; 
int strTOint(string ss)
{
	int in = 0;
	// ss.erase('\n');

		int num2 = 0,num1 = 0,len =0;
		len = ss.length();
	for(int j = len-1 ; 0<=j;j--)
	{
		if(ss[j] >= '0' && ss[j] <= '9')
		{
			num1 = int(ss[j]) - 48;
			num1 = num1 * pow(10,in);
			num2+=num1;
		}
		else
		{
			continue;
		}
		in++;
	}
	// cout<<num2<<endl;
	return num2;
}

void inputData(string data[],Employee_Struct array1[])
{
	int x=15;
	for(int i = 0; i<11; i++)
	{
		array1[i].firstName = data[x];
		array1[i].lastName = data[x+1];
		array1[i].fatherName = data[x+2];
		array1[i].empNumber = strTOint(data[x+3]);
		array1[i].bloodGroup = data[x+4];
		array1[i].empAge = strTOint(data[x+5]);
		array1[i].factoryName =data[x+6];
		array1[i].department = data[x+7];
		array1[i].phoneNumber = strTOint(data[x+8]);
		array1[i].emailAddress = data[x+9];
		array1[i].homeAddress = data[x+10];

		array1[i].salaries[0] = strTOint(data[x+11]);
		array1[i].salaries[1] = strTOint(data[x+12]);
		array1[i].salaries[2] = strTOint(data[x+13]);
		array1[i].salaries[3] = strTOint(data[x+14]);
		x+=15;
	}
	// strTOint(data,emp1);

}

void swap1(Employee_Struct &a, Employee_Struct &b)
{
	Employee_Struct temp;
	temp = a;
	a = b;
	b = temp;
}
int updateSalary(Employee_Struct ar[])
{
	for(int i = 0; i<11; i++)
	{
		for(int j =0;j<4; j++)
		{
			ar[i].salaries[j] += 5;
		}
	}
	cout<<"U P D A T E D  S A L A R I E S ..."<<endl;
	ar->data();
	for(int i = 0; i<11;i++)
	{
		ar[i].showData();
	}
		cout<<"|____________|____________|_____________|______|_____|______|_______|___________|_______|_______|______|_____|_____|_____|_____|"<<endl;
		
	return 0;
}
int ascendingOrder(Employee_Struct aar[],int size)
{
	cout<<"Ascending sorting of age..."<<endl;
	for(int i = 0; i<10; i++)
	{
		for(int j =i+1; j<11; j++)
		{
			if(aar[i].empAge > aar[j].empAge)
			{
				swap(aar[i] , aar[j]);
			}
		}
	}
		aar->data();
		for(int i = 0; i<11;i++)
	{
		aar[i].showData();
	}
		cout<<"|____________|____________|_____________|______|_____|______|_______|___________|_______|_______|______|_____|_____|_____|_____|"<<endl;
	
	return 0;
}

int main()
{
	Employee_Struct array1[11],em;
	ifstream file;
	string line[12], k, l, parts[180];
	int cou = 0;
	file.open("file.txt");
	while (getline(file ,k))
	{
		// cout<<k<<endl;
		line[cou] = k;
		cou++;
		// line.push_back('\n');
	}
	file.close();
	// cout<<cou<<endl;
	int len = 0,o=0;
	for(int i = 0; i<12; i++)
	{
		len = line[i].length();
		for(int j = 0; j<len; j++)
		{
			if(line[i][j] == ' ')
			{
				parts[o] =  l;
				l = "";
				o++;
			}
			else
			{
				l+=line[i][j];
			
			}
		}	
	}
	inputData(parts,array1);
	em.data();
	for(int i = 0; i<11;i++)
	{
		array1[i].showData();
	}
		cout<<"|____________|____________|_____________|______|_____|______|_______|___________|_______|_______|______|_____|_____|_____|_____|"<<endl;

	ascendingOrder(array1,11);
	swap1(array1[0],array1[1]);

	cout<<"A F T E R  S W A P P I N G ..."<<endl;
	em.data();
	for(int i = 0; i<11;i++)
	{
		array1[i].showData();
	}
		cout<<"|____________|____________|_____________|______|_____|______|_______|___________|_______|_______|______|_____|_____|_____|_____|"<<endl;
	updateSalary(array1);
	return 0;
}
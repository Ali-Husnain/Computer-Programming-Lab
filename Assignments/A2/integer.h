#include <iostream>
#include <string>

using namespace std;

class intType
{
private:
	 int num;
public:
	int getNum()
	{
		return num;
	}
	void setNum(int num1)
	{
		num = num1;
	}
	void printNum()
	{
		cout<<num;
	}
	int numLength()
	{
		int c = 0; 
		while(num/10 != 0)
		{
			c++;
			num /= 10;
		}
		return c+1;
	}
	int pow(int num1 , int num2)
	{
		int p = 1;
		for(int i = 0; i<num2; i++)
		{
			p *= num1;

		}
		return p;
	}
	string int_to_string()
	{
		int ss,num1 = getNum(), s = numLength();
		char v;
		string str = "";
		for(int i = 0; i<s; i++)
		{
			str += char(num1 % 10 + 48);
			num1 /= 10;
		}
		ss = s-1;
		for(int i = 0; i<s/2; i++)
		{	
			swap(str[i],str[ss]);
			ss--;
		}
		return str;
	}
	string int_to_string2(int num1, int s)
	{
		int ss;
		string str = "";
		for(int i = 0; i<s; i++)
		{
			str += char(num1 % 10 + 48);
			num1 /= 10;
		}
		ss = s-1;
		for(int i = 0; i<s/2; i++)
		{	
			swap(str[i],str[ss]);
			ss--;
		}
		return str;
	}
	string reverseStr(string str)
	{
	    int n = str.length();
	    for (int i=0; i<n/2; i++)
	       swap(str[i], str[n-i-1]);
	   return str;

	}
	int integerNumberLength(int num)
	{
		static int count = 0;
		int y = num/10;
		if(y == 0)
		{
			count++;
			//cout<<"length of integer = "<<count<<endl;
			return count;
		}
		else
		{
			count++;
			return integerNumberLength(y);
		}
	}
	int string_to_int(string str)
	{

		int n = 0,no = 0;
		for(int i = 0; i<str.length(); i++)
		{
			if(str[i] >= '0' && str[i] <= '9')
			{
				no += (10*n) + (int(str[i])-48);
				n++;
			}
		}
		return no;
	}
	int reverseNum()
	{
		cout<<"Reverse Number: ";
		int m,no = 0,s,num1 = getNum() ,n = numLength(),nn=n;
		for(int i = 0; i<n; i++)
		{
			no += num1 % 10 * pow(10,nn-1);
			num1 /= 10;
			nn--;
		}
		return no;
	}
	int sumAllDigits()
	{
		cout<< "Sum of All: ";
		int sum = 0,num1 = num, n = numLength();
		for(int i = 0; i<n; i++)
		{
			sum += num1%10;
			num1 /= 10;
		}
		return sum;
	}
	int avgDigits()
	{
		cout<<"Average of digits: ";
		int sum = 0,num1 = num,n = numLength();
		for(int i = 0; i<n; i++)
		{
			sum += num1%10;
			num1 /= 10;
		}
		return sum/n;
	}
	int midDigit()
	{
		cout<<"Middle Number: ";
		string str = int_to_string();
		int s = str.length(),s2;
		if(s%2 != 0)
		{
			return str[s/2]-48;
		}
		else
		{
			s = str[s/2]-48;
			s2 = str[(s/2)+1]-48;
			cout<< s2<<" and "<<s<<" are middle digits. So, there midDigit is average of both of them."<<endl;
			s = (s+s2)/2;
			return s;
		}
	}
	bool palindrome()
	{
		cout<<"palindrome: ";
		string str = int_to_string();
		int s = str.length()-1;
		for(int i = 0; i<str.length(); i++)
		{
			if(str[i] == str[s])
			{
				s--;
				continue;
			}
			else
			{
				cout<<"It is not palindrome number."<<endl;
				return false;
			}
		}
		// cout<<num1<<" is a palindrome number."<<endl;
		return true;
	}
	int countEven()
	{
		cout<<"Count even in number: ";
		int count = 0;
		string str = int_to_string();
		for(int i = 0; i<str.length(); i++)
		{
			if(int(str[i])%2 == 0)
			{
				count++;
			}
		}
		return count;
	}
	int countOdd()
	{
		cout<"count odds: ";
		int count = 0;
		string str = int_to_string();
		for(int i = 0; i<str.length(); i++)
		{
			if(int(str[i])%2 != 0)
			{
				count++;
			}
		}
		return count;
	}
	int max()
	{
		int max = 0;
		string str = int_to_string();
		for(int i = 0; i<str.length()-1; i++)
		{
			if(str[i]>=str[i+1])
			{
				if(str[i]-48 >= max)
				{
					max = str[i]-48;
				}
			}
			else
			{
				if(str[i+1]-48 >= max)
				{
					max = str[i+1]-48;
				}
			}
		}
		cout<<"Maximum digit is: ";
		return max;
	}


	int min()
	{
		int min = 9;
		string str = int_to_string();
		for(int i = 0; i<str.length()-1; i++)
		{
			if(str[i] <= str[i+1])
			{
				if(min>=str[i]-48)
				{
					min = str[i]-48;
				}
			}
			else
			{
				if(min>=str[i+1]-48)
				{
					min = str[i+1]-48;
				}
			}
		}
		cout<< "Minimum digit is: ";
		return min;
	}
	int sumOfEven()
	{
		cout<<"Sum of evens: ";
		string str = int_to_string();
		int sum = 0;
		for(int i =0; i<str.length(); i++)
		{
			if(str[i] % 2 == 0)
			{
				sum += (str[i] - 48);
			}
		}
		return sum;
	}
	int sumOfOdd()
	{
		cout<<"Sum of Odds: ";
		string str = int_to_string();
		int sum = 0;
		for(int i =0; i<str.length(); i++)
		{
			if(str[i] % 2 != 0)
			{
				sum += (str[i] - 48);
			}
		}
		return sum;
	}
	int appendDigit(int num1)
	{
		cout<<"Append digits: ";
		int a  = getNum(),b;
		setNum(num1);
		num1  = getNum();
		b = numLength();
		a  = a * pow(10, b)+num1;
		return a;
	}
	int deleteDigit(int num1)
	{
		cout<<"delete all "<<num1<<" in "<<getNum()<<endl;
		int a = getNum(),c = numLength(), b = 0,n=0,no=0;
		
		for(int i = 0 ; i<c; i++)
		{
			b = a % 10;
			if(b != num1)
			{	
				no += pow(10,n) * b;
				a /= 10;
				n++;
			}
			else
			{
				a /= 10;
			}
		}
		return no;
	}
	int remainder(int num1, int num2)
	{
		int a;
		setNum(num1);
		a = getNum();
		cout<<"Remainder is: ";
		return num1 % num2;
	}
	long toBinary()
	{
		cout<<"You can compute binary number upto 1023th decimal place.\nOtherwise, it will give wrong answer."<<endl;
		int a = getNum(),n=0,i=0;
		long s = 0;
		while( a != 0)
		{
			s += (pow(10,n) * (a%2));
			n++;i++;a/=2;
		}
		cout<<"Binary: ";
		return s;
	}
	string toHexadecimal()
	{
		cout<<"Hexadecimal: ";
		string sum = "";
		int a = getNum(), n=0,l = 0;
		while(a>15)
		{
			n = a % 16;
			// cout<<n<<endl;
			a /= 16;
			// cout<<a<<endl;
			if(n==10)
				sum+='A';
			if(n==11)
				sum+='B';
			if(n==12)
				sum+='C';
			if(n==13)
				sum+='D';
			if(n==14)
				sum+='E';
			if(n==15)
				sum+='F';
			if(n>=0 && n<=9)
				sum += char(n+48);
		}
		sum+=char(a+48);
		return reverseStr(sum);
	
	}
	string toASCII()
	{
		cout<<"ASCII values of ";
		int a = getNum(), b = numLength();
		cout<<a<<": ";
		string n = "" ;
		for(int i = 0; i<b; i++)
		{
			n += char((a % 10)+48);
			a /= 10;
		}
		return reverseStr(n);
	}
	intType()
	{
		// cout<<"cc"<<endl;
	}
	~intType()
	{
		// cout<<"DD"<<endl;
	}	
};

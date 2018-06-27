#include <iostream>

using namespace std;

class times
{
private:
	int hr ,mm, ss;
public:
	void display()
	{
		cout<<hr<<":";
		cout<<mm<<":";
		cout<<ss<<endl;
	}
	int seconds()
	{
		int t;
		t = 3600* hr + 60 * mm + ss;
		return t;
	}
	times add(times a, times b)
	{
		times c(0,0,0);
		int n=0;
		c.ss = a.ss + b.ss;
		if(c.ss>60)
		{
			c.ss -= 60;
			n++;
		}
		c.mm = a.mm + b.mm+n;
		n=0;
		if(c.mm>60)
		{
			c.mm -= 60;
			n++;
		}
		c.hr = a.hr + b.hr + n;
		n=0;
		if(c.hr >= 24)
		{
			c.hr -= 24;
			n++;
		}
		cout<<"hour +"<<n<<" " ;
		return c;
	}
	times(int h=11, int m=59, int s=59)
	{
		if(h>=0&&h<=23)
			hr = h;
		else
		{
			cout<<"Wrong argu\n";
			return;
		}
		if(m>=0 && m<60)
			mm = m;
		else
		{
			cout<<"Wrong argu\n";
			return;
		}
		if(s>=0&&s<60)
			ss = s;
		else
		{
			cout<<"Wrong argu\n";
			return;
		}
	}
	~times()
	{
		// cout<<"hello"<<endl;
	}
	
};

int main()
{
	times t(23),t2(11),t3;
	t.display();
	t2.display();
	t3 = t3.add(t,t2);
	t3.display();
	// t.seconds();
	return 0;
}
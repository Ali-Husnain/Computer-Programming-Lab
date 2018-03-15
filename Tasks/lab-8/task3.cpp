#include <iostream>
#include <stdlib.h>

using namespace std;

class velocity
{
private:
	int dist,time ,vel;
public:
	int findVelocity()
	{
		return vel = dist * time;
	}
	void print()
	{
		cout<<"time = "<<time<<endl;
		cout<<"distance = "<<dist<<endl;
		cout<<"velocity = "<<vel<<endl;
	}
	void initialize(int d = 0, int t=0)
	{
		dist = abs(d);
		time = abs(t);
	}
	velocity operator +(velocity v)
	{
		velocity v0;
		v0.dist = dist + v.dist;
		v0.time = time + v.time;
		v0.vel = findVelocity() + v.findVelocity(); 
		return v0;
	}
	velocity operator -(velocity v)
	{
		velocity v0;
		v0.dist = abs(dist - v.dist);
		v0.time = abs(time - v.time);
		v0.vel = abs(findVelocity() - v.findVelocity()); 
		return v0;
	}
	velocity operator *(velocity v)
	{
		velocity v0;
		v0.dist = dist * v.dist;
		v0.time = time * v.time;
		v0.vel = findVelocity() * v.findVelocity(); 
		return v0;
	}
	velocity operator /(velocity v)
	{
		velocity v0;
		v0.dist = dist / v.dist;
		v0.time = time / v.time;
		v0.vel = findVelocity() / v.findVelocity(); 
		return v0;
	}
	bool operator >=(velocity v)
	{
		if(findVelocity() >= v.findVelocity())
		{
			cout<<"true\n";
			return true;
		}
		else
		{
			cout<<"False\n";
			return false;
		}
	}
	bool operator <=(velocity v)
	{
		if(findVelocity() <= v.findVelocity())
		{
			cout<<"true\n";
			return true;
		}
		else
		{
			cout<<"False\n";
			return false;
		}
	}
	bool operator ==(velocity v)
	{
		if(findVelocity() == v.findVelocity())
		{
			cout<<"true\n";
			return true;
		}
		else
		{
			cout<<"False\n";
			return false;
		}
	}
	bool operator !=(velocity v)
	{
		if(findVelocity() == v.findVelocity())
		{
			cout<<"false\n";
			return false;
		}
		else
		{
			cout<<"true\n";
			return true;
		}
	}
	bool operator >(velocity v)
	{
		if(findVelocity() > v.findVelocity())
		{
			cout<<"true\n";
			return true;
		}
		else
		{
			cout<<"False\n";
			return false;
		}
	}
	bool operator < (velocity v)
	{
		if(findVelocity() < v.findVelocity())
		{
			cout<<"true\n";
			return true;
		}
		else
		{
			cout<<"False\n";
			return false;
		}
	}
	velocity(int d = 0, int t = 0)
	 {
	 	dist = abs(d);
	 	time = abs(t);
	 }
	~velocity()
	{ }
	
};

int main()
{
	velocity v1(4,5),v2(3,5),v3;
	// int v3;
	// v1.findVelocity();
	// v3 = v2.findVelocity();
	// cout<<v3;
	v1 >= v2;
	v1 <= v2;
	v1 > v2;
	v1 < v2;
	v1 == v2;
	v1 != v2;
	// v3.print();

	return 0;
}
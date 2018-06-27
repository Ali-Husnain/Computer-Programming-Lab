#include <bits/stdc++.h>

using namespace std;

#define pi 3.141592653589793
#define size 5

class shape
{
protected:
	string color;
public:
	virtual void print() = 0;
	shape(string clr = "color")
    {
    	color = clr;
    }
	~shape()
    {
    	cout<<"destructor of shape\n\n";
    }

};

class twoDShape : public shape
{

public:
	void virtual area() = 0;
	void virtual perimeter() = 0;
	twoDShape()
	{}
	~twoDShape()
	{
		cout<<"destructor of 2Dshape\n\n";
	}
	void print()
	{
		cout<<"2Dshape"<<endl;
	}
};


class rectangle: public twoDShape
{
private:
	float width, height;
public:
	void getLenWid()
	{
		cout<<"length = ";
		cin>>height;
		cout<<"width = ";
		cin>>width;
	}
	void area()
	{
		float area = width * height;
		cout<<"Area of rectangle = "<<area<<endl;
	}
	void perimeter()
	{
		float perimeter = 2 * ( width + height );
		cout<<"perimeter of rectangle = "<<perimeter<<endl;
	}
	rectangle(float w = 0, float h =0)
	{
		width = w;
		height = h;
	}
	~rectangle()
	{
		cout<<"destructor of rectangle\n\n";
	}
	void print()
	{
		cout<<"rectangle"<<endl;
	}
};
class circle: public twoDShape
{
private:
	float radius;

public:
	void area()
	{
		float area = pi *(radius*radius);
		cout<<"Area of circle = "<<area<<endl;
	}
	void perimeter()
	{
		float perimeter = 2 * pi * radius;
		cout<<"circumference of circle(perimeter) = "<<perimeter<<endl;
	}
	circle(float r = 0)
	{
		radius = r;
	}
	~circle()
	{
		cout<<"destructor of circle\n\n";
	}
	void print()
	{
		cout<<"circle"<<endl;
	}

};

class threeDShape : public shape
{
public:
	void virtual volume() = 0;
	threeDShape()
	{}
	~threeDShape()
	{
		cout<<"destructor of 3Dshape\n\n";
	}
	void print()
	{
		cout<<"3Dshape"<<endl;
	}
};

class sphere: public threeDShape
{
private:
	float radis;
public:
	void volume()
	{
		float vol = (4.0/3.0)*pi*(radis*radis*radis);
		cout<<"volume of sphere = "<<vol<<endl;
	}
	sphere(float s = 0)
	{
		radis = s;
	}
	~sphere()
	{
		cout<<"destructor of sphere\n\n";
	}
	void print()
	{
		cout<<"sphere"<<endl;
	}
};

class pyramid: public threeDShape
{
private:
	float len, wid, hei;
public:
	void getLen_Wid_Hei()
	{
		cout<<"length = ";
		cin>>len;
		cout<<"width = ";
		cin>>wid;
		cout<<"height = ";
		cin>>hei;
	}
	void print()
	{
		cout<<"pyramid"<<endl;
	}
	void volume()
	{
		float vl = len*wid*hei;
		cout <<"volume of pyramid = "<<vl<<endl;
	}
	pyramid(float l = 0,float w = 0, float h = 0)
	{
		len = l;
		wid = w;
		hei = h;
	}
	~pyramid()
	{
		cout<<"destructor of pyramid\n\n";
	}

};

// class  base
// {
// public:
// 	 virtual ~base() =0;


// };
// base::	~base()
// 	{
// 		cout<<"base destructor called.\n";
// 	}
// class derived:public base
// {
// public:
// 	~derived()
// 	{
// 		cout<<"derived destructor called\n";
// 	}

// };


class test
{
private:
	int *array;
public:
	void intialize()
	{
		for (int i = 0; i < size; i++)
		{
			array[i] = i + 2;
		}
	}
	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}

	test sum2(test a , test b)
	{
		test c;
		for (int i = 0; i < size; i++)
		{
			c.array[i] = a.array[i] + b.array[i];
		}
		return c;

	}
	test(const test &obj)    ///// for shallow copy
	{
		//////copy constructor: allocating the memory
		// array = new int[size];
		// array = obj.array;
		array = new int[size];
		for(int i =0; i<size; i++)
		{
			array[i] =  obj.array[i];
		}
		cout<<"copy constructor\n";
	}
	test()
	{
		cout<<"create array\n";
		array = new int[size];
	}
	~test()
	{
		cout<<"delete array\n";
		delete [] array;
	}

};

int main()
{
	// rectangle *re = new rectangle();
	// circle *cir = new circle();
	// sphere *sph = new sphere();
	// pyramid *py = new pyramid();
	// re->area();
	// cir->area();
	// re->perimeter();
	// cir->perimeter();
	// sph->volume();
	// py->volume();

	// ///// alternative method of calling

	// // (*re).area();
	// // (*cir).area();
	// // (*re).perimeter();
	// // (*cir).perimeter();
	// // (*sph).volume();
	// // (*py).volume();

	// twoDShape * d = new circle(), *d2 = new rectangle();
	// d->area();
	// d2->area();
	// threeDShape *th = new sphere();
	// th-> volume();

	// base *b = new derived();
	// delete b;

	test x,y,z;
	// x.intialize();
	// x.print();
	y.intialize();
	z.intialize();
	// y.print();
	// y.print();

	test a = y.sum2(y,z);
	a.print();
	y.print();
	z.print();


    return 0;
}

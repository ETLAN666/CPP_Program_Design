/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;


class CStereoShape
{
private:
	//static int numberOfObject;
	double width, length, high;
public:
	//CStereoShape() { numberOfObject++; }
	//static int GetNumOfObj() { return numberOfObject; }
	virtual double GetArea()
	{
		return 0.0;
	}
	virtual double GetVolume()
	{
		return 0.0;
	}
	virtual void Show()
	{
		cout << "Nothing" << endl;
		
	}
};
class CCube : public CStereoShape
{
private:
	double W, H, L;
public:
	CCube() { W = 1.0, H = 1.0, L = 1.0; }
	CCube(double x, double y, double z)
	{
		L = x, W = y, H = z;
	}
	CCube(const CCube& cc)
	{
		this->H = cc.H;
		this->L = cc.L;
		this->W = cc.W;

	}
	void Show()
	{
		cout << "width:" << W << endl;
		cout << "length:" << L << endl;
		cout << "high:" << H << endl;
		cout << "surface area:" << GetArea() << endl;
		cout << "volume:" << GetVolume() << endl;
	}
	 double GetArea()
	{
		return (W * L + W * H + L * H) * 2;
	}
	 virtual double GetVolume()
	 {
		 return W*H*L;
	 }
};

class CSphere :public CStereoShape
{
private:
	double radius;
public:
	CSphere() { radius = 1.0; }
	CSphere(double r)
	{
		radius = r;
	}
	CSphere(const CSphere& rr)
	{
		this->radius = rr.radius;
	}
	virtual double GetArea()
	{
		return (4.0*3.14*radius*radius);
	}
	virtual double GetVolume()
	{
		return (0.33*3.14*radius* radius* radius);
	}
	virtual void Show()
	{
		cout << "radius:" <<radius<< endl;
		cout << "surface area:" << GetArea() << endl;
		cout << "volume:" << GetVolume() << endl;
	}
	

};


int main()
{
	CCube a_cube(4.0,5.0,6.0);
	CSphere c_sphere(7.9);
	CStereoShape* p;
	p = &a_cube;
	p->Show();
	printf("\n");
	p = &c_sphere;
	p->Show();
	printf("\n");

	cout << "This program generates " << 2 << " objects";
	printf("\n");

	return 0;
}
*/
/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
class Rectangle
{
private:
	double width;
	double height;
public:
	Rectangle()
	{
		width = 1;
		height = 1;
	}
	Rectangle(double, double)
	{
		width = 3.0;
		height = 4.0;
	}
	void set(double _width, double _height)
	{
		width = _width;
		height =_height;
	}
	double getArea()
	{
		return width * height;
	}
	double getPerimeter()
	{
		return 2 * (width + height);
	}
	void show()
	{
		cout << "Width:" << width << endl;
		cout << "Height:" << height << endl;
		cout << "Area:" <<  getArea() << endl;
		cout << "Perimeter:" << getPerimeter() << endl;
	}

};

int main()
{
	const int N = 2;
	Rectangle rec1, rec2;
	printf("Size:%d\n", sizeof(rec1));
	rec1.set(4, 40);
	rec2.set(3.5, 35.9);
	rec1.show();
	rec2.show();
	return 0;
}
*/

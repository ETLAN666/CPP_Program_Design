#include<iostream>
#include<cstdio>

using namespace std;

class Product
{
private:
	int weight;
public:
	Product()
	{
		weight = 0;
		cout << "A<" << endl;
	}
	Product(int w)
	{
		weight = 2;
		cout << "B" << endl;
		
	}
	Product(float w)
	{
		weight = roundf(w);
		cout << "C" << endl;
	}
	Product(const Product &s)
	{
		weight = s.weight;
		cout << "D" << endl;
	}
	Product &operator=(int i)
	{
		weight = i;
		cout << "E" << endl;
		return *this;
	}
	Product& operator=(const Product &s)
	{
		weight = s.weight;
		cout << "F" << endl;
		return *this;
	}
};


int main()
{
	Product a = 2.2;





	return 0;
}

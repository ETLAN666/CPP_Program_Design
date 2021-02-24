/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

class Complex {
private:
	double real;
	double imag;

public:
	Complex(): real(0),imag(0)
	{}
	Complex(double re,double im): real(re),imag(im)
	{}
	Complex Add(const Complex& data)
	{
		Complex sum;
		sum.real = data.real + this->real;
		sum.imag = data.imag + this->imag;
		return sum;
	}
	Complex operator +(const Complex& other) 
	{
		double result_real = real + other.real;
		double result_imag = imag + other.imag;
		return Complex(result_real, result_imag);
	}
	void operator =(const Complex& other)
	{
		this->real = other.real;
		this->imag = other.imag;
	}
	int operator ==(const Complex& other)
	{
		if ((this->real == other.real) && (this->imag == other.imag))
			return 1;
		return 0;
	}
	int operator !=(const Complex& other)
	{
		if ((this->real == other.real) && (this->imag == other.imag))
			return 0;
		return 1;
	}
	Complex operator -(const Complex& other)
	{
		double result_real = real - other.real;
		double result_imag = imag - other.imag;
		return Complex(result_real, result_imag);
	}
	Complex operator *(const Complex& other)
	{
		double result_real = (real*other.real-imag*other.imag);
		double result_imag = (real*other.imag+other.real*imag);
		return Complex(result_real, result_imag);
	}
	Complex operator +(double real)
	{
		double result_real = real + this->real;
		double result_imag = this->imag;
		return Complex(result_real, result_imag);
	}

	Complex operator ~()
	{
		double result_real = real + this->real;
		double result_imag = -(this->imag);
		return Complex(result_real, result_imag);
	}
	friend Complex operator +(double real, const Complex& other)
	{
		double result_real = real + other.real;
		double result_imag = other.imag;
		return Complex(result_real, result_imag);
	}
	friend Complex operator *(double real, const Complex& other)
	{
		double result_real = real * other.real;
		double result_imag = real * other.imag;
		return Complex(result_real, result_imag);
	}
	friend std::ostream& operator<<(std::ostream& os, const Complex& other)
	{
		os << other.real << "+" << other.imag << "i" << endl;
		return os;
	}
	friend istream& operator>>(istream& i, Complex& t)
	{
		i >> t.real >> t.imag;
		return i;
	}

	void show() const
	{
		cout << real << "+" << imag << "i" << endl;
	}
};

int main()
{
	Complex a(3.0, 4.0);
	Complex b(2.0, 6.0);
	cout << "b is" << b << endl;
	cout << "~b is"<<~b << endl;
	cout << "a is " << a << endl;
	cout << "a+b is " << a + b << endl;
	cout << "a-b is " << a - b << endl;
	cout << "a*b is " << a * b << endl;
	cout << "2*b is " << 2 * b << endl;
	Complex c = b;
	cout << "b==c is " << (b == c) << endl;
	cout << "b!=c is " << (b != c) << endl;
	cout << "a==c is " << (a == c) << endl<<endl;
	Complex d;
	cout << "Enter a complex number: " << endl;
	cin >> d;
	return 0;
}
*/

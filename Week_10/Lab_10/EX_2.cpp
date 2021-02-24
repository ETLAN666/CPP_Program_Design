
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

class Number {
private:
	int num;

public:
	Number():num(0)
	{}
	Number(int n) : num(n)
	{}
	void operator =(Number& other)
	{
		this->num = other.num;
	}

	friend Number operator ++(Number &op)//前缀方式
	{
		++op.num;
		return op;
	}
	friend Number operator ++(Number &op,int)//后缀方式
	{
		Number t;
		t.num = op.num;
		op.num++;
		return t;
	}
	friend Number operator --(Number& op)//前缀方式
	{
		--op.num;
		return op;
	}
	friend Number operator --(Number& op, int)//后缀方式
	{
		Number t;
		t.num = op.num;
		op.num--;
		return t;
	}
	friend std::ostream& operator<<(std::ostream& os, const Number& other)
	{
		os << other.num<< endl;
		return os;
	}
};

int main()
{
	Number n1(20);
	Number n2 = n1++;
	cout << n1 << endl;
	cout << n2 << endl;

	Number n3 = n2--;
	cout << n2 << endl;
	cout << n3 << endl;

	Number n4 = ++n3;
	cout << n3 << endl;
	cout << n4 << endl;

	Number n5 =--n4;
	cout << n4 << endl;
	cout << n5 << endl;

	return 0;
}

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

typedef unsigned long Item;

class Stack
{
private:
	enum{MAX=10};
	Item* pitems;
	int size;
	int top;
public:
	Stack(int n = MAX)
	{
		size = n;
		pitems = (Item*)malloc(n * sizeof(Item));
		top = -1;
	}
	Stack(const Stack& st)
	{
		size = MAX;
		pitems = (Item*)malloc(MAX * sizeof(Item));
		top = -1;
	}
	~Stack()
	{
		free(pitems);
	}
	bool isempty() const
	{
		if (top == -1)
			return true;
		else
			return false;
	}
	bool isfull() const
	{
		if (top == size - 1)
			return true;
		else
			return false;
	}
	bool push(const Item& item)
	{
		if (isfull())
			return false;
		top++;
		pitems[top] = item;
		return true;
	}
	bool pop(Item& item)
	{
		if (isempty())
			return false;
		item = pitems[top];
		top--;
		return true;

	}
	Stack& operator=(const Stack& st)
	{
		if (this == &st)
			return *this;
		free(pitems);
		pitems = (Item*)malloc((st.size) * sizeof(Item));
		this->size = st.size;
		this->top = st.top;
		for (int i = 0; i < st.size; i++)
		{
			pitems[i] = st.pitems[i];
		}
		return *this;
	}
};

int main()
{
	Item e;
	Stack sa;
	sa.push(6);
	sa.push(9);
	sa.push(10);
	sa.pop(e);
	cout << "e=" << e << endl;
	Stack sc;
	sc = sa;
	sc.pop(e);
	cout << "e=" << e << endl;
	return 0;
}

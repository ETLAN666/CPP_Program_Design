#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

class CandyBar
{
private:
	char* q;
	
public:
	/*CandyBar(const char* cstr)
	{
		if (cstr) {
			p = new char[strlen(cstr) + 1];
			strcpy(p, cstr);
		}
		else {
			p = new char[1];
			*p = '\0';
		}
	}
	CandyBar(const CandyBar& str)
	{
		p = new char[strlen(str.p) + 1];
		strcpy(p, str.p);
	}
	CandyBar& operator=(const CandyBar& str)
	{
		if (this == &str)
			return *this;
		delete[] p;
		p = new char[strlen(str.p) + 1];
		strcpy(p, str.p);
		return *this;
	}
	~CandyBar()
	{
		delete[] p;
	}*/
	void ALLOC_Do(int n)
	{
		q = (char*)malloc(sizeof(char));
		cout << "请输入名字："<<endl;
		cin >> q;
	}
	friend std::ostream& operator<<(std::ostream& os, const CandyBar& other)
	{
		os << *(other.q) << endl;
		return os;
	}	
	void Delet()
	{
		free(q);
	}
	
};

int main()
{
	int n;
	cout << "请输入名字个数或长度" << endl;
	cin >> n;
	CandyBar sugar;
	sugar.ALLOC_Do(n);
	cout << sugar;
	sugar.Delet();
	
	
	return 0;
}
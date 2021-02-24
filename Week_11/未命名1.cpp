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
	
	void ALLOC_Do(int n)
	{
		q = (char*)malloc(sizeof(char));
		cout << "请输入名字："<<endl;
		scanf("%s",q);
	}
	friend std::ostream& operator<<(std::ostream& os, const CandyBar& other)
	{
		os << other.q << endl;
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
	cout<<"姓名如下："<<endl; 
	cout << sugar;
	sugar.Delet();
	return 0;
}

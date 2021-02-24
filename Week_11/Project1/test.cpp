/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

class CandyBar
{
private:
	string name;
	double weight;
	int calories;
public:
	void setCandyBar(string _name, double _weight, int _calories)
	{
		name = _name;
		weight = _weight;
		calories = _calories;
	}
	void showCandyBar()
	{
		cout<<"Brans"<<name<<endl;
		printf("Weight:%.2lf\n",weight);
		printf("Calories:%d\n",calories);
	}
};

int main()
{
	string _name;
	double _weight;
	int _calories;
	printf("Enter brand name of a candy bar:");
	_name.resize(30);
	cin>>_name;
	printf("Enter weight of the candy bar:");
	cin >> _weight;
	printf("Enter calories of the candy bar:");
	cin >> _calories;
	CandyBar Sugar;
	printf("Size:%d\n", sizeof(Sugar));
	Sugar.setCandyBar(_name, _weight, _calories);
	Sugar.showCandyBar();
	return 0;
}
*/
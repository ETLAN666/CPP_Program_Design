/*
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

typedef struct CandyBar
{
	char brand[30];
	double weight;
	int calories;
}CandyBar;

void setCandyBar(CandyBar& cb)
{
	printf("Enter brand name of a Candy bar:");
	cin >> cb.brand;
	printf("Enter weight of the CandyBar:");
	cin >> cb.weight;
	printf("Enter calories of the CandyBar:");
	cin >> cb.calories;
}
void setCandyBar(CandyBar* cb)
{
	printf("Enter brand name of a Candy bar:");
	cin >> cb->brand;
	printf("Enter weight of the CandyBar:");
	cin >> cb->weight;
	printf("Enter calories of the CandyBar:");
	cin >> cb->calories;
}

void showCandyBar(CandyBar& cb)
{
	printf("Brand:%s\n", cb.brand);
	printf("weight:%lf\n", cb.weight);
	printf("Calories:%d\n", cb.calories);
}

void showCandyBar(CandyBar* cb)
{
	printf("Brand:%s\n", cb->brand);
	printf("weight:%lf\n", cb->weight);
	printf("Calories:%d\n", cb->calories);
}

int main()
{
	CandyBar tt, mm;
	CandyBar* p;
	p = &mm;
	setCandyBar(&tt);
	showCandyBar(&tt);
	setCandyBar(p);
	showCandyBar(p);
	return 0;

}
*/

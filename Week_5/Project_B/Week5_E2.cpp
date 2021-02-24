#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

struct candybar
{
	char name[20];
	float weight;
	float calories;
};

int mainold()
{
	char c;
	candybar* ps,*ts,*qs;
	ps = new(nothrow) candybar[3];
	ts = ps;
	qs = ps;
	for (int i = 0; i < 3; i++, ts++)
	{
		printf("Enter the brand name of candy bar:");
		cin >> ts->name;
		c = getchar();
		printf("Enter the weight:");
		cin >> ts->weight;
		printf("Enter the calories:");
		cin >> ts->calories;
	}
	for (int i = 0; i < 3; i++, qs++)
	{
		printf("Brand name:%s\n", qs->name);
		printf("weight:%f\n", qs->weight);
		printf("Calories:%f\n", qs->calories);
	}
	delete[] ps;
	return 0;


}
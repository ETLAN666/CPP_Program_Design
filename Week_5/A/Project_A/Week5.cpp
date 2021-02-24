#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

struct pizza
{
	char name[20];
	float diameter;
	float weight;
};

int main()
{
	char c;
	pizza* ps = new pizza;
	printf("Enter the name of pizza company:");
	cin >> ps->name;
	c = getchar();
	printf("Enter the diameter of pizza(inches):");
	cin >> ps->diameter;
	printf("Enter the weight of pizza(g):");
	cin >> ps->weight;
	printf("Company name:%s\n",ps->name);
	printf("Pizza diameter:%f\n",ps->diameter);
	printf("Pizza weight:%f\n",ps->weight);
	return 0;


}
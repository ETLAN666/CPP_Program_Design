#include<iostream>
#include<cstring>

using namespace std;

typedef struct CandyBar
{
	string str;
	float weight;
	int calories;
	float per;
}CandyBar;

int main()
{
	CandyBar CC[3];
	int i,cur=0,tmp=0;
	for (i = 0; i < 3; i++)
	{
		cout << "Enter brand name of a Candy bar:";
		cin >> CC[i].str;
		cout << "Enter weight of the Candy bar:";
		cin >> CC[i].weight;
		cout << "Enter calories(an integer value in the Candy bar:";
		cin >> CC[i].calories;
	}
	for (i = 0; i < 3; i++)
	{
		cout << "Brand:" << CC[i].str << endl;
		cout << "Weight:" << CC[i].weight << endl;
		cout << "Calories:" << CC[i].calories << endl;
		CC[i].per = CC[i].calories / CC[i].weight;
	}
	for (i = 0; i < 2; i++)
	{
		if (CC[i + 1].per > CC[i].per)
			cur = i + 1;
		else
			cur = i;

	}
	cout << "The greatest calories per weight is:"  << endl;
	cout << "Brand name:" << CC[cur].str << endl;
	cout << "Calories per weight:" << CC[cur].per;


	return 0;
}
#include<iostream>
#include<cstring>

using namespace std;

typedef struct CandyBar
{
	string str;
	float weight;
	int calories;
}CandyBar;

int main()
{
	CandyBar CC;
	cout << "Enter brand name of a Candy bar:";
	cin >> CC.str;
	cout << "Enter weight of the Candy bar:";
	cin >> CC.weight;
	cout << "Enter calories(an integer value in the Candy bar:";
	cin >> CC.calories;
	cout << "Brand:" << CC.str << endl;
	cout << "Weight:" << CC.weight << endl;
	cout << "Calories:" << CC.calories << endl;
	return 0;
}
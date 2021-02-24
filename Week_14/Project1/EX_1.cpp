/*
#include<cstdio>
#include<iostream>

using namespace std;

class OutOfRangeException
{
public:
	int ival;
	OutOfRangeException(int val) { ival = val; }
};

int sA, sB, sC, sD;
float ans;

int CMP(int x)
{
	if (x < 0 || x>100)
		return 1;
	else
		return 0;
}

void calculateAverage()
{

	
		cout << "Please enter marks for 4 courses:";
		cin >> sA >> sB >> sC >> sD;
		if (CMP(sA))
			throw OutOfRangeException(1);
		if (CMP(sB))
			throw OutOfRangeException(2);
		if (CMP(sC))
			throw OutOfRangeException(3);
		if (CMP(sD))
			throw OutOfRangeException(4);
		ans = (sA + sB + sC + sD) / 4;
		cout << "The average of the four courses is " << ans << endl;	
}




int main()
{
	int T=1;
	char ch;
	while (T)
	{
		try {
			calculateAverage();
		}
		
		catch (OutOfRangeException &re)
		{
			if (re.ival == 1)
				cerr << "The parameter " << re.ival << " is " << sA << " which out of range(0-100)." << endl;
			if (re.ival == 2)
				cerr << "The parameter " << re.ival << " is " << sB << " which out of range(0-100)." << endl;
			if (re.ival == 3)
				cerr << "The parameter " << re.ival << " is " << sC << " which out of range(0-100)." << endl;
			if (re.ival == 4)
				cerr << "The parameter " << re.ival << " is " << sD << " which out of range(0-100)." << endl;
		}
		cout << "would you want to enter another marks for 4 courses(y/n)?";
		cin >> ch;
		if (ch == 'y')
		{
			T = 1;
		}
		else
		{
			cout << "Bye, see you next time.";
			T = 0;
		}
	}
	return 0;
}
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

typedef long long int ll;

int  main()
{
	int x, t1, t2, t3, t4, t5, t6, count = 0;
	x =99999;
	
		if (x <= 99999)
		{
			t5 = x / 10000;
			t4 = (x - t5 * 10000) / 1000;
			t3 = (x - t5 * 10000 - t4 * 1000) / 100;
			t2 = (x - t5 * 10000 - t4 * 1000 - t3 * 100) / 10;
			t1 = (x - t5 * 10000 - t4 * 1000 - t3 * 100 - t2 * 10);
			if (abs(t5 - t4) <= 7 && abs(t4 - t3) <= 7 && abs(t3 - t2) <= 7 && abs(t2 - t1) <= 7 && abs(t5 - t1) > 2)
				count++;
		}
		if (x <= 457439 && x >= 100000)
		{
			t6 = x / 100000;
			t5 = (x - t6 * 100000) / 10000;
			t4 = (x - t6 * 100000 - t5 * 10000) / 1000;
			t3 = (x - t6 * 100000 - t5 * 10000 - t4 * 1000) / 100;
			t2 = (x - t6 * 100000 - t5 * 10000 - t4 * 1000 - t3 * 100);
			t1 = (x - t6 * 100000 - t5 * 10000 - t4 * 1000 - t3 * 100 - t2 * 10);
			if (abs(t6 - t5) <= 7 && abs(t5 - t4) <= 7 && abs(t4 - t3) <= 7 && abs(t3 - t2) <= 7 && abs(t2 - t1) <= 7 && abs(t6 - t1) > 2)
				count++;
		}
	cout << count;
	return 0;

}

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

void Displaymenu();
int Add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
int Divide(int a, int b);
int Modulus(int a, int b);

int main()
{
	Displaymenu();
	int YourChoice;
	int a, b;
	char confirm;
	do
	{
		cout << "Enter your choice(1~5):";
		cin >> YourChoice;
		cout << "Enter your integer numbers:";
		cin >> a >> b;
		cout << "\n";
		switch (YourChoice)
		{
		case 1:printf("Result=%d\n", Add(a, b));
			   break;
		case 2:printf("Result=%d\n",Subtract(a, b));
			break;
		case 3:printf("Result=%d\n", Multiply(a, b));
			break;
		case 4:printf("Result=%d\n", Divide(a, b));
			break;
		case 5:printf("Result=%d\n", Modulus(a, b));
			break;

		}
		cout << "Press y or Y to continue:";
		cin >> confirm;
	} while (confirm == 'y' || confirm == 'Y');

	return 0;

}

void Displaymenu()
{
	printf("===================\n");
	printf("       MENU\n");
	printf("===================\n");
	printf("1.Add\n");
	printf("2.Subtract\n");
	printf("3.Multiply\n");
	printf("4.Divide\n");
	printf("5.Modulus\n");
}

int Add(int a, int b)
{
	return a + b;
}
int Subtract(int a, int b)
{
	return a - b;
}

int Multiply(int a, int b)
{
	return a * b;
}

int Divide(int a, int b)
{
	return a / b;
}

int Modulus(int a, int b)
{
	return a % b;
}





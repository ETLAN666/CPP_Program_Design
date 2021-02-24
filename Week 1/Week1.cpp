#include<iostream>
#include<string>
using namespace std;

int multiply(int x,int y)
{
	if(isalpha(x)!=0||isalpha(y)!=0)
   { printf("wrong!");
	return 0;
}
	int z;
	z=x*y;
	return z;
}

int main()
{
	int a,b;
	printf("Please input two integers:\n");
	cin>>a>>b;
	cout<<multiply(a,b);
	return 0;
}


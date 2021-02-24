#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int Fill_array(double arr[], int size)
{
	int i,t=0;
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
		if(isNumber(chs[i]))
		break;
		t++;
	}
	return t;

}

void show(double arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Enter value #%d:%.1lf\n", i + 1, arr[i]);
	}
	printf("\n");
}
void normalshow(double arr[], int size)
{
	int i;
	for (i = 0; i <size; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");

}
void reshow(double arr[], int size)
{
	int i;
	for (i = size-1; i >=0; i--)
	{
		printf("%.1lf ",arr[i]);
	}
	printf("\n");
}

void noshow(double arr[], int size)
{
	int i;
	printf("%.1lf ", arr[size-1]);
	for (i = 1; i < size-1; i++)
	{
		printf("%.1lf ",arr[i]);
	}
	printf("%.1lf ", arr[0]);
	printf("\n");
}

int main()
{
	int n,input;
	cin >> n;
	double *p;
	p = (double*)malloc(n * sizeof(double));
	input=Fill_array(p, n);
	cout << "Enter the size of an array:"<<input<<endl;
	show(p, n);
	normalshow(p, n);
	reshow(p, n);
	noshow(p, n);
	free(p);

	return 0;
}

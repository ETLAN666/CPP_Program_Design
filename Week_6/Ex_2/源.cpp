#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

typedef struct Box
{
	string Maker;
	float Height;
	float Width;
	float Length;
	float Volume;
};

void Display(Box* box)
{
	cout << "Maker:" << box->Maker << endl;
	cout << "Height:" << box->Height << endl;
	cout << "Width:" << box->Width << endl;
	cout << "Length:" << box->Length << endl;
	cout << "Volume:" << box->Volume << endl;
}

void Do(Box* box)
{
	box->Volume = (box->Height) * (box->Width) * (box->Length);
}


int main()
{
	Box box;
	cin>> box.Maker;
	cin >> box.Height;
	cin >> box.Width;
	cin >> box.Length;
	cin >> box.Volume;
	printf("Before setting volume:\n");
	Display(&box);
	Do(&box);
	printf("After setting volume:\n");
	Display(&box);
	return 0;
}
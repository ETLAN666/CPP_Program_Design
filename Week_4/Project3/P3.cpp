#include<iostream>
#include<fstream>


using namespace std;

int main()
{
	int i;
	char input[40];
	string readline,str2;
	fstream finout("f1.txt",ios::in|ios::out);
	if (finout.good())
	{
		cout << "Please input a string:";
		cin.getline(input, 40);
		finout << input << endl;
		finout.clear();
		finout.seekg(0);

		while (!finout.eof())
		{
			getline(finout,readline);
			cout<<"The contents of f1.txt:";			
			cout<<readline<<endl;
		}
		finout.close();
			}
			else
			    cout<<"it can not be opened";
			    
		
			    
	return 0;

}

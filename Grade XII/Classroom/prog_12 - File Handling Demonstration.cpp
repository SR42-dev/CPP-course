/* A program to demonstrate file handling in C++ */

#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <fstream.h>

void main()
{
	fstream f;
	int n;
	char str[64], ch;
	f.open("text1.txt", ios::out);
	cout<<"Enter the number of lines to be input : ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		gets(str);
		f<<str<<"\n";
	}
	f.close();
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"File Saved"<<endl;
	cout<<"."<<endl;
	cout<<"."<<endl;
	cout<<"."<<endl;

	A :
	{
		cout<<"Open file? (Y/N)"<<endl;
		cin>>ch;
      cout<<endl;
		if(ch == 'Y')
		{
			f.open("text.txt", ios::in);
			while(f)
			{
				f>>str;
				cout<<str<<endl;
			}
		}
		else if (ch == 'N')
		{
			cout<<"Program Terminated";
			exit(0);
		}
		else
		{
			cout<<"Invalid input. Try again ..."<<endl;
			goto A;
		}
	}
}
/* A menu driven program to create, read, and copy a modified file to a new location */

// Not tested

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>

void createFile()
{
	fstream f;
	char str[64]; int n;
	f.open("Data.txt", ios::out); // Can substitute "Data.txt" with a string name to have user input
   cout<<"Enter the number of lines :";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		gets(str);
		f<<str<<"\n";
	}
	f.close();
}

void readFile()
{
	char str[64], fn[16];
	fstream f;
	cout<<"Input filename :";
	gets(fn);
	cout<<endl;
	strcat(fn, ".txt");
	f.open(fn, ios::in);
	while(f)
	{
		f.getline(str, 64);
		f<<str<<"\n";
	}
	f.close();
}

void copyFile()
{
	fstream f1, f2;
	char fn[16], str[64];
	f1.open("Data.txt", ios::in);
	f2.open("Temp.txt", ios::in);
	while(f1)
	{
		 f1.getline(str, 64);
		 for(int i = 0; i < strlen(str); i++)
		 {
			if (isupper(str[i]))
				str[i] -= 32;
			else if (islower(str[i]))
				str[i] += 32;
			else ;
		 }
		 f2<<str<<"\n";
	}
	f1.close();
	f2.close();
}

void main()
{
	do
	{
		clrscr();
		int ch;

		cout<<"Menu"<<endl<<endl;
		cout<<"1. Create File"<<endl;
		cout<<"2. Read File"<<endl;
		cout<<"3. Copy File"<<endl;
		cout<<"4. Exit"<<endl;

		cout<<endl<<"Enter the number corresponding to the desired choice : "<<endl;
		cin>>ch;

		switch (ch)
		{
			case 1 :
				createFile();
				break;
			case 2 :
				readFile();
				break;
			case 3 :
				copyFile();
				break;
			case 4 :
				exit(0);
				break;
			default :
				cout<<"Invalid entry. Retry ..."<<endl;
		}
	cout<<endl;
	cout<<"Press any key to continue ..."<<endl;
	getch();
	}while(1);
}

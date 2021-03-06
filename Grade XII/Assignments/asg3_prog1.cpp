/* Assignment 3 Program 1 */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

class student
{
	private :

		long int stdadmno;
		char stdnam[20];
		int clas;
		char sec[2];

	public :

		void B_input_data(); // function to accept values for all data members given
		void B_output_data(int j); // function to display values for all data members given
};

class club : public student
{
	private :

		int actcode[5], pts[5];

	public :

		char clbcode[4];
		int tpts;
		void Calculate();
		void S_input_data();
		void S_output_data(int j); // i - number of records to display
};

void student :: B_input_data()
{
	cout<<"Input student admission number : ";
	cin>>stdadmno;
	cout<<endl;
	cout<<"Input student name : ";
	gets(stdnam);
	cout<<endl;
	cout<<"Input class : ";
	cin>>clas;
	cout<<endl;
	cout<<"Input section : ";
	gets(sec);
	cout<<endl;
}

void student :: B_output_data(int j)
{
	gotoxy(0,0);
	cout<<"Admn #"<<endl;
	gotoxy(13,0);
	cout<<"Name"<<endl;
	gotoxy(18,0);
	cout<<"Class"<<endl;
	gotoxy(23,0);
	cout<<"Sec"<<endl;
	gotoxy(30,0);
	cout<<"Cl Code"<<endl;
	gotoxy(40,0);
	cout<<"Act Code"<<endl;
	gotoxy(57,0);
	cout<<"Pts"<<endl;
	gotoxy(71,0);
	cout<<"TPts"<<endl;
	gotoxy(0,j);
	cout<<stdadmno;
	gotoxy(13,j);
	cout<<stdnam;
	gotoxy(18,j);
	cout<<clas;
	gotoxy(23,j);
	cout<<sec;
}

void club :: Calculate()
{
	int i;
	tpts = 0;
	for(i = 0; i < 5 ; i++)
		tpts += pts[i];
}

void club :: S_input_data()
{
	int i;
	B_input_data();
	cout<<"Input club code : ";
	gets(clbcode);
	cout<<endl;
	cout<<"Input activity code : ";
	for(i = 0; i < 5; i++)
		cin>>actcode[i];
	cout<<endl;
	cout<<"Input points (5) : ";
	for(i = 0; i < 5; i++)
		cin>>pts[i];
	Calculate();
}

void club :: S_output_data(int j)
{
	B_output_data(j);
	gotoxy(30,j);
	cout<<clbcode;
	for(int k = 0; k < 5; k++)
	{
		gotoxy(40,j+k);
		cout<<actcode[k];
		gotoxy(57,j+k);
		cout<<pts[k];
	}
	gotoxy(71,j);
	cout<<tpts;
}

void createArray(club E[])
{
	for(int i = 0; i < 4; i++)
		E[i].S_input_data();
}

void displayAll(club E[])
{
	for(int i = 0, l = 1; i < 4; i++, l+=5)
		E[i].S_output_data(i+l);
}

void displayHighscore(club E[])
{
	int pos, score = 0;
	for(int i = 0; i < 4; i++)
	{
		if(score < E[i].tpts)
			pos = i;
	}
	E[pos].S_output_data(2);
}

void displayClubRecord(club E[])
{
	char clbchk[4];
	cout<<"Input the desired club code (case sensitive) : ";
	gets(clbchk);
	for(int i = 0, l = 1; i < 4; i++, l+=5)
	{
		if(strcmpi(clbchk,E[i].clbcode) == 0)
			E[i].S_output_data(i+l);
	}
}

void main()
{
	club E[4];
	int ch;
	do
	{
		clrscr();
		cout<<"To change array capacity, contact administrator ..."<<endl<<endl;
		cout<<"MENU"<<endl<<endl;
		cout<<"1. Create Array"<<endl;
		cout<<"2. Display Array"<<endl;
		cout<<"3. Display High Score"<<endl;
		cout<<"4. Display Club Record"<<endl;
		cout<<"5. Exit"<<endl<<endl;
		cout<<"Enter the number corresponding to your choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				clrscr();
				createArray(E);
				break;
			case 2:
				clrscr();
				displayAll(E);
				break;
			case 3:
				clrscr();
				displayHighscore(E);
				break;
			case 4:
				clrscr();
				displayClubRecord(E);
				break;
			case 5:
				clrscr();
				exit(0);
				break;
			default:
				cout<<"Invalid choice. Try again ..."<<endl;
				break;
		}

		cout<<endl;
		cout<<"Press any key to continue ..."<<endl;
		getch();
	}while(1);
}

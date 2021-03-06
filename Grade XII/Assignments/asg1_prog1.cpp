/* Assignment 1 Program 1 */

#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct product
{
	char pcode[8];
	int qty;
	float unitp;
};

class stores
{
	private :

		char cuscode[8];
		char cusname[32];
		char dop[12];
		product prod;
		float amt;
		float disc;
		float calculate_amt();
		void input();
		void output();

	public :

		void accept();
		void display();
};

float stores :: calculate_amt()
{
	float netamt;
	amt = prod.unitp * prod.qty;
	if (amt >= 10000)
		disc = amt * 0.15;
	else if (amt < 10000)
		disc = amt * 0.05;
	netamt = amt - disc;
	return netamt;
}

void stores :: input()
{
	int i;
	cout<<"Input the customer code : ";
	cin>>cuscode;
	cout<<endl;
	cout<<"Input the customer name : ";
	gets(cusname);
	cout<<endl;
	cout<<"Input the date of purchase in dd/mm/yyyy format : ";
	gets(dop);
	cout<<endl;
	cout<<"Input the product code : ";
	cin>>prod.pcode;
	cout<<endl;
	cout<<"Input the quantity purchased : ";
	cin>>prod.qty;
	cout<<endl;
	cout<<"Input the unit price of the product : ";
	cin>>prod.unitp;
	cout<<endl;
   i = calculate_amt();
}

void stores :: output()
{
	cout<<endl;
	cout<<"___________________________________________________________________________"<<endl<<endl;
	cout<<"Customer code : "<<cuscode<<" Name : "<<cusname<<" Date of purchase : "<<dop<<endl;
	cout<<"___________________________________________________________________________"<<endl<<endl;
	cout<<"Product code : "<<prod.pcode<<" Qty : "<<prod.qty<<"  Discount : "<<disc<<endl;
	cout<<"___________________________________________________________________________"<<endl<<endl;
	cout<<"Net amount : "<<calculate_amt()<<endl;
	cout<<"___________________________________________________________________________"<<endl<<endl;
}

void stores :: accept()
{
	cout<<"Input the details as prompted ..."<<endl;
	stores :: input();
	cout<<"Input phase complete"<<endl;
}

void stores :: display()
{
	cout<<"Output ..."<<endl;
	stores :: output();
	cout<<endl;
}

void main()
{
	stores E;

	do
	{
		clrscr();
		int ch;
		
		cout<<"Menu"<<endl<<endl;
		cout<<"1. Accept Data"<<endl;
		cout<<"2. Display Data"<<endl;
		cout<<"3. Exit"<<endl;

		cout<<endl<<"Enter the number corresponding to the desired choice : "<<endl;
		cin>>ch;

		switch (ch)
		{
			case 1 :
				E.accept();
				break;
			case 2 :
				E.display();
				break;
			case 3 :
				exit(0);
				break;
			default :
				cout<<"Invalid entry. Retry ..."<<endl;	
		}
		cout<<endl;
		cout<<"Press any key to continue ..."<<endl;
		getch();
	} while (1);
}


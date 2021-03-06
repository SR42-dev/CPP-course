/* A program that manages details of students */

#include <iostream.h>
#include <stdio.h>

class student
{
	private :

		int roll;
		char name[32];
		char std[8];
		int marks[5];
		float calculate();

	public :

		void read_details();
		void display_details();

};

float student :: calculate ()
{
	float tot = 0, perc;
	for(int i = 0; i < 5; i++)
		tot = tot + marks[i];
	perc = tot / 5;
	return perc;
}

void student :: read_details()
{
	cout<<"Input the roll number :";
	cin>>roll;
	cout<<"Input the name :";
	gets(name);
	cout<<"Input the standard :";
	gets(std);
	cout<<"Input the marks distribution to be processed :";
	for (int i = 0; i < 5; i++)
		cin>>marks[i];
}

void student :: display_details() // Without cout prompts
{
	cout<<roll<<endl;
	cout<<name<<endl;
	cout<<std<<endl;
	cout<<calculate()<<endl;
}

void main()
{
	student a[3];
	for (int i = 0; i < 3; i++)
	{
		a[i].read_details();
		a[i].display_details();
	}
}

/* A program demonstating the usage of classes */

#include <iostream.h>
#include <stdio.h>

class employee
{
	private :
		int eno;
		char ename[20];
		float bsal;
	public :
		void input();
		void output();
};

void employee :: input()
{
	cout<<"Input the employee number :";
	cin>>eno;
	cout<<"Input the employee name :";
	gets(ename);
	cout<<"Input the basic salary of the employee :";
	cin>>bsal;
	cout<<endl;
}

void employee :: output()
{
	cout<<"The employee details are as follows :"<<endl;
	cout<<"Employee number :";
	cout<<eno<<endl;
	cout<<"Employee name :";
	puts(ename);
	cout<<"Basic salary :";
	cout<<bsal<<endl;
}

void main()
{
	employee e;
	e.input();
	e.output();
   // e.eno; // Error. Private member not accessible
}


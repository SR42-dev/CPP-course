/* Assignment 2 Program 4 */

#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

class SHAPES
{
	double l, b;
	double sq_side;
	double t_s1, t_s2, t_s3;
	float r;
	public:
		SHAPES()
		{
			l=0;
			b=0;
			sq_side=0;
			t_s1=0;
			t_s2=0;
			t_s3=0;
			r=0;
		}

		float find_display_area(float r)//Overloaded circle
		{
			cout<<"Enter radius"<<endl;
				cin>>r;
			float area=3.14*r*r;
			cout<<"Name of Shape     : "<<"CIRCLE"<<endl;
			cout<<"Given Measurements: "<<r<<endl;
			cout<<"Area              : "<<area<<endl;
			return area;
		}

		double find_display_area(double sq_side)//Overloaded square
		{
			cout<<"Enter Square Side"<<endl;
			cin>>sq_side;
			double area=sq_side*sq_side;
			cout<<"Name of Shape     : "<<"SQUARE"<<endl;
			cout<<"Given Measurements: "<<sq_side<<endl;
			cout<<"Area              : "<<area<<endl;
			return area;
		}

		double find_display_area(double l, double b)//Overloaded rectangle
		{
			cout<<"Enter Length"<<endl;
			cin>>l;
			cout<<"Enter Breadth"<<endl;
			cin>>b;
			double area=l*b;
			cout<<"Name of Shape     : "<<"RECTANGLE"<<endl;
			cout<<"Given Measurements: "<<"LENGTH= "<<l<<" BREADTH= "<<b<<endl;
			cout<<"Area              : "<<area<<endl;
			return area;
		}

		double find_display_area(double t_s1, double t_s2, double t_s3)//Overloaded triangle
		{
			cout<<"Enter side 1"<<endl;
			cin>>t_s1;
			cout<<"Enter side 2"<<endl;
			cin>>t_s2;
			cout<<"Enter side 3"<<endl;
			cin>>t_s3;
			double s=(t_s1 + t_s2 + t_s3)/2;
			double area1, area2;
			area1 = s*(s-t_s1)*(s-t_s3)*(s-t_s2);
			area2=pow(area1,0.5);
			cout<<"Name of Shape     : "<<"TRIANGLE"<<endl;
			cout<<"Given Measurements: "<<"SIDE 1= "<<t_s1<<" SIDE 2= "<<t_s2<<" SIDE 3= "<<t_s3<<endl;
			cout<<"Area              : "<<area2<<endl;
			return area2;
		}

};

void main()
{
	SHAPES s;
	double l,b,sq_side,t_s1,t_s2,t_s3;
	float r;
	int ch;
	char c;

	do
	{
		clrscr();
		cout<<"MENU"<<endl<<endl;
		cout<<"1.Circle "<<endl;
		cout<<"2.Square "<<endl;
		cout<<"3.Rectangle "<<endl;
		cout<<"4.Triangle "<<endl;
		cout<<"Enter Choice 1-4"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:s.find_display_area(r);
					 break;
			case 2:s.find_display_area(sq_side);
					 break;
			case 3:s.find_display_area(l,b);
					 break;
			case 4:s.find_display_area(t_s1,t_s2,t_s3);
					 break;
			default:cout<<"Invalid Choice"<<endl;
		}
		cout<<"Press any key to continue"<<endl;
		getch();
	}while(1);
}

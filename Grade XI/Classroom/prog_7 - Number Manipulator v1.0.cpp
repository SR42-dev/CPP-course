/* A program that prints the input number in reverse and also gives the sum
	of the digits */

#include<iostream.h>
void main()
{
	long int a, f, g;
	int b, c, d, e;
	cout<<"Enter a four digit number"<<endl;
	cin>>a;
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	f=b+c+d+e;
	g=(e*1000)+(d*100)+(c*10)+(b);
	cout<<"Your number in reverse is "<<g<<" and the sum of the digits in your number is "<<f<<endl;
}
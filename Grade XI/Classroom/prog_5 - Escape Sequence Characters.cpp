/* A program that demonstrates the usage of a few escape sequence characters */

#include<iostream.h>
void main()
{
	char c1 = '\n';
	char c2 = '\b';
	char c3 = '\t';
	char c4 = '\r';
	char c5 = '\0';
	cout<<"Hello World"<<c1;
	cout<<c1<<"Hello World\b\b\b\b\b\n"<<c2<<c2<<c1;
	cout<<c3<<"Hello\tWorld"<<c4;
	cout<<"      Hellish"<<c1;
	cout<<"Hello\0\tWorld"<<c5;
}
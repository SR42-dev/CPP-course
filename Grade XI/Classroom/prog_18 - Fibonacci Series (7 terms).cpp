/*To print the fibonacci series up until the 7th term*/

#include <iostream.h>

void main()
{
	int a=0, b=1, c, i;
	cout<<a<<", "<<b<<", ";
	for (i=3; i<=7;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<", ";
	}
}

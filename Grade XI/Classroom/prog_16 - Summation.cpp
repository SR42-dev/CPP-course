/*To calculate the sum of n natural numbers*/

#include <iostream.h>

void main()
{
	double i, n, sum1=0;
	cout<<"Enter the desired number"<<endl;
	cin>>n;
	for (i=1; i<=n; i++)
	{
		cout<<i<<" + ";
		sum1 = sum1 + i;
	}
	cout<<"\b\b = "<<sum1;
}
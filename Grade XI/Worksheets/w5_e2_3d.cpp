#include <iostream.h>
#include <math.h>

void main()
{
	long int x, i, n, sum1=0, res1, sig1=1;
	cout<<"For the given series, input the x and the n values respectively :"<<endl;
	cin>>x>>n;
	for (i=1;i<=n;i++)
	{
		x = sig1*x;
		cout<<x<<"^"<<i<<"+";
		res1 = pow(x,i);
		sum1 = sum1 + sig1*res1;
		sig1 = -sig1;
	}
	cout<<"\b"<<endl;
	cout<<"Therefore, the sum of the series is equal to : "<<sum1<<endl;
}

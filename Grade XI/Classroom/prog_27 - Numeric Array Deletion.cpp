/* A program to demonstrate deletion of values from a numeric array */

#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 int arr[20],n,i,r,v,ub,pos=0,j;
 cout<<"Enter no.of elements, followed by data"<<endl;
 cin>>n;
 ub=n-1;
 for(i=0;i<n;i++)
	cin>>arr[i];
 cout<<"Enter data to be deleted"<<endl;
 cin>>v;

 for(i=0;i<=ub;i++)
	{
	 if(arr[i]==v)
		{
		 pos=i;
		 for(j=pos;j<=ub;j++)
			arr[j]=arr[j+1];
		 ub--;
		 i--;
		}
	}

 if(pos==-1)
	cout<<"Data not found"<<endl;
 else
	cout<<"Data found; deleted"<<endl;

 for(i=0;i<=ub;i++)
	cout<<arr[i]<<", ";
 cout<<"\b\b is the new array"<<endl;
}

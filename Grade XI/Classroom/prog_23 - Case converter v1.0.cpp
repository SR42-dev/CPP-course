/* A program that uses arrays to convert all the capitalised letters in a
	string into their lower case equivalents*/

#include <iostream.h>
#include <stdio.h>

void main()
{
	char str[20];
	int i;
	cout<<"Enter a string in lower case :"<<endl;
	gets(str);
   cout<<endl;
	for (i=0;str[i]!=0;i++)
		cout<<char(str[i]-32);
}

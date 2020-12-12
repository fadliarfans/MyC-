#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char n[1000000],m[1000000];
	cin>>n;
	strcpy(m,n);
	strrev(m);
	if (strcmp(m,n)==0)
	{
		cout<<"ternyata palindrom";
	}
	else
	{
		cout<<"ternyata bukan palindrom";
	}
}

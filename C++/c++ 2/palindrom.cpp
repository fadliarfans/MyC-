#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char kata[1000],tmp[1000];
	cin>>kata;
	strcpy(tmp,kata);
	strrev(tmp);
	if(strcmp(tmp,kata)==0)
	{
		cout<<"ini adalah kata palindrom";
		
	}
	else
	{
		cout<<"ini bukan";
	}
	
}

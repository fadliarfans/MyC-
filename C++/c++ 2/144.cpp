#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
	int i;
	char n[10000];
	stack<int> sapi;
    cin>>n;
    for(i=1;i<=5;i++)
      {
      	sapi.push(n[i]);
      	cout<<sapi.top();
      	
	  }
	  
      	
	  }

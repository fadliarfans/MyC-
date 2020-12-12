#include <stdio.h>
#include<iostream>

using namespace std;

void increment(int *i)
{
	(*i)++;
}

int main() {
int a=5;
int *b=&a;
cout<<b<<endl;
cout<<*b<<endl;
a=6;
cout<<b<<endl;
cout<<*b<<endl;
a*=100;
cout<<b<<endl;
cout<<*b<<endl;
increment(b);
cout<<b<<endl;
cout<<*b<<endl;
cout<<a<<endl;

}



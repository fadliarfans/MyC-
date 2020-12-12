#include<iostream>

using namespace std;

int main()
{
	cout.precision(5);
int a,b,c,x;
float d,e,f;
cin>>a>>b;
c=a/b;
e=a;f=b;
d=e/f;
x=a%b;
cout<<fixed;
cout<<c<<" "<<x<<" "<<d;
return 0;
}

#include<iostream>

using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
if ((a&&b&&c<=100)&&(a&&b&&c>=1))
{
if (a<b&&b<c&&a<c)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
return 0;
}

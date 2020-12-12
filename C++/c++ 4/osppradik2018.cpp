#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x1,x2,x3,y1,y2,y3;
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 if((y1==0)&&(y2==0)&&(y3!=0))
 {
 	cout<<"ada";
 }
 
else if((y1==0)&&(y2!=0)&&(y3==0))
 {
 	cout<<"ada";
 }
 
 else if((y1!=0)&&(y2==0)&&(y3==0))
 {
 	cout<<"ada";
 }
 
 else 
 {
 	cout<<"tidak ada";
 }
 
getche();
}

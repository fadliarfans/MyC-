#include<iostream>

using namespace std;

float a=0,b=0,c=0;

void sapi(int y)
{
	int arr[y];
	for(int i=0;i<y;i++)
	 {
	 	cin>>arr[i];
	 }
	 for(int i=0;i<y;i++)
	 {
	 	if(arr[i]>0)
	 	 {
	 	 	a++;
		 }
		else if(arr[i]<0)
		 {
		 	b++;
		 }
		else 
		{
		    c++;
		}
	 }
	 
}

int main()
{	
    float r,t,f;
    float x;    
	cin>>x;
	sapi(x);
	r=a/x;
    t=b/x;
    f=c/x;
	cout<<r<<endl<<t<<endl<<f;
	return 0;
}

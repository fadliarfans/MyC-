#include<iostream>


using namespace std;

long long int fak(long long int c)
{
	if(c>1)
	{
		c=c*fak(c-1);
	}
	return c;

}

long long int combin(int n,int k)
{
    long long int b;
    b=fak(n+k-1);
    b=b/fak(k-1);
    b=b/fak(n);
    
	return b;
	
}

int main()
{
	int x,y,f;
	char j;
	cout<< "--- PROGRAM STARS AND BARS ---"<<endl;
	
	cin>>x>>y;
	
	cout<<combin(x,y)<<endl;
	cout<<" THANKSSS "<<endl;
	
	
	
	
	return 0;
}

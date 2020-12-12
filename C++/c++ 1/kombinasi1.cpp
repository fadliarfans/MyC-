#include<iostream>

using namespace std;

int kombinasi(int n,int r);
int faktorial(int x);

int main()
{
	int a,b,c,d,n,x;
	cin>>n>>x;
	kombinasi(n+x-4,x-1);
	kombinasi()
	
	return 0;

}

int factorial(int x)
{
	int f;
	if(x==0)
	{
		f=1;
	}
	if(x>0)
	{
	f=x*factorial(x-1);
    }
	return f;
}

int kombinasi(int n,int r)
{
	int x;
	k=factorial(n)/(factorial(n-r)*factorial(r));
	return x;
}


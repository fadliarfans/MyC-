#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
	long int a,b;
   float v,x[a],d,f,e=0;
	cin>>v;
	a=v;
	if((a<=100)&&(a>0))
	{
	for(b=1;b<=a;b++)
	{
		cin>>x[b];
		if(x[b]>100)
		{
			e=-1;
			break;
		    
		}
		
		if(x[b]>0)
		{
			d+=x[b];
			e++;
		}
 
	}

	if(e>0)
    {
	f=d/e;
	cout<<setprecision(2)<<fixed<<f<<endl;
    }
    else if(e==0)
    {
    	cout<<"Not Found"<<endl;
	}
}
	return 0;
	
}

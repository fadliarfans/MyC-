#include<iostream>
using namespace std;

int main(){
	int a,b[10][10],c;
	for(a=1;a<=9;a++)
	{
		for(c=1;c<=9;c++)
		{
		
		b[a][c]=a*c;
		cout<<a<<"x"<<c<<"="<<b[a][c]<<endl;
	    }	
	}
    return 0;
}

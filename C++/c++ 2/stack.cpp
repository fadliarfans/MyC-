#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int i,n;
	stack<int> hanoi;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	hanoi.push(i);
	cout<<hanoi.top()<<endl;
    }
    while(!hanoi.empty())
    {
    	
    	cout<<hanoi.top();
    	hanoi.pop();
	}
    return 0;
}

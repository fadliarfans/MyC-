#include<iostream>

using namespace std;

int main()
{
	int m,n,i,j,x,y,grid[10][10];
	cin>>m>>n;
	cin>>x>>y;
	for(i=1;i<=m;i++)
	   {
	   	for(j=1;j<=n;j++)
	   	    {
	   	    	if(i==j)
	   	    	  {
	   	    	  	grid[i][j]=i;
					 }
			    else 
			       {
			       	grid[i][j]=min(i,j);
				   }
			   }
	   }
	   cout<<grid[x][y];
	
}

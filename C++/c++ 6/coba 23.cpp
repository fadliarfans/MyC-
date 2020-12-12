#include<iostream>

using namespace std;

int main()
{
	int n,score[1000],min=100000001,max=0,count1=0,count2=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	 {
	 	cin>>score[i];
	 	if(score[i]<min&&i<1)
	 	  {
	 	  	min=score[i];
		   }
		if(score[i]>max&&i<1)
	 	  {
	 	  	max=score[i];
		   }
	 	if(score[i]<min&&i>=1)
	 	  {
	 	  	min=score[i];
	 	  	count2++;

		   }
		if(score[i]>max&&i>=1)
	 	  {
	 	  	max=score[i];
	 	  	count1++;
		   }
	 	
	 }
	 cout<<count1<<" "<<count2;
	
}

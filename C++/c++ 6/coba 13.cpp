#include<iostream>

using namespace std;

int main()
{
	int n,arr[100000],max=0,ct=0;
	cin>>n;
	for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	
	for(int i=0;i<n;i++)
	 {
	if(arr[i]>max)
	   {
	   	 max=arr[i];
	   	 ct=1;

    	}
    else if(arr[i]==max)
        {
        	ct++;
		}
	  
     }
     cout<<ct;
}

#include<iostream>

using namespace std;

int main()
{
    int n,a[10000],i,o;
    cin>>n;
    o=0;

    for(i=1;i<=n;i++)
	 {
	 	cin>>a[i];
	 }
   
   sapi:{
     for(i=1;i<=n;i++)
     {
     if((a[1]<a[i])&&(a[i]>0))
         {
             a[1]++;
             a[i+1]--;
             o++;
         }
     }
   }
     for(i=1;i<=n;i++)
     {
     
     if(a[1]<a[i])
         {
             goto sapi;
         }
     }
     cout<<o;
                                                                                  
}

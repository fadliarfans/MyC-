#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char a[100][100],tmp[100];
	int chk,n,i,j,len1,len2;
	
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>a[i];
	  }
	for(i=1;i<=n;i++)
	  {
	  	for(j=i+1;j<=n;j++)
	  	    {
	  	      len1=strlen(a[i]);
	  	      len2=strlen(a[j]);
	  	        if((len1>len2))
	  	          {
	  	          	strcpy(tmp,a[i]);
	  	          	strcpy(a[i],a[j]);
	  	          	strcpy(a[j],tmp);
					}
			    
			}
	  }
	  
	  cout<<endl;
	  
	  for(i=1;i<=n;i++)
	  {
	  	cout<<a[i]<<endl;
	  }
	  
	  cout<<endl;
	  
	  for(i=1;i<=n;i++)
	  {
	  	for(j=i+1;j<=n;j++)
	  	    {
	  	      chk=strcmp(a[i],a[j]);
	  	      len1=strlen(a[i]);
	  	      len2=strlen(a[j]);
	  	      
	  	        if((len1==len2)&&(chk==1))
	  	          {
	  	          	strcpy(tmp,a[i]);
	  	          	strcpy(a[i],a[j]);
	  	          	strcpy(a[j],tmp);
					}
			    
			}
	  }
	  
	for(i=1;i<=n;i++)
	  {
	  	cout<<a[i]<<endl;
	  }
	
}

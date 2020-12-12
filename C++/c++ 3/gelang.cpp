

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x1,x2,y1,y2,x,y,r1,r2,o;
	bool ans;
	cin>>x1>>y1>>r1;
	cin>>x2>>y2>>r2;

	
	if((x1==x2)&&(y1==y2)&&(r1==r2))
	  {
	  	ans=true;
	  }
	  
	if((x1==x2)&&(y1==y2)&&(r1!=r2))
	  {
	  	ans=false;

	  }
	  
	  
	  
	if((x1==x2)&&(y1!=y2))
	  {
            if((r1+r2)<=(max(y1,y2)-min(y1,y2)))
	  	   	     {
	  	   	     	ans=false;
					  }
			  else
			     {
			     	ans=true;
				 }
			 
		}
			 
	if((y1==y2)&&(x1!=x2))
	  {  
	  	   	  if((r1+r2)<=(max(x1,x2)-min(x1,x2)))
	  	   	     {
	  	   	     	ans=false;
					  }
			  else
			     {
			     	ans=true;
				 }
		
			 
	  }
	  
		if((x1!=x2)&&(y1!=y2))
		{
			x=max(x1,x2)-min(x1,x2);
			y=max(y1,y2)-min(y1,y2);
			o=(x*x)+(y*y);
			cout<<o<<endl;
			o=sqrt(o);
			cout<<o;
			if((r1+r2)<=o)
			   {
			   	ans=false;
			   }
		    else
		       {
		       	ans=true;
			   }
		}
	
		if(ans==true)
		  {
		  	cout<<"sentuh";
		  }
		  else
		  {
		  	cout<<"tak sentuh";
		  }
	

return 0;
}

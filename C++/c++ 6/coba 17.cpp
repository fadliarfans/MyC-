#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int x,y;
	
	scanf("%d%d",&x,&y);
	for(x;x<=y;x++)
	{
		if(x==1)
	  {
	  	printf("one\n");
	  }
	else if(x==2)
	  {
	  	printf("two\n");
	  }
	else if(x==3)
	  {
	  	printf("three\n");
	  }
	else if(x==4)
	  {
	  	printf("four\n");
	  }
	else if(x==5)
	  {
	  	printf("five\n");
	  }
	else if(x==6)
	  {
	  	printf("six\n");
      } 
    else if(x==7)
	  {
	  	printf("seven\n");
      }
      else if(x==8)
	  {
	  	printf("eight\n");
      }
      else if(x==9)
	  {
	  	printf("nine\n");
      }
      else 
      {
      	if(x%2==1)
      	 {
      	 	printf("odd\n");
		   }
		else
		{
			printf("even\n");
		}
	  }
	}
	
	  return 0;
}

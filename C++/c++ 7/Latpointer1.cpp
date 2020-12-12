#include<stdio.h>

int main(){
	int a;
	int *b,**c;
	a = 5;
	b = &a;
	c = &b;
	
	printf("  a = %d\n",a);
	printf(" &a = %d\n\n",&a);
	
	printf("  b = %d\n",b);
	printf(" &b = %d\n",&b);
	printf(" *b = %d\n\n",*b);
	
	printf("  c = %d\n",c);
	printf(" &c = %d\n",&c);
	printf(" *c = %d\n",*c);
	printf("**c = %d\n",**c);
	
	
	return 0;
}

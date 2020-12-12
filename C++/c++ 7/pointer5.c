#include<stdio.h>
#include<conio.h>


main(){
	int i;
    char*a[] = {"a","b","c","d","e"} ;
    char b[] = {'a','b','c'} ;
    char c = 'c';
    char*d = "sapi ayam";
    char*e = "saddd";
    int*m;
    int z;
    int n =44;
   
    for(i=0;i<5;i++){
   	printf("%d ",&a[i]);
   }
   
   printf("\n\n%d",&a);
   //printf("\n\n%d",&b);
    printf("\n\n%d",&c);
    printf("\n\n%s",d);
    d= "sapi kodok";
    e = d;
    z = &n;
    m = &n;
    printf("\n\n%s",d);
    printf("\n\n%s",e);
    printf("\n\n%d",*m);
  /* for(i=0;i<5;i++){
   	printf("%d ",&b[i]);
   } */
  
   printf("\n\n");
   for(i=0;i<5;i++){
   	a[i] = "sapi";
   }
   
    for(i=0;i<5;i++){
   	printf("%d ",&a[i]);
   }
   
   
   for(i=0;i<5;i++){
   	printf("%s ",a[i]);
   }
  
}






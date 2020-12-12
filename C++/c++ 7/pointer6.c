#include<stdio.h>
#include<conio.h>


main(){
    char*a[] = {"a","b","c","d","e"} ;   // kumpulan alamat yang menuju ke kalimat    hampir sama dengan (char a[][])
    char b[] = {'a','b','c','d','e'} ;  
	char c[] = "some String";            // kumpulan huruf huruf hampir sama dengan (char *b)
    
    char **p;                            // pointer -> pointer -> char 
    char q[10][10];                          
    
    
   printf("\n\n%d",&a[3]);
   printf("\n\n%s",a[3]);
   printf("\n\n%d",&b[2]);
   printf("\n\n%c",b[2]);
  
  
}






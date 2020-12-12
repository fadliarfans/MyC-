#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	FILE *PF;
	char C;
	PF = fopen("coba3.txt","r");    // Hanya membaca file
	if(PF== NULL )
	 printf("file tidak dibuka");
    else
     printf("file dibuka\n");
    while((C=getche())!='\r')
     fputc(C,PF);
	 fclose(PF);   
}




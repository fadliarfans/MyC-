#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	FILE *PF;
	char C;
	PF = fopen("coba2.txt","w");    // membuat file baru, jika sudah ada file lama, maka file lama tersebut dihapus
	if(PF== NULL )
	 printf("file tidak dibuka");
    else
     printf("file dibuka\n");
    while((C=getche())!='\r')
     fputc(C,PF);
	 fclose(PF);   
}

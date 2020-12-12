#include <stdio.h>
int main() {
int bilangan, angka, stat;
scanf ("%d", &bilangan);
	for(angka=2; angka<bilangan; angka++){
	if (bilangan %angka == 0){
		stat = 0;
		break;
	}else{
		stat = 1;
	}
	}
	if(stat == 0){
	 printf ("Bukan Prima");
	}else{
	printf ("Prima");
	}
	}

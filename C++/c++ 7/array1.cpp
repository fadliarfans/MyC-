#include<stdio.h>

int i;
float nilai[10];

input_array(){
	for(i=0;i<10;i++);
	scanf("%d",&nilai[i]);
}

cetak_array(){
	for(i=9;i>0;i--);
	printf("%d",nilai[i]);
}

main(){
	input_array;
	cetak_array;
	
}

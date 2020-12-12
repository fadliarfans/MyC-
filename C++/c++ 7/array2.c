#include<stdio.h>

int i;
float nilai[10];

input_array(){
	for(i=0;i<10;i++)
	scanf("%f",&nilai[i]);
}

cetak_array(){
	for(i=9;i>=0;i--)
	printf(" %.3f ",nilai[i]);              // gw ngasal yang ini
}

rata_rata(){
	float jum=0,rata;
	for(i=0;i<=9;i++)
		jum+= nilai[i];	
	rata = jum/i;
	printf("\n\nJumlah =  %.3f ",jum);      // tambahan
	printf("\nRata-rata = %.3f ",rata);     // tambahan
}

besar(){
	float temp;
	temp = nilai[0];
	for(i=1;i<=9;i++){
		if(nilai[i]>temp)
		temp = nilai[i];
	}
	printf("\n\nTerbesar =  %.3f ",temp);    // tambahan
}

main(){
	input_array();
	cetak_array();
	rata_rata();
	besar();	
}

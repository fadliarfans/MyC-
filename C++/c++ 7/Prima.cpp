#include<stdio.h>

int main(void){
	int a;
	int count=0;
	int i;
	int g=0;
	int arr[10000];
	
	scanf("%d",&a);
	
	printf("\n");
	
	for(i=1;i<=a;i++){
		if(a%i==0){
		  count++;
		  arr[g]=i;
		  g++;
		}	
	}
	
	printf("Bilangan yang membagi ada : %d\n\n",g);
	printf("Bilangannya yaitu : ");
	
	for(i=0;i<g;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n\n");
	
	if(count==2)
	 printf("Prima");
	else
	 printf("Bukan Prima");
}

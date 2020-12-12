#include<stdio.h>

main(){
	int i;
    static int a[] = {1,2,3,4,5};
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	a[0] = 43;
	a[5] = 50;
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
}

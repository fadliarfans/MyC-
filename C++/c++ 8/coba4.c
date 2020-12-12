#include<stdio.h>

#include<string.h>
int main()
{
/*var nama menampung nama yang akan dimasukan kedalam file
 *var data merupakan file
 *var banyaks batasan perulangan masukan
 *var i counter perulangan
 */
int banyak;
int i;
char nama[50], alamat[50],temp2[50];
int nim[12], nohp[15], notelp[15], temp; int     usia[2];
printf("Masukkan jumlah data     : ");
scanf("%d",&banyak);
printf("\n");
FILE * data;
/*membuka file dan menggunakan metode WRITE*/	
data = fopen("DATA_PERSONAL.dat","w");
    for(i=0;i<banyak;i++)
    {
        printf("Masukkan NIM     : ");
        scanf("%s",&nim);
        fprintf(data,"NIM    : %s\n",nim);
        
        printf("Masukkan Nama    : ");  
        gets(temp2);
        gets(nama);
        fprintf(data,"Nama   : %s",nama);
		
        fprintf(data,"%s","\n");

        printf("Masukkan Usia    : ");
        scanf("%s",&usia);
        fprintf(data,"Usia   : %s\n",usia);

        printf("Masukkan Alamat  : ");
        scanf("%s",&alamat);
        fprintf(data,"alamat : %s\n",alamat);

        printf("Masukkan No HP   : ");
        scanf("%s",&nohp);
        fprintf(data,"Nohp   : %s\n",nohp);

        printf("Masukkan No Telp : ");
        scanf("%s",&notelp);
        fprintf(data,"notelp : %s\n",notelp);
        
        fprintf(data,"\n");
        printf("\n");
    }

fclose(data);
return 0;
}

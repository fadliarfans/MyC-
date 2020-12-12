#include <stdio.h>
main()
{
int a, *b1, *b2;
 a = 100;
 b1 = &a;
 b2 = b1; 
 printf("Nilai variabel a adalah %d dan ada di alamat %d\n",*b1, b1);
 printf("Nilai variabel a adalah %d dan ada di alamat %d\n",*b2, b2);
}


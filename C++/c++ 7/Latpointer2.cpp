#include <stdio.h>
main()
{
int a, *b1, *b2;
 a = 100;
 b1 = &a;
 b2 = b1; 
 printf("Nilai variabel a ada di alamat %p\n", b1);
 printf("Nilai variabel a ada di alamat %p\n", b2);
}


#include <stdio.h>

int main( int argc, char *argv[] )  
{
   if( argc == 2 )
   {
      printf("Tham so duoc cung cap la: %s\n", argv[1]);
   }
   else if( argc > 2 )
   {
      printf("Qua nhieu tham so duoc cung cap.\n");
   }
   else
   {
      printf("Ban nen cung cap mot tham so.\n");
   }
}
/* 
   Using strcpy and strncpy */
#include <stdio.h>
#include <string.h>

int main(){ 
   char s1[] = "Happy New Year";
   char s2[20]="", s3[20]="";
   int i;
   printf( "s1 = %s\n", s1 );
   printf( "strcpy( s2, s1 ) = %s\n", strcpy( s2, s1 ) );
   printf( "s2 = %s \n", s2 );
   printf( "strncpy( s3, s1, 5 ) = %s\n", strncpy( s3, s1, 5 ) );
   printf( "s3 = %s \n", s3 );
   for (i=0; s1[i]!='\0'; i++)
      s2[i] = s1[i];
   s2[i] = '\0';
   printf( "s2 = %s \n", s2 );
   printf( "lenght of s2 = %d \n", strlen(s2) );
   return 0;
}

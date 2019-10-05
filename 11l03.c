#include <stdio.h>
int main(){ 
   FILE *fptr1,*fptr2;
   int no;
   char fname[20];
   char lname[20];
   int grade;
   fptr1 = fopen( "inf", "r" ) ;
   fptr2 = fopen( "outf", "w" ) ;
   while ( !feof(fptr1) ) { 
      fscanf(fptr1, "%d%s%s%d\n",&no, fname,lname,&grade);
      fprintf(fptr2, "%09d %-12s %-15s %4d\n" ,no,fname,lname,grade);
   }
   fclose(fptr1);
   return 0;
}




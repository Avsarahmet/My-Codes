/* Read and write one character at a time */
#include <stdio.h>
void CharReadWrite(FILE *fin, FILE *fout);
int main(){
     FILE *fptr1, *fptr2;
     fptr1 = fopen("input.f","r");
     fptr2 = fopen("output.f", "w");
     CharReadWrite(fptr1, fptr2);
     fclose(fptr1);
     fclose(fptr2);
     return 0;
 }
/* function definition */
void CharReadWrite(FILE *fin, FILE *fout){
   char c;
   while ((c=fgetc(fin)) != EOF){
      putchar(c);
      fputc(c, fout);
        
   }
   putchar('\n');
}

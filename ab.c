#include<stdio.h>
struct il{
	char name[20];
        float i;
}a;

int main(){
	FILE *fi, *fo;
        char c;

        fi=fopen("city.txt","r");
        fo=fopen("ffound.txt","w+");
        c= 'A';
        while(!feof(fi)){
        fscanf(fi,"%f %s",&a.i,a.name);
        if(c==a.name[0])
                fprintf(fo,"%.2f %s\n",a.i,a.name);
    }
     	return 0;
}

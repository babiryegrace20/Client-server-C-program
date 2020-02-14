#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<strings.h>

int main(){
 FILE * fp;
 fp=fopen("file1.txt","a");
 fprintf(fp,"\n \t this is just a testing text message for file handling in C programming \n It's really fan  ! \n %s","ok");
 fclose(fp);

 return 0;
}

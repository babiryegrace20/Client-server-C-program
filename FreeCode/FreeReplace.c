#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<strings.h>
void replfun(char taskstring[],char optionstring[]);
int main(){ int flush2; char commandstr[10],taskstring[50],optionstring[50];
    for(flush2=0;flush2<sizeof(optionstring);flush2++){optionstring[flush2]=' '; optionstring[flush2]=' ';}
    printf("\n\tEnter your taskstring to process : \t"); gets(taskstring);
    printf("\n\tEnter the replace options here : \t"); gets(optionstring);
    replfun(taskstring,optionstring);
return 0;
}/* SOURCE OF CODE:  Eng. ROGERS --- Contact: +256 70612 3303  atrodgers77@gmail.com ---All rights reserved. */
      void replfun(char taskstring[],char optionstring[]){ int i,ii=0,pos; char shortAr[3];
      while(ii<strlen(optionstring)){if(optionstring[ii]==' '){break;} sprintf(shortAr,"%c",optionstring[ii]);
      pos=atoi(shortAr); taskstring[pos-1]=optionstring[ii+2]; ii=ii+4;} printf("\n\nresult string after replacement = %s\n\n\n",taskstring);}

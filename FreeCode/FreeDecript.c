#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<strings.h>
void encrfun(char taskstring[]);
void bbzero(char *strg);
int main(){
    int flush2; char commandstr[10],taskstring[50],optionstring[50];
    printf("\n\tEnter the string to decript : \n\t"); gets(taskstring);
    decrfun(taskstring);
return 0;
}    /* SOURCE OF CODE:  Eng. ROGERS --- Contact: +256 70612 3303  atrodgers77@gmail.com ---All rights reserved. */
void decrfun(char taskstring[]){    int i,a,tmpn=0,fnex=0,chfound=0,stt=0,end=0;
char tempp[28];
char validvs[54][18],finalstr[1000], alphabets[]={' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
strcpy(validvs[0],"?"); strcpy(validvs[1],"A"); strcpy(validvs[2],"B"); strcpy(validvs[3],"C"); strcpy(validvs[4],"D");
strcpy(validvs[5],"E"); strcpy(validvs[6],"F"); strcpy(validvs[7],"G"); strcpy(validvs[8],"H"); strcpy(validvs[9],"I");
strcpy(validvs[10],"1iA0"); strcpy(validvs[11],"1jB1"); strcpy(validvs[12],"1kC2"); strcpy(validvs[13],"1lD3");
strcpy(validvs[14],"1mE4"); strcpy(validvs[15],"1nF5"); strcpy(validvs[16],"1oG6"); strcpy(validvs[17],"1pH7");
strcpy(validvs[18],"1qI8"); strcpy(validvs[19],"1r1Ai09");  strcpy(validvs[20],"2s1Bj10"); strcpy(validvs[21],"2t1Ck21");
strcpy(validvs[22],"2u1Dl32");  strcpy(validvs[23],"2v1Em43"); strcpy(validvs[24],"2w1Fn54"); strcpy(validvs[25],"2x1Go65");
strcpy(validvs[26],"2y1Hp76"); strcpy(validvs[27],"2z1Iq87"); strcpy(validvs[28],"2a1r1Ai098"); strcpy(validvs[29],"2b2s1Bj109");
strcpy(validvs[30],"3c2t1Ck210"); strcpy(validvs[31],"3d2u1Dl321"); strcpy(validvs[32],"3e2v1Em432"); strcpy(validvs[33],"3f2w1Fn543");
strcpy(validvs[34],"3g2x1Go654");  strcpy(validvs[35],"3h2y1Hp765"); strcpy(validvs[36],"3i2z1Iq876"); strcpy(validvs[37],"3j2a1rA1i0987");
strcpy(validvs[38],"3k2b2sB1j1098"); strcpy(validvs[39],"3l3c2tC1k2109"); strcpy(validvs[40],"4m3d2uD1l3210"); strcpy(validvs[41],"4n3e2vE1m4321"); strcpy(validvs[42],"4o3f2wF1n5432"); strcpy(validvs[43],"4p3g2xG1o6543");
strcpy(validvs[44],"4q3h2yH1p7654"); strcpy(validvs[45],"4r3i2zI1q8765"); strcpy(validvs[46],"4s3j2a1rA1i09876"); strcpy(validvs[47],"4t3k2b2sB1j10987");
strcpy(validvs[48],"4u3l3c2tC1k21098"); strcpy(validvs[49],"4v4m3d2uD1l32109"); strcpy(validvs[50],"5w4n3e2vE1m43210");
strcpy(validvs[51],"5x4o3f2wF1n54321"); strcpy(validvs[52],"5y4p3g2xG1o65432");
         do{
            tmpn=0; /*reset tmpn*/
            for(i=stt;i<=end;i++){ sprintf(&tempp[tmpn],"%c",taskstring[i]); tmpn++; }
            for(a=1;a<=52;a++){ if(!strcmp(tempp,validvs[a])){ sprintf(&finalstr[fnex],"%c",alphabets[a]);  fnex++; chfound=1; stt=end+1; end=end+1; bbzero(tempp); break; } }
            if(chfound==0){end=end+3; }else{chfound=0;}
            if(taskstring[end]==' ' || end >= strlen(taskstring)){ break; }
         }while(chfound==0);
        printf("\n\tresult of decription :\n\t%s = %s \n\n",taskstring,finalstr);
     }//end of function
     void bbzero(char *strg){int i; for(i=0;i<sizeof(strg);i++){ strg[i]='\0'; } }






















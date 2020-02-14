#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


#define D0 10
#define D1 10
#define D2 10

int main(){

    int i,j,k;
    int data;

    FILE* dat;


    dat=fopen("Costs.txt","w");

if(dat){

    for(i=1;i<D0; i++){

            printf("First Line:\t");

        //for(j=0;j<i;j++){

                printf("Second Line:\t");

            //for(k=0; k<i; k++){

                    printf("Third Line:\n");

                fprintf(dat,"%d", &data);
            }
            fprintf(dat,"\n");
        }
        fprintf(dat,"\n");
    //}
//}

}

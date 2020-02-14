#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

void sort(char *s[], int n){
    for (int i=1; i<n; i++){
        char* temp = s[i];

        //insert s[j] at its correct position
        int j = i-1;
        while (j >= 0 && strlen(temp) < strlen(s[j])){

            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;

    }
}

//Function to print the sorted array of string
void printArraystring(char *str[], int n){

    for (int i=0; i<n; i++){


    printf("%d %s\n",i+1,str[i]);
        break;
    }

}

int main(){

    char line[10][120];
    char* replace[20];

    FILE *ft = NULL;
    int i=0;

    ft = fopen("busylist.txt", "r");

    while(fgets(line[i], 128, ft)){

        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }


   char *arr[] = {line[2], line[5], line[8], line[11]};
   int n = sizeof(arr)/sizeof(arr[0]);

   //Function to perform sorting
   sort(arr, n);

   //Calling the function to print result
   printArraystring(arr, n);

    return 0;
}

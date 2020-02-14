#include <stdio.h>

int main(){

    FILE *ptr_file;
    char buf[50], task[20];

    int x,i,id;

    id=0001;

    //printf("Type your stuff\n");
    scanf("\n%s %s",task, buf);

    printf("\n\n%s", buf);

    ptr_file = fopen("ready.txt", "a");

    if (!ptr_file)
        return 1;

    for (x=1; x<=1; x++)
        fprintf(ptr_file, "\n%d\t%s\t%s\n",id, task, buf);

    fclose(ptr_file);

    return 0;

}

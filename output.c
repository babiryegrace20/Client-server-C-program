#include <stdio.h>


int main(){

    FILE *ptr_file;
    char buf[1000];

    ptr_file = fopen("busylist.txt", "r");

    if (!ptr_file)
        return 1;

    while (fgets(buf,1000,ptr_file))
        printf("%s", buf);

    fclose(ptr_file);

    return 0;

}

#include <stdio.h>
#include <conio.h>

#define size 5

char queue[5][2] = {0};

int top = -1;

int bottom;

void push(char value, char pr){

int i,j,k;

if(top < size-1){

    if(queue[top][1] > pr){

        for (i=0; i<top; i++){

            if(queue[i][1] > pr){
            break;
        }
    }

    for (j=top; j>=i; j--){

        queue[j+1][0] = queue[j][0];
        queue[j+1][1] = queue[j][1];
    }

    top++;

    queue[i][0] = value;

    queue[i][1] = pr;

}else{

        top++;

        queue[top][0] = value;

        queue[top][1] = pr;

}

}else{

    printf("Queue OverFlow\n");

}
}



void pop(){

int i;

if(queue[0][0] == 0){

    printf("\n The queue is empty\n");

}else{

    printf("After, dequeue the following value is erased\n %s\n",queue[0][0]);

    for(i=0; i<top; i++){

        queue[i][0] = queue[i+1][0];
        queue[i][1] = queue[i+1][1];
    }

    queue[top][0] = 0;
    queue[top][0] = 0;
    top--;
}
}


void display(){

int i,j;

    printf("Element\tPriority\n");

    for(i=size-1; i>=0; i--){

            for(j=0; j<2;j++){

                printf("%c\t", queue[i][j]);
            }

            printf("\n");

    }
}





int main(){

    char str1[100];

int i, j, ch=0, value,pr=0;

while(1){

    printf("\nPlease Enter the choice.\n");
    printf("1. Enqueue\n 2. Dequeue\n 3. Display\n 99. Exit:\t \n");

    scanf("%d",&ch);


    switch(ch){

    case 1:

    printf("Provide your functionality\n\n");
    scanf("%s", &str1);

    if (strcmp(str1, "replace")==0){

        pr=3;
    }else{

    pr=1;

    }

    printf("\n Please Enter the number to be inserted:\t");
    scanf("%c", &value);


    //printf("\nPlease Enter the priority:\t");
    //scanf("%d", &pr);

    push(value,pr);
    break;

    case 2:

    pop();
    break;

    case 3:

    display();
    break;

    case 99:

    exit(0);

    default:

    printf("You have entered a wrong choice\n");

    }
}


}

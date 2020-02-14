#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int balance = 1000;

pthread_mutex_t mutx = PTHREAD_MUTEX_INITIALIZER;


void* deposit(void*arg)

{
    int amt = 50, i;

    for (i=0; i<50; i++){

        pthread_mutex_lock(&mutx);//lock the mutex

    balance = balance + amt;

    pthread_mutex_unlock(&mutx);//unlock the mutex

    }

    return NULL;

}

void*withdraw(void*arg){
int amt = 20, i;


    for(i=0; i<20; i++){

     pthread_mutex_lock(&mutx);//lock the mutex

     balance = balance - amt;

      pthread_mutex_unlock(&mutx);//unlock the mutex

      return NULL;
    }

}


int main(){

pthread_t t1,t2;

int ret;

ret = pthread_create(&t1, NULL, deposit, NULL);

if (ret !=0){

    printf("Thread Create Error.\n");

    return 0;

}

ret = pthread_create(&t2, NULL, deposit, NULL);

if (ret !=0){

    printf("Thread Create Error.\n");

    return 0;

}

ret = pthread_join(t1, NULL);

if(ret != 0)
{
    printf("Thread Join Error.\n");

    return 0;
}

ret = pthread_join(t2, NULL);

if(ret != 0)
{
    printf("Thread Join Error.\n");

    return 0;
}

printf("Balance is:\t%d\n",balance);

return 0;

}

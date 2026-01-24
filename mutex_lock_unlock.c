/*write a mutex program add of two numbers*/
#include<stdio.h>
#include<pthread.h>
int sum=0;
pthread_mutex_t lock;

void *add_num(void* args)
{
    int *number = (int*)args;
    pthread_mutex_lock(&lock);
    sum+=*number;
    pthread_mutex_unlock(&lock);
    return NULL;
}
int main()
{
    pthread_t t1,t2;
    int a=5,b=10;
    if(pthread_mutex_init(&lock,NULL)!=0){
        printf("thread creation failed\n");
        return 1;
    }
    pthread_create(&t1,NULL,add_num,&a);
    pthread_create(&t2,NULL,add_num,&b);


    pthread_join(t1,NULL);
    pthread_join(t2,NULL);


    printf("sum = %d\n",sum);
    return 0;


}
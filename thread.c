#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *thread(void *vargp)
{

    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t tid;
    int thread_arg = atoi(argv[1]);
    int res;

    pthread_create(&tid, NULL, thread, (void *)(thread_arg));

    sleep(1);

    pthread_join(tid, (void **)(&res));

    return 0;
}
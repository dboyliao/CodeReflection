#include <stdio.h>
#include <pthread.h>

int pthread_create(
    pthread_t*, 
    const pthread_attr_t*, 
    void* (*)(void*), 
    void*) __attribute__((weak));

int main(){
    
    if (pthread_create){
        printf("multi-threaded!\n");
    } else {
        printf("single-threaded!\n");
    }
}

/*
compile it with or without -lpthread flag to see the difference.
*/
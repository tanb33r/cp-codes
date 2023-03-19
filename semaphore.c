#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>
queue<int> players;

int gp=0,ip=0;
void P() {
    while(S==0);
    s--;
}

void V() {
    s++;
}

int main() {


}

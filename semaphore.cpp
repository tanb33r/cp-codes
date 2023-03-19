#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//#include <bits/stdc++.h>
//using namespace std;
//queue<int> players;
int playernum=4*5;
int tgp = playernum/2, tip = tgp;
int tpr = playernum; // total player remaining
int gp=0,ip=0; // german and italian players on the car
//bool lock = 0;

pthread_mutex_t lock;

int tplayer = 0; //total players in the car
void *iplayer(void *x) {

    ip++; // one Italian player took a seat
//    if(gp == 3) wait();
    if(ip == 3 || (gp == 2 && ip ==1 ))
        pthread_mutex_lock(&lock);
    tpr--; //one less player remaining
    tip--;
    tplayer++; // number of people in the car increased
    // if car is full
    if(tplayer == 4) {
        pthread_mutex_unlock(&lock);
        tplayer = 0;
        if(ip == 4) ip = 0; // if 4 Italians were on the car
        else ip = gp = 0; // if 2 Italians and 2 Germans were on the car
        printf("%d German Players remaining\n%d Italian Players remaining\n",playernum/2-gp,playernum/2-ip);
    }
}
void *gplayer(void *x) {
//    while(lock == 1) wait();

//        while (ip == 3);
    gp++; // one German player took a seat
//    if(ip == 3) wait();
    if(gp == 3 || (gp == 1 && ip == 2))
        pthread_mutex_lock(&lock);
    tpr--; //one less player remaining
    tgp--;
    tplayer++; // number of people in the car increased
    // if car is full
    if(tplayer == 4) {
        pthread_mutex_unlock(&lock);
        tplayer = 0;
        if(gp == 4) gp = 0; // if 4 Germans were on the car
        else ip = gp = 0; // if 2 Italians and 2 Germans were on the car
        printf("%d German Players remaining\n%d Italian Players remaining\n",tgp,tip);
    }
}

int *main_thread_func(void *p) {
    scanf("%d",&playernum);

    pthread_t additional[2*tpr+2];
    while(tpr>0) {

        pthread_create(&additional[tpr+playernum],NULL, gplayer, NULL);
        pthread_create(&additional[tpr],NULL, iplayer, NULL);
//
//        gplayer();
//        iplayer();
    }

    pthread_exit(NULL);
}
int main() {
    pthread_t main_thread;
    pthread_create(&main_thread,NULL, main_thread_func, NULL);
    pthread_join(main_thread, NULL);

    pthread_exit(NULL);
    return 0;

}




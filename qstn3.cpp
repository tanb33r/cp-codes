#include<stdio.h>

int main() {
    int notes[7] = {1, 5, 10, 20, 50, 100, 200};
    int N = 7, Total = 0;
    int Amount=30;
    int i = 6;
    while(i>= 0) {
        while(notes[i] <= Amount) {
            Total++;
            Amount = Amount - notes[i];
        }

        i--;
    }
    printf("Total number of notes required %d\n", Total);
}

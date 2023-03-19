#include <stdio.h>
struct myself {
    int   id;
    char  *name,*phone,*birthdate;


};


int main() {
    struct myself m;
    m.id = 314;
    m.name = "asd";
    m.phone = "asd";
    m.birthdate = "02-12-2000";
    printf("birth year  %c%c%c%c\n",m.birthdate[6],m.birthdate[7],m.birthdate[8],m.birthdate[9]);


    printf("My name is : %s\n",m.name);
    printf("My student id : %d\n",m.id);
    printf("My Birthdate : %s\n",m.phone);
    printf("birth year  %c%c%c%c\n",m.birthdate[6],m.birthdate[7],m.birthdate[8],m.birthdate[9]);


}

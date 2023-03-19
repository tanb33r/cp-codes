#include <stdio.h>

int main() {
   char *name = "Roni";
   char *id = "011202018";
   char concat[100] ="";
   strcat(concat,name);
   strcat(concat," ");
   strcat(concat," ");
   strcat(concat,id);
   printf("%s",concat);


}

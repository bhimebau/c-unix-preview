/*  
    Program Name/Description/Details
*/

#include <stdio.h>
#include "f1.h"

int myglobal = 5;

int main(int argc, char *argv[]) {
  int i;

  for(i=0;i<argc;i++) {
    printf("argument %d = %s\n",i+1,argv[i]);
  }

  printf("myglobal = %d\n",myglobal);
  printf("return value of f1 = %d\n",f1(myglobal));
  return(0);
}

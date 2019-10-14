#include "mz_string.h"
#include <stdio.h>

int main (int argc, const char ** argv){
  char chars[100];
  printf("HELLO length is : %d\n", mz_strlen("HELLO"));
  printf("After `strcpy' action, content : %s\n", mz_strcpy(mz_strcpy(chars, "This is demo"), " continue"));
  printf("After `strcat' action, content : %s\n", mz_strcat(chars, "I'm a cat"));
  printf("After `strcmp' action, status [1] wanted: [%d]\n", mz_strcmp("hello", "fuck"));
  printf("After `strcmp' action, status [-1] wanted : [%d]\n", mz_strcmp("", "fuck"));
  printf("After `strcmp' action, status [-1] wanted: [%d]\n", mz_strcmp("cat", "dog"));
  printf("After `strcmp' action, status [0] wanted: [%d]\n", mz_strcmp("pig", "pig"));
  return 0;
}

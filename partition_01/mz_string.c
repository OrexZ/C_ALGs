#include "mz_string.h"
// #include <stdio.h>

/*
 * NOTE:
 * strlen("hello") > 10 different from strlen("hello") - 10 > 0
 * (int) strlen("hello") - 10 > 0 is right
 */
size_t mz_strlen(const char *s){
  const char * sp = s;
  while (*sp++ != '\0')
    ;
  return (size_t)(sp-s-1);
}

char * mz_strcpy(char *dest, const char *src){
  char *destp = dest;
  while ( (*dest++ = *src++) != '\0')
    ;
  return destp;
}

char * mz_strcat(char *head, char *tail){
  char * headp = head;
  while (*head != '\0')
    head++;
  while ((*head++ = *tail++) != '\0')
    ;
  return headp;
}

int mz_strcmp(const char *str1, const char *str2){
  while ((*str1 == *str2)
         && (*str1 != '\0' && *str2 != '\0')){
    str1++;
    str2++;
  }

  if ( *str1 == '\0' && *str2 == '\0'){
    return 0;
  }
  else if ( *str1 > *str2 || *str2 == '\0'){
    return 1;
  }
  else if ( *str1 < *str2 || *str1 == '\0'){return -1;
  }
}

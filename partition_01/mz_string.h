#ifndef _OREXZ_STRING_H_
#define _OREXZ_STRING_H_

#include <stddef.h> /* size_t */

size_t mz_strlen(const char *);
char * mz_strcpy(char *, const char *);
char * mz_strcat(char *, char *);
int    mz_strcmp(const char *, const char *);

#endif /* _OREXZ_STRING_H_ */

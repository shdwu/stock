#include <stdio.h>
#include <stdio.h>
#include <string.h>

char* join(char* str1, char* str2) {
  char* joinStr = (char*)malloc(strlen(str1) + strlen(str2) + 1);
  if (joinStr == NULL) exit(1);
  char* head = joinStr;
  while (*str1 != '\0') {
    *joinStr++ = *str1++;
  }
  while ((*joinStr++ = *str2) != '\0') {
    ;
  }
  return head;
}


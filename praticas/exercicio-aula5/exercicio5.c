#include <stdio.h>

int comprimento(char *string) {
  int i = 0;
  while (*(string + (++i)) != '\0');
  return i;
}

char *ultimavogal(char *string) {
  int start = comprimento(string) - 1;
  for (int i = start; i >= 0; i--) {
    char carac = *(string + i);
    if ('a' <= carac && carac <= 'z')
      carac -= 32;
    switch (carac) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        return string + i;
      default:
        continue;
    }
  }
  return NULL;
}

char *inversor(char string[]) {
  int len = comprimento(string);
  char *p1 = string;
  char *p2 = string + len - 1;
  for (int i = 0; i < (len / 2); i++) {
    char temp = *p1;
    *(p1++) = *p2;
    *(p2--) = temp;
  }
  return string;
}



int main() {
  char string[] = "Hello World";
  char *inverso = inversor(string);
  printf("%s\n", inverso);
  return 0;
}
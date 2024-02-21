#include <stdio.h>
main() {
  int x = 5;
  float pi = 3.14159;
  int *ptr_x = &x;
  float *ptr_pi = &pi;
  printf("x: %d (&x: %p)\n", x, &x);
  printf("ptr_x: %p (*ptr_x: %d)\n", ptr_x, *ptr_x);
  printf("pi: %f (&pi: %p)\n", pi, &pi);
  printf("ptr_pi: %p (*ptr_pi: %f)\n", ptr_pi, *ptr_pi);
}
#include <stdio.h>

void exercicio1_1(void) {
  int i = 5;
  int *p;
  p = &i;
  printf("&p: %p\n", &p);
  printf("p (&i - endereço de i): %p\n", p);
  printf("*p (i - valor de i): %d\n", *p);

  *p = 7;
  printf("*p (i - valor de i): %d\n", *p);
}

void exercicio1_2(void) {
  int i = 5;
  int *p;
  p = &i;
  printf("&p: %p\n", &p);
  printf("p (&i - endereço de i): %p\n", p);
  printf("*p (i - valor de i): %d\n", *p);

  printf("valor para *p: ");
  (void) scanf("%d", p);
  printf("*p (i - valor de i): %d\n", *p);
}

void exercicio2(void) {
  int numero;

  int *ptr = &numero;
  *ptr = 5;
  printf("valor de numero: %d\n", numero);
}

void exercicio3(void) {
  int n1 = 3, n2 = 5;

  int *n1_ptr = &n1, *n2_ptr = &n2;

  printf("n1: %d, n2: %d\n", n1, n2);
}

int main() {
  printf("exercicio 1.1\n");
  exercicio1_1();
  printf("\nexercicio 1.2\n");
  exercicio1_2();
  printf("\nexercicio 2\n");
  exercicio2();
  printf("\nexercicio 3\n");
  exercicio3();
  return 0;
}
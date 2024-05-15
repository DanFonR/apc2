#include <stdio.h>

typedef struct aluno Aluno;

struct aluno {
  char nome[50];
  char genero;
  float notas[3];
};

Aluno alunos[] = {
  {"Maria", 'F', {7.0, 3.0, 9.0}},
  {"Joao", 'M', {5.0, 6.0, 2.0}},
  {"Ana", 'F', {8.0, 9.0, 10.0}},
  {"Pedro", 'M', {6.0, 1.0, 8.0}},
  {"Carla", 'F', {9.0, 10.0, 10.0}},
  {"Paulo", 'M', {7.0, 8.0, 9.0}},
  {"Mariana", 'F', {5.0, 1.0, 7.0}},
  {"Marcos", 'M', {8.0, 9.0, 10.0}},
  {"Julia", 'F', {6.0, 7.0, 0.0}},
  {"Lucas", 'M', {9.0, 10.0, 10.0}},
};

void listarAlunos(int n, Aluno alunos[n]) {
  for (int i = 0; i < n; i++) {
    printf("Aluno(a): %s; Genero: %c; Notas: ",
      alunos[i].nome, alunos[i].genero);
    printf("1a: %.1f, 2a: %.1f, 3a: %.1f\n",
      alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
  }
}

void listarPorGenero(int n, Aluno alunos[n], char genero) {
  if (!(genero == 'M' || genero == 'F')) return;

  for (int i = 0; i < n; i++) {
    if (alunos[i].genero != genero) continue;
    printf("Aluno(a): %s; Genero: %c; Notas: ",
      alunos[i].nome, alunos[i].genero);
    printf("1a: %.1f, 2a: %.1f, 3a: %.1f\n",
      alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
  }

}

void exibirAlunosAprovados(int n, Aluno alunos[n]) {
  for (int i = 0; i < n; i++) {
    float media = (alunos[i].notas[0]
                  + alunos[i].notas[1]
                  + alunos[i].notas[2]) / 3;

    if (media < 5) continue;
    
    printf("Aluno(a): %s; Genero: %c; Notas: ",
      alunos[i].nome, alunos[i].genero);
    printf("1a: %.1f, 2a: %.1f, 3a: %.1f; Media: %.2f\n",
      alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2], media);
  }
}

int main() {
  puts("Lista de Alunos:");
  listarAlunos(10, alunos);
  puts("");

  puts("Lista por Genero:");
  puts("Masculino:");
  listarPorGenero(10, alunos, 'M');
  puts("");

  puts("Feminino:");
  listarPorGenero(10, alunos, 'F');
  puts("");

  puts("Alunos Aprovados:");
  exibirAlunosAprovados(10, alunos);
  return 0;
}
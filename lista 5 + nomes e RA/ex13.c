// Fa¸ca um programa que fa¸ca a soma de duas matrizes

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A[10][10], B[10][10], C[10][10];
  int linhas, colunas, i, j;

//Lê as dimensões das matrizes
  printf("Digite o numero de linhas das matrizes: ");
  scanf("%d", &linhas);
  printf("Digite o numero de colunas das matrizes: ");
  scanf("%d", &colunas);

//Lê os elementos da matriz A
  printf("Digite os elementos da matriz A:\n");
  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
      scanf("%d", &A[i][j]);
    }//for
  }//for

//Lê os elementos da matriz B
  printf("Digite os elementos da matriz B:\n");
  for(i = 0; i < linhas; i++){
    for (j = 0; j < colunas; j++){
      scanf("%d", &B[i][j]);
    }//for
  }//for

//Calcula a soma das matrizes
  for(i = 0; i < linhas; i++){
    for (j = 0; j < colunas; j++){
      C[i][j] = A[i][j] + B[i][j];
    }//for
  }//for

//Imprime o resultado
  printf("Soma das matrizes:\n");
  for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
      printf("%d ", C[i][j]);
    }//for
    printf("\n");
  }//for
  return 0;
}//main

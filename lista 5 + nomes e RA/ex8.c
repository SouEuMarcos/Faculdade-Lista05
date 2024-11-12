/*
Construa um programa que entre com duas matrizes e com suas respectivas dimens˜oes. Em
seguida, verifique se ´e poss´ıvel fazer a multiplica¸c˜ao entre as matrizes. Caso seja poss´ıvel, calcule e exiba
em tela o produto entre elas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A[10][10], B[10][10], C[10][10];
  int linhasA, colunasA, linhasB, colunasB;
  int i, j, k;

//Lê as dimensões da matriz A.
  printf("Digite o numero de linhas da matriz A: ");
  scanf("%d", &linhasA);
  printf("Digite o numero de colunas da matriz A: ");
  scanf("%d", &colunasA);
//Lê os elementos da matriz A.
  printf("Digite os elementos da matriz A:\n");
  for(i = 0; i < linhasA; i++){
    for (j = 0; j < colunasA; j++){
      scanf("%d", &A[i][j]);
    }//for
  }//for

//Lê as dimensões da matriz B.
  printf("Digite o numero de linhas da matriz B: ");
  scanf("%d", &linhasB);
  printf("Digite o numero de colunas da matriz B: ");
  scanf("%d", &colunasB);
//Lê os elementos da matriz B.
  printf("Digite os elementos da matriz B:\n");
  for(i = 0; i < linhasB; i++){
    for (j = 0; j < colunasB; j++){
      scanf("%d", &B[i][j]);
    }//for
  }//for

  //Verifica se é possível fazer a multiplicação entre as matrizes.
  if(colunasA != linhasB){
    printf("Nao e possivel fazer a multiplicacao entre as matrizes.\n");
    return 0;
  }//if

//Calcula o produto entre as matrizes.
  for(i = 0; i < linhasA; i++){
    for(j = 0; j < colunasB; j++){
      C[i][j] = 0;
        for (k = 0; k < colunasA; k++){
          C[i][j] += A[i][k] * B[k][j];
        }//for
    }//for
  }//for

//Imprime o resultado.
  printf("Produto entre as matrizes:\n");
  for(i = 0; i < linhasA; i++){
    for(j = 0; j < colunasB; j++){
      printf("%d ", C[i][j]);
    }//for
    printf("\n");
  }//for
  return 0;
}//main

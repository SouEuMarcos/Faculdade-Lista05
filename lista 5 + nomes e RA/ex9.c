/*
Desenvolva um programa que leia uma matriz 6 x 6 e escreva quantos valores maiores que N ela
possui. Obs.: O valor de N ser´a fornecido pelo usu´ario.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[6][6];
  int i, j, N, contador = 0;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 6; i++){
    for(j = 0; j < 6; j++){
      scanf("%d", &matriz[i][j]);
    }//for
  }//for

//Lê o valor de N.
  printf("Digite o valor de N: ");
  scanf("%d", &N);

// Conta quantos valores maiores que N a matriz possui.
  for(i = 0; i < 6; i++){
    for(j = 0; j < 6; j++){
      if(matriz[i][j] > N){
        contador++;
      }//if
    }//for
  }//for

// Imprime o resultado.
  printf("A matriz possui %d valores maiores que %d.\n", contador, N);
  return 0;
}//main

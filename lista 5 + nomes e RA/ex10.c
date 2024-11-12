/*
Escreva um algoritmo que lˆe uma matriz M(5, 5) e a imprima para que o usu´ario possa
conferi-la. Calcula e mostre as seguintes somas:
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secund´aria
e) de todos os elementos da matriz M.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int M[5][5];
  int i, j;
  int linha4 = 0, coluna2 = 0, diagPrincipal = 0, diagSecundaria = 0, total = 0;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      scanf("%d", &M[i][j]);
    }//for
  }//for

//Imprime a matriz.
  printf("\nMatriz:\n");
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      printf("%d ", M[i][j]);
    }//for
    printf("\n");
  }//for

//Calcula as somas.
  for(i = 0; i < 5; i++){
    linha4 += M[3][i];
    coluna2 += M[i][1];
    diagPrincipal += M[i][i];
    diagSecundaria += M[i][4 - i];
    for(j = 0; j < 5; j++){
        total += M[i][j];
    }//for
  }//for

//Imprime os resultados.
  printf("\nSoma da linha 4: %d\n", linha4);
  printf("Soma da coluna 2: %d\n", coluna2);
  printf("Soma da diagonal principal: %d\n", diagPrincipal);
  printf("Soma da diagonal secundaria: %d\n", diagSecundaria);
  printf("Soma total: %d\n", total);
  return 0;
}

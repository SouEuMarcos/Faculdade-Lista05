/*
Fa¸ca um algoritmo que leia uma matriz 3 x 3 e retorna:
a) a soma dos elementos da diagonal principal;
b) a soma dos elementos da diagonal secund´aria.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[3][3];
  int i, j, soma_principal = 0, soma_secundaria = 0;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++){
        scanf("%d", &matriz[i][j]);
      }//for
  }//for

//Calcula a soma dos elementos da diagonal principal.
  for(i = 0; i < 3; i++){
    soma_principal += matriz[i][i];
  }//for

//Calcula a soma dos elementos da diagonal secundária.
  for(i = 0; i < 3; i++){
    soma_secundaria += matriz[i][2 - i];
  }//for

//Imprime os resultados.
  printf("Soma da diagonal principal: %d\n", soma_principal);
  printf("Soma da diagonal secundaria: %d\n", soma_secundaria);
  return 0;
}//main

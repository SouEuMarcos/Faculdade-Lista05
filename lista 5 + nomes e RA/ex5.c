/*
Na teoria de Sistemas define-se elemento minimax de uma matriz, o menor elemento da linha
em que se encontra o maior elemento da matriz. Escrever um algoritmo que lˆe uma matriz 5 por 5 (5x5) e
determine o elemento minimax desta matriz, escrevendo-o e a posi¸c˜ao na matriz em que ele se encontra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[5][5];
  int i, j, minimoI, minimoJ;
  int maximoI = 0, maximoJ = 0;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      scanf("%d", &matriz[i][j]);
      if(matriz[i][j] > matriz[maximoI][maximoJ]){
        maximoI = i;
        maximoJ = j;
      }//if
    }//for
  }//for

//Encontra o elemento minimax.
  minimoI = maximoI;
  minimoJ = maximoJ;
  for(j = 0; j < 5; j++){
    if (matriz[maximoI][j] < matriz[minimoI][minimoJ]){
      minimoI = maximoI;
      minimoJ = j;
    }//if
  }//for

//Imprime o resultado.
  printf("Elemento minimax: %d\n", matriz[minimoI][minimoJ]);
  printf("Localizacao: linha %d, coluna %d\n", minimoI + 1, minimoJ + 1);
  return 0;
}//main

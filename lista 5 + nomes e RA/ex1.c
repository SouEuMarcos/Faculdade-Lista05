//Crie uma matriz identidade com dimens˜oes 5 x 5.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[5][5];
  int i, j;

// Inicializa a matriz com zeros.
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      matriz[i][j] = 0;
    }//for
  }//for

// Define os elementos da diagonal principal como 1.
  for(i = 0; i < 5; i++){
    matriz[i][i] = 1;
  }//for

// Imprime a matriz.
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      printf("%d ", matriz[i][j]);
    }//for
    printf("\n");
  }//for
  return 0;
}//main

/*
Receba uma matriz M(5, 5) do usu´ario e ent˜ao troque os elementos da primeira linha, com
os elementos da terceira linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int M[5][5];
  int i, j, temp;

//Lê a matriz
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      scanf("%d", &M[i][j]);
    }//for
  }//for

//Troca os elementos da primeira linha com os elementos da terceira linha
  for(j = 0; j < 5; j++){
    temp = M[0][j];
    M[0][j] = M[2][j];
    M[2][j] = temp;
  }//for

//Imprime a matriz resultante
  printf("\nMatriz resultante:\n");
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      printf("%d ", M[i][j]);
    }//for
    printf("\n");
  }//for
  return 0;
}//main

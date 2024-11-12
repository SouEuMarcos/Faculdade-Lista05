/*
Construa um programa que leia uma matriz de tamanho 5 x 5 e escreva a localiza¸c˜ao (linha,
coluna) do maior valor encontrado na matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[5][5];
  int i, j;
  int max_i = 0;
  int max_j = 0;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      scanf("%d", &matriz[i][j]);
      if (matriz[i][j] > matriz[max_i][max_j]){
        max_i = i;
        max_j = j;
      }//for
    }//for
  }//for

//Imprime a localização do maior valor.
  printf("Localizacao do maior valor: linha %d, coluna %d\n", max_i + 1, max_j + 1);
  return 0;
}//main

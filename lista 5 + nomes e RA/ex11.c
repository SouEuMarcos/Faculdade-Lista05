/*
Escrever um algoritmo que lˆe uma matriz M(5, 5) e a escreva. Verifique, a seguir, quais os
elementos de M que est˜ao repetidos e quantas vezes cada um est´a repetido. Escrever cada elemento repetido
com uma mensagem dizendo que o elemento aparece X vezes em M.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int M[5][5];
  int contagem[26] = {0}, i, j;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      scanf("%d", &M[i][j]);
      contagem[M[i][j]]++;
    }//for
  }//for

//Imprime a matriz.
  printf("\nMatriz:\n");
  for(i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      printf("%d ", M[i][j]);
    }//for
    printf("\n");
  }//for

//Verifica quais elementos estão repetidos.
  printf("\nElementos repetidos:\n");
  for(i = 0; i < 26; i++){
    if(contagem[i] > 1){
      printf("O elemento %d aparece %d vezes em M.\n", i, contagem[i]);
    }//if
  }//for
  return 0;
}//main

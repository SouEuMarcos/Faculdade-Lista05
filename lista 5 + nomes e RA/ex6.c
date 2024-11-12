/*
Construa um programa que leia uma matriz 2 x 7. O programa dever´a fazer uma busca de
um valor N na matriz e, como resultado, escrever a localiza¸c˜ao (linha, coluna) do elemento. Caso o valor de
N n˜ao constar na matriz lida, o programa dever´a mostrar uma mensagem de “elemento n˜ao encontrado”.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[2][7];
  int i, j, N, encontrado = 0;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 7; j++){
      scanf("%d", &matriz[i][j]);
    }//for
  }//for

//Lê o valor de N.
  printf("Digite o valor de N: ");
  scanf("%d", &N);

//Faz a busca do valor N na matriz.
  for(i = 0; i < 2; i++){
    for(j = 0; j < 7; j++){
      if(matriz[i][j] == N){
        printf("Localizacao do elemento: linha %d, coluna %d\n", i + 1, j + 1);
        encontrado = 1;
      }//if
    }//for
  }//for

//Verifica se o elemento foi encontrado.
  if(!encontrado){
    printf("Elemento nao encontrado.\n");
  }//if
  return 0;
}//main

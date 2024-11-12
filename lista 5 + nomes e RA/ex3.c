/*
Leia uma matriz quadrada de n´umeros inteiros com dimens˜ao 3 x 3 e verifique se ela ´e
sim´etrica em rela¸c˜ao `a diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int matriz[3][3];
  int i, j;
  int simetrica = 1;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      scanf("%d", &matriz[i][j]);
    }//for
  }//for

//Verifica se a matriz é simétrica em relação à diagonal principal.
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      if (matriz[i][j] != matriz[j][i]){
        simetrica = 0;
        break;
      }//if
    }//for
    if(!simetrica) break;
  }//for

//Imprime o resultado.
  if(simetrica){
    printf("A matriz eh simetrica em relacao a diagonal principal.\n");
  }else{
    printf("A matriz nao eh simetrica em relacao a diagonal principal.\n");
  }//else
  return 0;
}//main

//Crie um programa que calcule o determinante de qualquer matriz 3 x 3 fornecida pelo usu´ario

#include <stdio.h>

int main(){
  int matriz[3][3];
  int i, j, determinante;

//Lê a matriz.
  printf("Digite os elementos da matriz:\n");
  for(i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      scanf("%d", &matriz[i][j]);
    }//for
  }//for

//Calcula o determinante da matriz.
  determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
               - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
               + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

//Imprime o resultado.
  printf("Determinante: %d\n", determinante);
  return 0;
}//main

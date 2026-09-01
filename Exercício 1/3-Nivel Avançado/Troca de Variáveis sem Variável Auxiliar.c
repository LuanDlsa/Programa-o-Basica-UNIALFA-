#include <stdio.h>
#include <stdlib.h>
   int X;
   int Y;


int main() {
      printf("++++++++++Troca de Variaveis sem Variavel Auxiliar++++++++++\n\n");

 printf("digite qualquer numero inteiro para o valor de X\n");
    scanf(" %d", &X);

printf("\ndigite qualquer numero inteiro para o valor de Y\n");
    scanf(" %d", &Y);     
    

    printf("\nos valores digitados foram: X = %d e Y = %d\n\n\n", X, Y);

     X = X + Y;
     Y = X - Y;
     X = X - Y;
     
     printf("Trocando os valores resulta em: X = %d e Y = %d\n\n\n", X, Y);

     system("pause");
 return 0;
}
 

#include <stdio.h>
#include <stdlib.h>
int numero1; // variável 1 
int numero2; // variável 2
int resultado;


int main() {
   printf("---Soma de Numeros Interiro(int)---\n\n"); 
   printf("escreva um numero inteiro:\n");
     scanf(" %d", &numero1); //dados digitados pelo usuário 

   printf("escreva outro numero inteiro:\n");  
    scanf(" %d" , &numero2); //dados digitados pelo usuário 

       resultado = numero1 + numero2; // soma os dois numeros e armazena o valor em resultado 

   printf("O resultado da soma de %d e %d e igual a %d\n", numero1, numero2, resultado); // caulculo a soma de numero 1 e numero2, exibe o resultado na tela 

         system("pause");

      return 0;
}

#include <stdio.h>
#include <stdlib.h>
float valor1;
float valor2;
float resultado;

int main(){ 
   printf("===Conversor de Real para Dolar===\n\n");
    printf("Valor em Real\n");
      scanf(" %f", &valor1);
    
    
    printf("cotacao do dolar:\n");
      scanf(" %f", &valor2);

resultado = valor1 / valor2;
 
    printf("O valor R$ %.2f com a cotacao do dolar R$ %.2f ,  resulta em US$ %.2f", valor1, valor2, resultado);
     
    system("pause");
    
return 0;  }

#include <stdio.h>
#include <stdlib.h>
  int valor1;
 

int main() {
      printf("@@@@@@@@@@@----Verificador de Intervalos e paridades----@@@@@@@@@@@\n\n");
     
 printf("Digite um numero inteiro qualquer\n");
   scanf(" %d", &valor1);



printf("\n\ncondicoes:\n");
    printf("Se o numero for maior ou igual a 10 E menor ou igual a 100 e verdadeiro!\n");
      printf("Se o numero for par e verdadeiro!\n\n");




if (valor1 >= 10 && valor1 <= 100 && valor1 % 2 == 0) {    //O if serve para o programa tomar uma decisão com base em uma condição. 
    printf("o valor %d atende as condicoes portanto: 1 (verdadeiro)\n", valor1); }


else {  printf("o valor %d nao atende as condicoes portanto: 0 (falso)\n\n\n", valor1);  } //else significa “senão”, Ele serve para dizer ao programa o que fazer quando a condição do if for falsa
   

   





     system("pause");
 return 0;
}

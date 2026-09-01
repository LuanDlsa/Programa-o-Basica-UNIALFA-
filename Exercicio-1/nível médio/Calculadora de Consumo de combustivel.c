#include <stdio.h>
#include <stdlib.h>
float distancia;
float combustivel;
float consumomedio;


int main() {
 printf("####Calculadora de Consumo de combustivel####\n\n");
 printf("Digite a distancia percorrida\n");
  scanf(" %f", &distancia);

printf("Digite a quantidade de combustivel gasto\n");
  scanf(" %f", &combustivel);

  consumomedio = distancia / combustivel;
 
printf("o veiculo percorreu %.2f km utilizando %.2f litros de combustivel, com um consumo medio de %.2f km/L (%.2f km a cada litro)\n\n", distancia, combustivel, consumomedio, consumomedio);
// %.2f limita a exibicao do numero para duas casas decimais

      system("pause");
 return 0;
}
 

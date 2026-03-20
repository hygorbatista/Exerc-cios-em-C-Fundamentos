#include <stdio.h>

int main(){

//Variaveis exercicio 1:     
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

//Variaveis exercicio 2:
int numero01 = 10, numero02, resultado;

//Variaveis exercicio 3:
int numero001 = 1;

//Entrada de dados:
printf("Entre com o numero 1:\n");
scanf("%d", &numero1);
printf("Entre com o numero 2\n");
scanf("%d", &numero2);

//Operação soma:
soma = numero1 + numero2;

//Operação de subtração:
subtracao = numero1 - numero2;

//Operação de multiplicação:
multiplicacao = numero1 * numero2; 

//Operação de divisão:
divisao = numero1 / numero2;

//Apresentação de resultados:
printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %d\n", divisao);

//Exercicio 2:
resultado = 10;
printf("Resultado: %d\n", resultado);

resultado += 20;
printf("Resultado: %d\n", resultado);

resultado -= numero01;
printf("Resultado: %d\n", resultado);

resultado *= 5;
printf("Resultado: %d\n", resultado);

resultado /= 2;
printf("Resultado: %d\n", resultado);


//Exercicio 3: 
printf("Antes incremento: %d\n", numero001);
numero001++;
printf("Após incremento: %d\n", numero001);

printf("Antes decremento: %d\n", numero001);
numero001--;
printf("Após decremento: %d\n", numero001);



return 0;
}
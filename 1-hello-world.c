#include <stdio.h>

int main (){

    //Declarando variaveis: 
    int idade = 24;
    int quantidade = 1;
    float altura = 1.87;
    char letra = 'A';
    char nome[50] = "Hygor";

    //Apresentando as variaveis
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura);
    printf("Letra favorita é: %c\n", letra);
    printf("Exite um total de %d %s no mundo.\n", quantidade, nome);

    // Exercicio de scanf
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Ah, então sua idade na verdade é %d\n", idade);

    printf("E a sua altura é mesmo %.2f? Digite aqui sua altura verdadeira:\n", altura);
    scanf("%f", &altura);
    printf("Ahh, então sua altura na verdade era %.2f\n", altura);

    printf("Espera..você é mesmo o %s? Me fale seu nome de verdade:\n", nome);
    scanf("%49s", nome);
    printf("Haha, isso explica tudo, você se chama %s, eu estava olhando a ficha errada.\n", nome);

    printf("Pra finalizar então, imagino que %c não seja sua letra favorita né? Me fala qual é:\n", letra);
    scanf(" %c", &letra);
    printf("ah sim, %c de fato é uma ótima letra.\n", letra);

    // Exercicio de Óla Mundo:
    printf ("Hello World!\n");

    return 0;
}
#include <stdio.h>

//Exercicio Média de Aluno: 
int main(){
    int nota1, nota2, nota3, nota4;
    float media;

    printf("***Programa de calculo de média***\n");

    printf("Digite a primeira nota:\n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%d", &nota3);

    printf("Digite a quarta nota:\n");
    scanf("%d", &nota4);

    media = (float)(nota1 + nota2 + nota3 + nota4) / 4;

    printf("A média é de: %.2f\n", media);
    
return 0;    
}
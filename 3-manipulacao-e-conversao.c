#include <stdio.h>

int main(){

    //Exercicio conversão implicita:
    int a = 10;
    float b = 3.5;
    float resultado = a + b;

    printf("Resultado: %.2f\n", resultado);

    //Exercicio conversão explicita:
    int c = 10;
    int d = 3;
    float quociente = (float) a / b;

    printf("Quociente: %.2f\n", quociente);


    return 0;
}
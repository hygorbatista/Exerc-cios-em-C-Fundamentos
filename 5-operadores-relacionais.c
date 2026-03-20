#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int x = 5;
    float y = 4.5;
    char c = 'a';
    float numero1 = 10.2;
    int numero2 = 10;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d:\n", c, c);

    printf("numero1 > numero2: %d\n", numero1 > numero2),
    printf("numero 1 == numero2: %d\n", (int)numero1 == numero2);



    return 0;
}

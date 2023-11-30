//Aula 3
// Apresentação a ponteiros

#include <stdio.h>

int main() {
    int x;
    x = 10;

    int *p;
    p = &x;

    int **q;
    q = &p;

    printf("\nValor de x: %d", x);
    printf("\nEndereco de x: %p", &x);
    printf("\nEndereco de x: %p", p);
    printf("\nValor de x: %d", *p);
    printf("\nEndereco de p: %p", &p);

    return 0;
}
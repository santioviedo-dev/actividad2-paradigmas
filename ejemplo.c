#include <stdio.h>

float calcular_promedio(float a, float b, float c) {
    float suma = a + b + c;
    return suma / 3;
}

int main() {
    float n1 = 10;
    float n2 = 8;
    float n3 = 6;

    float promedio = calcular_promedio(n1, n2, n3);

    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
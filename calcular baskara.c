#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminante, x1, x2;

    // Solicitar os coeficientes da equação quadrática
    printf("Digite o coeficiente 'a': ");
    scanf("%lf", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);
    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    // Calcular o discriminante
    discriminante = b * b - 4 * a * c;

    // Verificar o valor do discriminante
    if (discriminante > 0) {
        // Duas raízes reais distintas
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Raiz 1 (X'): %.2lf\n", x1);
        printf("Raiz 2 (X''): %.2lf\n", x2);
    } else if (discriminante == 0) {
        // Uma raiz real (raízes iguais)
        x1 = -b / (2 * a);
        printf("Raiz 1 (X' e X''): %.2lf\n", x1);
    } else {
        // Nenhuma raiz real (raízes complexas)
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminante) / (2 * a);
        printf("Raiz 1 (X'): %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Raiz 2 (X''): %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}

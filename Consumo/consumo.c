#include <stdio.h>

int main() {
    int km;
    double litros, consumo;
    scanf("%d", &km);
    scanf("%lf", &litros);

    consumo = km / litros;

    printf("%.3lf km/l\n", consumo);
    return 0;
}

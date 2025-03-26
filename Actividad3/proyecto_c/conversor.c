#include <stdio.h>

void convertir_moneda(float cantidad, int opcion);

int main() {
    int opcion;
    float cantidad;

    printf("Conversor de monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dólares a Euros\n");
    printf("6. Euros a Dólares\n");
    printf("Elige una opción (1-6): ");
    scanf("%d", &opcion);

    printf("Ingresa la cantidad a convertir: ");
    scanf("%f", &cantidad);

    convertir_moneda(cantidad, opcion);

    return 0;
}

void convertir_moneda(float cantidad, int opcion) {
    float tasa_quetzal_dolar = 0.13;  // 1 Q = 0.13 USD
    float tasa_dolar_quetzal = 7.75;  // 1 USD = 7.75 Q
    float tasa_quetzal_euro = 0.12;   // 1 Q = 0.12 EUR
    float tasa_euro_quetzal = 8.33;   // 1 EUR = 8.33 Q
    float tasa_dolar_euro = 0.93;     // 1 USD = 0.93 EUR
    float tasa_euro_dolar = 1.08;     // 1 EUR = 1.08 USD

    switch (opcion) {
        case 1:
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, cantidad * tasa_quetzal_dolar);
            break;
        case 2:
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, cantidad * tasa_dolar_quetzal);
            break;
        case 3:
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, cantidad * tasa_quetzal_euro);
            break;
        case 4:
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, cantidad * tasa_euro_quetzal);
            break;
        case 5:
            printf("%.2f Dólares = %.2f Euros\n", cantidad, cantidad * tasa_dolar_euro);
            break;
        case 6:
            printf("%.2f Euros = %.2f Dólares\n", cantidad, cantidad * tasa_euro_dolar);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

#include <stdio.h>

int main() {
    char nombre[10];
    int categoria;
    int unidades;
    float total;

    int totalGeneral = 0, totalVIP = 0, totalPlatino = 0;
    float montoGeneral = 0.0, montoVIP = 0.0, montoPlatino = 0.0;

    char continuar;

    do {
        printf("\nENTRADAS\n");

        printf("Nombre del comprador: ");
        scanf(" %[^\n]", nombre);

        printf("Categorias = 1) General, 2) VIP, 3) Platino: ");
        scanf("%d", &categoria);

        if (categoria < 1 || categoria > 3) {
            printf("Categoría inválida.\n");
            continue;
        }

        printf("Cantidad de unidades (máx 15): ");
        scanf("%d", &unidades);

        if (unidades < 1 || unidades > 15) {
            printf("Cantidad inválida.\n");
            continue;
        }

        if (categoria == 1) {
            total = unidades * 10000.0;
            totalGeneral += unidades;
            montoGeneral += total;
        } else if (categoria == 2) {
            total = unidades * 32000.0;
            totalVIP += unidades;
            montoVIP += total;
        } else {
            total = unidades * 50000.0;
            totalPlatino += unidades;
            montoPlatino += total;
        }

        printf("\nResumen de transacción:\n");
        printf("Cliente: %s\n", nombre);
        if (categoria == 1) printf("Categoria: General\n");
        else if (categoria == 2) printf("Categoria: VIP\n");
        else printf("Categoria: Platino\n");
        printf("Unidades: %d\n", unidades);
        printf("Total a pagar: %.2f\n", total);

        printf("\n Quiere meter otra venta? (S o N): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nESTADISTICAS\n");
    printf("General: %d unidades, %.2f colones recaudados\n", totalGeneral, montoGeneral);
    printf("VIP: %d unidades, %.2f colones recaudados\n", totalVIP, montoVIP);
    printf("Platino: %d unidades, %.2f colones recaudados\n", totalPlatino, montoPlatino);

    return 0;
}


#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[]) {
    // Variables para almacenar las opciones y argumentos
    char *delivery = "";  // Dirección de entrega
    int thick = 0;        // Indicador de masa gruesa
    int count = 0;        // Contador para los ingredientes
    char ch;             // Variable para opciones de línea de comandos

    // Procesamiento de opciones de línea de comandos
    // -d para dirección de entrega
    // -t para masa gruesa
    while ((ch = getopt(argc, argv, "d:t")) != EOF) {
        switch (ch) {
            case 'd':
                delivery = optarg;  // Almacena la dirección de entrega
                break;
            case 't':
                thick = 1;          // Activa la opción de masa gruesa
                break;
            default:
                fprintf(stderr, "Unknown option: '%s'\n", optarg);
                return 1;          // Retorna error si opción desconocida
        } 
    }

    // Ajuste de argc y argv después del procesamiento de opciones
    argc -= optind;
    argv += optind;

    // Muestra las opciones seleccionadas
    if (thick)
        printf("Thick crust.\n");

    if (delivery[0])
        printf("To be delivered %s.\n", delivery);
    
    // Muestra los ingredientes proporcionados
    puts("Ingredients:");
    for (count = 0; count < argc; count++)
        puts(argv[count]);
    
    return 0;
}
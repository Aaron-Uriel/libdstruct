#include <stdio.h>
#include <stdlib.h>
#include <libdstruct.h>

int menu_principal(void)
{
    int opcion;
    system("clear");
    printf("*******************************\n");
    printf("|   Colas, Pilas y listas.    |\n");
    printf("._____________________________.\n");
    printf("|            Menu.            |\n");
    printf("|-----------------------------|\n");
    printf("|1.- Simplemente ligadas.     |\n");
    printf("|2.- Doblemmente ligadas.     |\n");
    printf("|3.- Con cabecera.            |\n");
    printf("|4.- Salir.                   |\n");
    printf("|_____________________________|\n");
    printf("|Opcion: ");
    scanf("%d", &opcion);
    printf("|_____________________________|\n");
    return opcion;
}

int menu_secundario(void)
{
    int opcionSecun;
    printf("\t|____________.\n");
    printf("\t|1.- Cola.   |\n");
    printf("\t|2.- Pila.   |\n");
    printf("\t|3.- Lista.  |\n");
    printf("\t|4.- Volver. |\n");
    printf("\t|____________|\n");
    printf("\t|Opcion: ");
    scanf("%d", &opcionSecun);
    printf("\t|_____________|\n");
    return opcionSecun;
}

int main(void)
{
    int opcion, opcionSecun;
    do
    {
        opcion = menu_principal();
        switch (opcion)
        {   
        case 1:
            do
            {
                opcionSecun = menu_secundario();
                switch (opcionSecun)
                {
                case 1:
                        printf("Uno");
                    break;
                case 2:
                        printf("dos");
                    break;
                case 3: 
                        printf("tres");
                    break;
                case 4: 
                    break;
                
                default:
                    printf("\tOpcion invalida.\n");
                    break;
                }
            } while (opcionSecun != 4);

            break;

        case 2:
            do
            {
                opcionSecun = menu_secundario();
                switch (opcionSecun)
                {
                case 1:
                        printf("Uno");
                    break;
                case 2:
                        printf("dos");
                    break;
                case 3: 
                        printf("tres");
                    break;
                case 4: 
                    break;
                
                default:
                    printf("\tOpcion invalida.\n");
                    break;
                }
            } while (opcionSecun != 4);

            break;

        case 3: 
            do
            {
                opcionSecun = menu_secundario();
                switch (opcionSecun)
                {
                case 1:
                        printf("Uno");
                    break;
                case 2:
                        printf("dos");
                    break;
                case 3: 
                        printf("tres");
                    break;
                case 4: 
                    break;
                
                default:
                    printf("\tOpcion invalida.\n");
                    break;
                }
            } while (opcionSecun != 4);

            break;

        case 4: 
            break;

        default:
            printf("------ Oopción invalida. ------\n");
            break;
        }
    } while (opcion != 4);
    






    return 0;
}

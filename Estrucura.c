#include <stdio.h>
struct hola
    {
        char nombre[20];
        char direcion[20];
        char carrera[20];
        int edad;
        float promedio;
    };

int main()
{
    struct hola alumnos[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Alumno %d\n", i+1);
        
        printf("Nombre: ");
        gets(alumnos[i].nombre);
        fflush(stdin);  // Limpiar el búfer del teclado
        
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        fflush(stdin);  // Limpiar el búfer del teclado
        
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin);  // Limpiar el búfer del teclado
        
        printf("\n");
    }


    return 0;
}
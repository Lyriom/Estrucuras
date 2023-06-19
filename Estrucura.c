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

    for (int i = 0; i < 5; i++)
    {
        printf("Alumno %d\n", i + 1);

        printf("Nombre: ");
        gets(alumnos[i].nombre);
        fflush(stdin); // Limpiar el búfer del teclado

        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        fflush(stdin); // Limpiar el búfer del teclado

        printf("Direcion: ");
        gets(alumnos[i].direcion);
        fflush(stdin); // Limpiar el búfer del teclado

        printf("Carrera: ");
        gets(alumnos[i].carrera);
        fflush(stdin); // Limpiar el búfer del teclado

        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin); // Limpiar el búfer del teclado
        printf("\n");
    }
printf("Datos de los alumnos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Alumno %d\n", i+1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Nombre: %s\n", alumnos[i].carrera);
        printf("Nombre: %s\n", alumnos[i].direcion);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Promedio: %.2f\n", alumnos[i].promedio);

        printf("\n");
    }
    return 0;
}
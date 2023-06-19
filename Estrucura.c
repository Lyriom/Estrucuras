#include <stdio.h>

int main()
{
    struct hola
    {
        char nombre[20];
        char direcion[20];
        char carrera[20];
        int edad;
        float promedio;
    } a1 = {"juan", "centro", "Software", 20, 9.1};
    printf("%s", a1.nombre);
    printf("los datos de estudiante 1 son \n");
    printf("%s  \n", a1.direcion);
    printf("%s  \n", a1.carrera);
    printf("%d  \n", a1.edad);
    printf("%.3f  \n", a1.promedio);

    return 0;
}
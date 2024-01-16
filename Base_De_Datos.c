/*Cada esudiante debe trabajar en el ejemplo de estructuras de la clase anterior (alumno)
y debe crear un programa que permita al usuario el ingreso de n alumnos
funciones:
gets();
puts();
fflush();
Nota: No quemas los datos en el codigo*/
#include<stdio.h>

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};

int main()
{
    int cantidad;
    printf("Ingrese el numero de alumnos: ");
    scanf("%d",&cantidad);
    struct alumno alumnos[cantidad];
    printf("Ingrese los datos de los alumnos\n");
    
    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese los datos del alumno %d\n",i+1);
        printf("Matricula: ");
        gets(alumnos[i].matricula);
        printf("Nombre: ");
        gets(alumnos[i].nombre);
        printf("Direccion: ");
        gets(alumnos[i].direccion);
        printf("Materia: ");
        gets(alumnos[i].materia);
        printf("Nota: ");
        scanf("%f",&alumnos[i].nota);
    }
    
    
    return 0;
}


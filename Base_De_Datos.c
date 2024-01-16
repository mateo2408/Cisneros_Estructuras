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
    int opcion;
    printf("Bienvenido al sistema de alumnos\n");
    printf("1. Ingresar alumnos\n");
    printf("2. Mostrar alumnos\n");
    printf("3. Buscar alumno\n");
    printf("4. Modificar alumno\n");
    printf("5. Eliminar alumno\n");
    printf("6. Salir\n");
    scanf("%d",&opcion);
    struct alumno alumnos[cantidad];
    
    switch (opcion)
    {
    case 1:
        printf("Ingrese el numero de alumnos: ");
        scanf("%d",&cantidad);
        printf("Ingrese los datos de los alumnos\n");
    
        for (int i = 0; i < cantidad; i++)
        {
            printf("Ingrese los datos del alumno %d\n",i+1);
            printf("Matricula: ");
            scanf("%d",&alumnos[i].matricula);
            fflush(stdin);
            printf("Nombre: ");
            fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);
            printf("Direccion: ");
            fgets(alumnos[i].direccion, sizeof(alumnos[i].direccion), stdin);
            printf("Materia: ");
            fgets(alumnos[i].materia, sizeof(alumnos[i].materia), stdin);
            printf("Nota: ");
            scanf("%f",&alumnos[i].nota);
            fflush(stdin);
        }
        break;
    case 2:
        printf("Los datos de los alumnos son:\n");
        for (int i = 0; i < cantidad; i++)
        {
            printf("Datos del alumno %d\n",i+1);
            printf("Matricula: %d\n",alumnos[i].matricula);
            printf("Nombre: %s\n",alumnos[i].nombre);
            printf("Direccion: %s\n",alumnos[i].direccion);
            printf("Materia: %s\n",alumnos[i].materia);
            printf("Nota: %.2f\n",alumnos[i].nota);
        }
        break;

    case 3:
        printf("Ingrese la matricula del alumno a buscar: ");
        scanf("%d",&cantidad);
        for (int i = 0; i < cantidad; i++)
        {
            if (alumnos[i].matricula == cantidad)
            {
                printf("Datos del alumno %d\n",i+1);
                printf("Matricula: %d\n",alumnos[i].matricula);
                printf("Nombre: %s\n",alumnos[i].nombre);
                printf("Direccion: %s\n",alumnos[i].direccion);
                printf("Materia: %s\n",alumnos[i].materia);
                printf("Nota: %.2f\n",alumnos[i].nota);
            }
        }
        break;

    case 4:
        printf("Ingrese la matricula del alumno a modificar: ");
        scanf("%d",&cantidad);
        for (int i = 0; i < cantidad; i++)
        {
            if (alumnos[i].matricula == cantidad)
            {
                printf("Ingrese los datos del alumno %d\n",i+1);
                printf("Matricula: ");
                scanf("%d",&alumnos[i].matricula);
                fflush(stdin);
                printf("Nombre: ");
                fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);
                printf("Direccion: ");
                fgets(alumnos[i].direccion, sizeof(alumnos[i].direccion), stdin);
                printf("Materia: ");
                fgets(alumnos[i].materia, sizeof(alumnos[i].materia), stdin);
                printf("Nota: ");
                scanf("%f",&alumnos[i].nota);
                fflush(stdin);
            }
        }
        break;

    case 5:
        printf("Ingrese la matricula del alumno a eliminar: ");
        scanf("%d",&cantidad);
        for (int i = 0; i < cantidad; i++)
        {
            if (alumnos[i].matricula == cantidad)
            {
                alumnos[i].matricula = 0;
                alumnos[i].nombre[0] = '\0';
                alumnos[i].direccion[0] = '\0';
                alumnos[i].materia[0] = '\0';
                alumnos[i].nota = 0;
            }
        }
        break;
    
    default:
        break;
    }
    
    
    return 0;
}


#include <stdio.h>
/*
Enunciado parcialito:
 Desarrollar un programa que pida al usuario, por pantalla,
que ingrese las notas de los alumnos del curso.
 Las notas se seguirán cargando hasta que ingrese -1.
 Una vez que finalice la carga, se tiene que mostrar por pantalla el promedio.
 */
int main() {
    float nota=0 , sum=0 , cont =0;
    while(nota!=-1){
    printf("Ingrese notas del alumno - -1 para finalizar la carga : \n");
    scanf("%f",&nota);
    if(nota!=-1){
        cont++;
    sum=sum+nota;
        }
    }
    printf("Se cargaron %.f Notas - El promedio del alumno es %.2f",cont,sum/cont);

    return 0;
}

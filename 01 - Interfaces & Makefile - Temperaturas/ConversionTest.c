#include<stdio.h>
#include<assert.h>
#include "Conversion.h"

int main(){
    printf("\n Comienzo del testeo \n ");

    printf("\n Testeo para la funcion Farenheit \n ");

    assert(Farenheit(32)==0.0);
    printf("\n Prueba 1 superada \n");

    assert(Farenheit(122)==50.0);
    printf("\n Prueba 2 superada \n");

    assert(Farenheit(212)==10.0);
    printf("\n Prueba 3 superada \n");

    printf("\n El testeo para Farenheit fue completado con exito \n");    

    printf("\n Testeo para la funcion Celsius \n ");

    assert(Celsius(0)==32.0);
    printf("\n Prueba 1 superada \n");

    assert(Celsius(50)==122.0);
    printf("\n Prueba 2 superada \n");

    assert(Celsius(100)==212.0);
    printf("\n Prueba 3 superada \n");

    printf("\n El testeo para Celsius fue completado con exito \n");

    printf("\n El programa esta en buenas condiciones \n");    

    getchar();

    
}
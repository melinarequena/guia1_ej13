//
// Created by Administrador on 1/6/2023.
//
/*Dada una lista de personas, diseñar las siguientes funciones:
a. Calcular la cantidad de personas en la lista.
b. El promedio de edades.
*/
#include "Personas.h"
#include <stdio.h>
#include <malloc.h>

Persona * newPersona (int edad){
    Persona * auxPersona = NULL;
    auxPersona = malloc(sizeof(Persona));
    if(auxPersona == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }else
        auxPersona->sig = NULL;
        auxPersona->edad = edad;

        return auxPersona;
}

Lista * newLista(){
    Lista * auxLista = NULL;
    auxLista = malloc(sizeof(Lista));
    auxLista->cabecera = NULL;

    return auxLista;
}

void enlistar(Persona * personaALlenar, Lista * lista){
    if(lista->cabecera == NULL){//Lista vacia
        lista->cabecera = personaALlenar;
    }else//Lista no vacia
        while(lista->cabecera != NULL){
            lista->cabecera = lista->cabecera->sig;
        }
        lista->cabecera = personaALlenar;
}

//
// Created by Administrador on 1/6/2023.
//

#ifndef GUIA1_EJ13_PERSONAS_H
#define GUIA1_EJ13_PERSONAS_H

/*Dada una lista de personas, diseñar las siguientes funciones:
a. Calcular la cantidad de personas en la lista.
b. El promedio de edades.
*/

typedef struct persona{
    int edad;
    struct persona * sig;
}Persona;

typedef struct lista{
    Persona * cabecera;
}Lista;

Persona * newPersona (int edad);
Lista * newLista();
void enlistar(Persona * personaALlenar, Lista * lista);
void contar(Lista * lista);
void promedio(Lista * lista);

#endif //GUIA1_EJ13_PERSONAS_H

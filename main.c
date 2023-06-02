/*Dada una lista de personas, diseñar las siguientes funciones:
a. Calcular la cantidad de personas en la lista.
b. El promedio de edades.
*/


#include "Personas.h"

int main(){
    Lista * lista = newLista();
    enlistar(newPersona(5), lista);
    enlistar(newPersona(20), lista);
    enlistar(newPersona(45), lista);
    enlistar(newPersona(67), lista);
    enlistar(newPersona(18), lista);
    enlistar(newPersona(20), lista);
    enlistar(newPersona(28), lista);
    enlistar(newPersona(90), lista);

    contar(lista);
    promedio(lista);

    return 0;

}

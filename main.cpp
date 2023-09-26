#include <iostream>
#include "cola.hpp"

int main()
{
    Cola miCola;
    Estudiante miEstudiante;
    int opc;

    do{
        std::cout << " |****COLAS ESTATICAS****| " << std::endl << std::endl;
        std::cout << " 1. Dar de alta " << std::endl;
        std::cout << " 2. Elaborar una solicitud " << std::endl;
        std::cout << " 3. Salir " << std::endl;
        std::cout << " Elige una opcion: ";
        std::cin >> opc;

        switch(opc){
            case 1: std::cin >> miEstudiante;
                    miCola.enqueue(miEstudiante);
                break;
            case 2: miCola.dequeue();
                break;
            case 3: std::cout << " Saliendo..." << std::endl << std::endl;
                break;
            default: std::cout << " Opcion invalida..." << std::endl << std::endl;
                break;

        }
    }while(opc!=3);

    return 0;
}

